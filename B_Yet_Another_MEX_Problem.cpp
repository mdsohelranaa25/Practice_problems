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
#define f ff
#define sc second
#define endl '\n'
const int N = 1e6 + 1;
vector<bool> isprime(N, false);
vector<ll> primes;


void solve()
{

  ll n,k;
  cin>>n>>k;
  vc(v,n);
  itr(i,n)cin>>v[i];
  
  ll mx=0;
  vector<ll>g;
  for(int i=0;i<k;i++){
    g.push_back(v[i]);

  }
  map<ll,ll>mpp;
  itr(i,n) mpp[v[i]]++;
  ll ans=k-1;
  for(ll i=0;i<k;i++){
    if(mpp[i]==0) ans=min(ans,i);

  }
  cout<<ans<<endl;
  /*
  srt(g);
  map<ll,ll>mp;
  itr(i,g.size()) mp[g[i]]++;
  priority_queue<ll, vector<ll>, greater<ll>> pq;
  for(int i=0;i<=k;i++) if(mp[i]==0) pq.push(i);
  ll first=pq.top();
  ll ans=first;
  
 // cerr<<ans<<' ';
  for(int i=k;i<n;i++){
    if(v[i-k]<=k){
    mp[v[i-k]]--;
    if(mp[v[i-k]]==0) pq.push(v[i-k]);
    }
    if(v[i]<=k){
        mp[v[i]]++;
        

    }
   // cerr<<pq.top()<<' ';
    while(mp[pq.top()]>0) pq.pop();
    ans=max(ans,pq.top());
    //fcerr<<ans<<' '<<pq.top()<<endl;
    
    
  }
  cout<<min(ans,k-1)<<endl;
  
//   bool f=0;
//   ll cnt=0;
//   itr(i,k){
//     if(mp[i]>1) f=1;
//     cnt+=mp[i];

*/

//   }
//   if(cnt<k) cout<<ans<<endl;
//   else if(f) cout<<ans<<endl;
//   else cout<<ans-1<<endl;




}
int main()
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
