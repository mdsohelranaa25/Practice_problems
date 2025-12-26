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
  map<ll,ll>mp;
  mp[1]=1;
  mp[2]=0;
  ll now=1;
  ll pos=0,neg=0;
  for(int i=0;i<n;i++){
   // cerr<<now<<' ';
    now*=v[i];
    if(now>=1) now=1;
    else now=-1;
    //cerr<<mp[1]<< ' '<<mp[2]<<' '<<now<<endl;
    if(now>=1) {
        pos+=mp[1];
        mp[1]++;
        neg+=mp[2];
    }
    else{
        pos+=mp[2];
        mp[2]++;
        neg+=mp[1];
    }
   // cerr<<mp[1]<<' '<<mp[2]<<endl;
   ////// cerr<<i<<' '<<pos<<' '<<neg<<endl;
  }
  cout<<neg<<' '<<pos<<endl;

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
