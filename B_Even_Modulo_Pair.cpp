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
  vector<int>ev,v;
  itr(i,n){
    ll x;
    cin>>x;
    if(x%2==0) ev.push_back(x);
    else v.push_back(x);
  }
  if(ev.size()>=2)  cout<<ev[0]<<' '<<ev[1]<<endl;
  else {
    if(ev.size()==1) v.push_back(ev[0]);
    srt(v);
    bool f=0;
    for(int i=0;i<v.size();i++){
      if(f) break;
      for(int j=i+1;j<v.size();j++){
        if((v[j]%v[i])%2==0){
          cout<<v[i]<<' '<<v[j]<<endl;
          f=1;
          break;
        }
      }
    }
    if(f==0) cout<<-1<<endl;
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
