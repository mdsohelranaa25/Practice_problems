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
void sieve()
{
  isprime[1] = false;
  isprime[2] = true;
  pb(primes, 2);
  for (int i = 3; i * i <= N; i += 2)
    isprime[i] = true;
  for (int i = 3; i <= N; i += 2)
  {
    if (isprime[i])
    {
      pb(primes, i);
      for (int j = i * i; j <= N; j += i)
      {
        isprime[j] = false;
      }
    }
  }
}

void solve()
{

  ll n;
  cin>>n;
  vc(v,n);
  itr(i,n) cin>>v[i];
  map<ll,ll>mp; 
    vc(pre,n+5);
    vc(close,n+5);
    for(int i=n-1;i>=0;i--){
        
        ll p=INT_MAX;
        if(mp[v[i]]) p=mp[v[i]];
        if(v[i]%2==0){
            if(mp[v[i]/2]>i) p=min(p,mp[v[i]/2]);
        }
        if(v[i]%4==0){
            if(mp[v[i]/4]>i) p=min(p,mp[v[i]/4]);
        }
        if(mp[v[i]*2]>i) p=min(p,mp[v[i]*2]);
        if(mp[v[i]*4]>i)p=min(p,mp[v[i]*4]);
         pre[i]=p;
        //cerr<<i<< ' '<<pre[i]<<endl;
        mp[v[i]]=i;
    }
    ll last=INT_MAX;
   // cerr<<endl;
    for(int i=n-1;i>=0;i--){

        if(pre[i]!=INT_MAX){
            last=min(last,pre[i]);
        }
        close[i]=last;
       // cerr<<i<<' '<<close[i]<<endl;
    }
    ll m;
    cin>>m;
    while(m--){
        ll  x,y;
        cin>>x>>y;
        x--;
        y--;
        if(close[x]==INT_MAX) no;
        else if(close[x]<=(y)) yes;
        else no;
    }


}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
 
    solve();
  
}
