//AI Written code for test

#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 1e5+5;
const int K = 11;

struct SegTree {
    int n;
    vector<long long> tree;
    SegTree(int n): n(n), tree(4*n,0) {}
    void update(int node,int l,int r,int idx,long long val){
        if(l==r){
            tree[node]+=val;
            return;
        }
        int mid=(l+r)/2;
        if(idx<=mid) update(node*2,l,mid,idx,val);
        else update(node*2+1,mid+1,r,idx,val);
        tree[node]=tree[node*2]+tree[node*2+1];
    }
    long long query(int node,int l,int r,int ql,int qr){
        if(r<ql || l>qr) return 0;
        if(ql<=l && r<=qr) return tree[node];
        int mid=(l+r)/2;
        return query(node*2,l,mid,ql,qr)+query(node*2+1,mid+1,r,ql,qr);
    }
};

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k; cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    // compress values
    vector<int> cmp = a;
    sort(cmp.begin(),cmp.end());
    cmp.erase(unique(cmp.begin(),cmp.end()), cmp.end());
    auto getID=[&](int x){
        return lower_bound(cmp.begin(),cmp.end(),x)-cmp.begin()+1;
    };
    int m = cmp.size();

    // segment trees for each length
    vector<SegTree> trees(k+2, SegTree(m));

    for(int i=0;i<n;i++){
        int id = getID(a[i]);
        // length 1 subsequence
        trees[1].update(1,1,m,id,1);

        for(int len=2;len<=k+1;len++){
            long long cnt = trees[len-1].query(1,1,m,1,id-1);
            if(cnt>0) trees[len].update(1,1,m,id,cnt);
        }
    }

    
    long long ans = trees[k+1].query(1,1,m,1,m);
    cout<<ans<<endl;
}
