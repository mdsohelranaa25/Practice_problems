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
const int N = 3e5 + 1;
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
    for(int i=2;i<=N;i++) if(spf[i]==i) primes.push_back(i);
}
void solve()
{
ll n;
cin>>n;
vc(v,n);
itr(i,n)cin>>v[i];
vector<vector<ll>>freq(3e5+15);
//cerr<<"x "<<endl;
itr(i,n){
   
    ll now=v[i];
    while(now>1){
        ll ekhon=spf[now];
        ll cnt=0;
        while(now%ekhon==0){
            cnt++;
            now/=ekhon;

        }
       // cerr<<now<<' '<<ekhon<<endl;
        freq[ekhon].push_back(cnt);
    }

}
//cerr<<"x "<<endl;
ll ans=1;
for(auto x:primes){
    ll i=x;
    if(freq[i].size()==n) {
    
        srt(freq[i]);
        ll cnt=freq[i][1];
        ll ekhon=1;
        while(cnt--) ekhon*=x;
        ans*=ekhon;

    }
    else if(freq[i].size()==n-1){
        srt(freq[i]);
        ll cnt=freq[i][0];
        ll ekhon=1;
        while(cnt--) ekhon*=x;
        ans*=ekhon;

    }
}
cout<<ans<<endl;
  

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  //tt
  spff();
  {
    solve();
  }
}
