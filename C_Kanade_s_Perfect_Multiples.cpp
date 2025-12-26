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

  ll n,k;
  cin>>n>>k;
 vc(v,n);
 multiset<ll>st;
  unordered_map<ll,ll>mp,mpp;
  itr(i,n){
    cin>>v[i];
    mp[v[i]]++;
  }
  srt(v);

  bool f=0;
  vector<ll>ans;
  for(int i=0;i<n;i++){
    if(f) break;
   if(mpp[v[i]]>0) continue;
    ll x=v[i];
    ans.push_back(x);
    while(x<=k){
        if(mp[x]==0){
            f=1;
            break;
        }
        else {
            mpp[x]++;
            x+=v[i];
    }


  }
}
if(f) cout<<-1<<endl;
else{
    cout<<ans.size()<<endl;
    for(auto x:ans)cout<<x<<' ';
    cout<<endl;
}

  
 
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
