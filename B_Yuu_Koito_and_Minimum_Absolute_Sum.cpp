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

  
ll n;
cin>>n;
vc(v,n);
itr(i,n) cin>>v[i];
for(int i=1;i<n-1;i++) if(v[i]==-1) v[i]=0;
ll i=0,j=n-1;
if(v[0]==v[n-1]){
    if(v[0]==-1)v[0]=v[n-1]=0;
 cout<<abs(v[n-1]-v[0])<<endl;
    for(auto x:v) cout<<x<<' ';
    endd;
}
else{
    if(v[0]==-1) v[0]=v[n-1];
    else if(v[n-1]==-1) v[n-1]=v[0];
    cout<<abs(v[n-1]-v[0])<<endl;
    for(auto x:v) cout<<x<<' ';
    endd;
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
