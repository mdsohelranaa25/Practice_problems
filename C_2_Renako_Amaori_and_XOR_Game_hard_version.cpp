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
  cin>>n;
  vc(v,n);
  vc(vv,n);
  ll x=0;
  itr(i,n) {cin>>v[i];
    x^=v[i];
   // cerr<<v[i]<<' ';
  //  cerr<<x<<' '<<i<<endl;
  }
 // cerr<<endl;
  itr(i,n) {cin>>vv[i];
   // cerr<<vv[i]<<' ';
    x^=vv[i];
      ///cerr<<x<<' '<<i<<endl;
  }
  //<<endl;
 
  if(x==0){
    cout<<"Tie"<<endl;
    return;
  }
  
  bitset<40>k=x;
  ll lb=-1;
  for(int i=0;i<40;i++) if(k[i]==1) lb=i;
  ll lv=(1LL)<<(lb*1LL);
  //cerr<<lv<<endl;
  ll cn=-1;
  for(int i=n-1;i>=0;i--){
   // cerr<<(v[i]&lv)<<' '<<(vv[i]&lv)<<' '<<v[i]<<' '<<vv[i]<<endl;
    if((v[i]&lv)!=(vv[i]&lv)){
        cn=i;
        break;
    }
    


  }
 // cerr<<cn<<endl;
  if(cn%2==0) cout<<"Ajisai"<<endl;
  else cout<<"Mai"<<endl;



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
