#include<bits/stdc++.h>
using namespace std;
#define tt int t;cin>>t;while(t--)
#define vc(v, n) vector<long long> v(n)
#define endd cout<<endl
#define pb(a,x) a.push_back(x)
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt{
        ll l,r;
        cin>>l>>r;
        ll n=r-l+1;
        vc(v,n+2);
        ll now=r;
  ll index=(ll)log2(now);
        while(now>=l){
            bitset<55> k=now;
            ll cur=0,lst=0;
          
            for(ll i=0;i<=index;i++){
                if(k[i]==0) cur+=(1LL<<i);
                if(cur>r) break;
                if(cur>=l&&v[cur-l]==0 ) lst=cur;
            }
            v[lst-l]=now;
            now--;
        }

        ll ans=0;
        for(int i=0;i<n;i++){
            ans+=(v[i]|(i+l));
        }
        cout<<ans<<endl;
        for(int i=0;i<n;i++) cout<<v[i]<<' ';
        endd;
    }
}
