/*
  //! In The Name Of Allah




*/
#include <bits/stdc++.h>
using namespace std;
#define tt  \
  int t;    \
  cin >> t; \
  while (t--)

#define itr(i, a) for (int i = 0; i < a; i++)
#define ittr(i, bg, a) for (int i = bg; i < a; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll int
#define endd cout << endl
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a, x) a.push_back(x)
#define MOD 1000000007
#define f first
#define sc second
#define endl '\n'
const int N = 1e6 + 1;
vector<bool> isprime(N, false);
vector<ll> primes;
struct node{
int last_element_occ,first_element_occ;
int first_element,last_element;
int strongest;
};
node tr[4*N];
ll v[N];
node marge(node l,node r){
    if(l.first_element==-1) return r;
    if(r.first_element==-1) return l;
    node ans;
    ans.first_element=l.first_element;
    ans.last_element=r.last_element;
    ans.first_element_occ=l.first_element_occ;
    if(l.first_element==r.first_element) ans.first_element_occ+=r.first_element_occ;
    ans.last_element_occ=r.last_element_occ;
    if(ans.last_element==l.last_element) ans.last_element_occ+=l.last_element_occ;
    ans.strongest=max(l.strongest,r.strongest);
    if(l.last_element==r.first_element) ans.strongest=max(ans.strongest,(l.last_element_occ+r.last_element_occ));
    return ans;
}
void init(int ind,int b,int e){
    if(b==e) {
       tr[ind].first_element=tr[ind].last_element=v[b];
       tr[ind].first_element_occ=1;
       tr[ind].last_element_occ=1;
       tr[ind].strongest=1;
       return;
    }
    int mid=(b+e)/2;
    init(ind*2,b,mid);
    init(ind*2+1,mid+1,e);
    tr[ind]=marge(tr[ind*2],tr[ind*2+1]);
}

node ask(int ind,int b,int e,int i,int j){
    if(b>j||e<i) return {-1,-1,-1,-1,-1};

    if(b>=i&&e<=j) return tr[ind];
    int mid=(b+e)/2;
    node left=ask(ind*2,b,mid,i,j);
    node right=ask(ind*2+1,mid+1,e,i,j);
    return marge(left,right);
}
void solve()
{
    ll n,c,q;cin>>n>>c>>q;
    
    for(int i=1;i<=n;i++) cin>>v[i];
    init(1,1,n);
    ///cerr<<"h"<<endl;
    while(q--){
        ll x,y;
        cin>>x>>y;
        node ans=ask(1,1,n,x,y);
        cout<<ans.strongest<<endl;
    }


  

}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  tt
  {
    solve();
  }
}
