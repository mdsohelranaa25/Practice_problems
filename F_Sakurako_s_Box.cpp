/*
    //! In The Name Of Allah
*/

#include<bits/stdc++.h>
using namespace std;
#define tt int t;cin>>t;while(t--)
#define itr(i,a) for(int i=0;i<a;i++)
#define ittr(i,bg,a) for(int i=bg;i<a;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long
#define endd cout<<endl
#define vc(v, n) vector<ll> v(n)  
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a,x) a.push_back(x)
#define MOD 1000000007
#define f first
#define sc second
#define endl '\n'
const int N=1e5+5;
vector<ll>fact_ar(N,1),modinv(N,1);
ll power(ll x,ll mod){
    if(mod<0) return 0;
    ll ans=1;
    while(mod){
        if(mod%2==0){
            x=(x*x)%MOD;
            mod/=2;
        }
        else{
            ans=(ans*x)%MOD;
            mod--;
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt{
        ll n;
        cin>>n;
        vc(v,n);
        itr(i,n) cin>>v[i];

        vector<ll> pre(n+5);
        pre[n-1]=0;
        for(int i=n-1;i>0;i--){
            pre[i-1]=(pre[i]+v[i])%MOD;
        }

        ll sum=0;
        itr(i,n){
            sum=(sum+(v[i]*pre[i])%MOD)%MOD;
        }

        ll tot=(n*1LL*(n-1)/2)%MOD;
        tot=power(tot,MOD-2);

        cout<<(sum*tot)%MOD<<endl;
    }
}
