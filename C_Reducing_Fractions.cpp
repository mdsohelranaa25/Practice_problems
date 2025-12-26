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
#define ll long long
#define endd cout << endl
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a, x) a.push_back(x)
#define MOD 1000000007
#define f first
#define sc second
#define endl '\n'
const int N = 1e7 + 7;
vector<bool> isprime(N, false);
vector<ll> primes;

vector<ll>spf(N+5,0);
void spff(){

    for(ll i=2;i<=N;i++) spf[i]=i;
    for(ll i=2;i*i<=N;i++){
        if(spf[i]==i){
            for(int j=i;j<=N;j+=i) spf[j]=min(spf[j],i);
        }
    }
}

void solve()
{
ll n,m;
cin>>n>>m;
vc(v,n);
vc(vv,m);
itr(i,n)cin>>v[i];
itr(i,m) cin>>vv[i];
unordered_map<ll,ll>mp,mpp;

itr(i,m){
   
    ll now=vv[i];
    ll cnt=0;
    ll dv=spf[now];
    while(now>1){
        cnt=0;
        dv=spf[now];
        while(now%dv==0) {
            cnt++;
            now/=dv;
        }
        mpp[dv]+=cnt;

    }
     

}


itr(i,n){
    ll thakbe=1;
    ll now=v[i];
    while(now>1){
        ll dv=spf[now];
        if(mpp[dv]>0){
          //  st.insert(dv);
            mp[dv]++;
            mpp[dv]--;
            now/=dv;
        }
        else {
            now/=dv;
            thakbe*=dv;
        }
       
    }
    v[i]=thakbe;
}
itr(i,m){
    ll thakbe=1;
    ll now=vv[i];
    while(now>1){
        ll dv=spf[now];
        if(mp[dv]>0){
            //st.insert(dv);
          ///  mp[dv]++;
            mp[dv]--;
            now/=dv;
        }
        else {
            now/=dv;
            thakbe*=dv;
        }
       
    }
    vv[i]=thakbe;

}
cout<<n<<' '<<m<<endl;
for(auto x:v) cout<<x<<' ';
endd;
for(auto x:vv)cout<<x<<' ';
endd;

  

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
 // tt
 spff();
  {
    solve();
  }
}
