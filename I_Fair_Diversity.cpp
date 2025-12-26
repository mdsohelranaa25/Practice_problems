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
const int N = 1e6 + 1;
vector<bool> isprime(N, false);
vector<ll> primes;


void solve()
{

  ll n,m;
  cin>>n>>m;
  vector<ll>v(n+1,0);
  ll mx=0;
  while(m--){
    ll a,b;
    cin>>a>>b;
    v[a]++;
    v[b]++;
    mx=max(mx,v[a]);
    mx=max(mx,v[b]);
  }
  ll need=0;
  ll ans=-1;
  //for(int i=1;i<=n;i++) cerr<<v[i]<<' ';
  srt(v);
  ll got=0;
  for(int i=1;i<=n;i++) got+=v[i];
  for(int i=mx;i<=1000000;i++){
    if(ans!=-1) break;
    ll now=i*n;
    ll needd=now-got;
    if(needd%2==0){
       // cerr<<i<<' ';
        bool f=0;
        ll need=0;
        for(int j=1;j<=n;j++){
            
            ll dif=i-v[j];
           // cerr<<dif<<' '<<needd/2<<endl;
            if(dif>needd/2) {
               
            
                f=1;
            break;
            }
            else need+=dif;
        
        }
        //cerr<<need<<' '<<needd<<endl;
        if(f==0){
            ans=i;
            break;
        }
        

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
 // tt
  {
    solve();
  }
}
