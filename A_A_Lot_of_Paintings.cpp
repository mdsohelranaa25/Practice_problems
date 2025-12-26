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
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
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
  ll i=0;
  ll gc=0;
  while(i<n&&v[i]==0) i++;
  if(i==n) gc=1;
  else gc=v[i];
    itr(i,n) {if(v[i]!=0) gc=__gcd(gc,v[i]);
    }

   ll sum=gc*100;
   ll summ=0;
   vc(vv,n);
   itr(i,n){
    vv[i]=v[i]*sum;
    vv[i]/=100;
    summ+=vv[i];
   }
   if(summ==sum) {
    yes;
    itr(i,n) cout<<vv[i]<<' ';
    endd;
   }
   else no;
   cerr<<sum<<' '<<summ<<endl;
   

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
