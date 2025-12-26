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
map<ll,ll>mp;
vector<ll>v;
itr(i,n){
    ll x;
    cin>>x;
    if(x<0){
        if(x==-1) mp[1]++;
        else mp[2]++;
    }
    else v.push_back(x);
}
srt(v);
v.erase(unique(v.begin(),v.end()), v.end());
ll ans=0;
n=v.size();
map<ll,ll>mpp;
itr(i,n) mpp[v[i]]++;

ans=max(min(m,mp[1]+n),min(m,mp[2]+n));
for(int i=n-1;i>=0;i--){
    ll now=v[i];
    ll upore=n-i;
    ll upbaki=m-now+1;
    ll ekhon=min(upbaki,upore+mp[2]);
ll age=min(now-1,i+mp[1]);
ans=max(ans,ekhon+age);
}
cout<<ans<<endl;

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
