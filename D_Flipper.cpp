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
  itr(i,n)cin>>v[i];
  vector<ll>ans;
  ll i=0;

  if(v[0]==n){
    while(i<n&&v[i]!=n-1) i++;
    
  }
  else{
    while(i<n&&v[i]!=n) i++;
  }
  ll j=i;


  while(j<n){
    ans.push_back(v[j]);
    j++;
  }
  if(i!=n-1) {
    ans.push_back(v[i-1]);
    i-=2;
  }
  else i--;
  j=0;
  bool f=0;
  while(i>=j){
    if(f){
        ans.push_back(v[j]);
        j++;
    }
    else {
        if(v[j]>=v[i]){
            f=1;
            ans.push_back(v[j]);
            j++;
        }
        else{
            ans.push_back(v[i]);
            i--;
        }
    }
  }
  for(auto x:ans) cout<<x<<' ';
  cout<<endl;

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
