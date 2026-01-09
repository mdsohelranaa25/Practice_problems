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

#define sc second
#define endl '\n'
const int N = 1e6 + 1;
vector<bool> isprime(N, false);
vector<ll> primes;

vector<ll>a,b;
void f(){
    ll sa=0,sb=0;
    for(int i=0;sa<=2e6 or sb<=2e6;i++){
        if(i%2==0){
            sa+=(1<<i);
        }
        else sb+=(1<<i);
        a.push_back(sa);
        b.push_back(sb);
    }
}
void solve()
{
    ll x,y;
    cin>>x>>y;
   ll up=upper_bound(a.begin(),a.end(),x)-a.begin();
   ll lo=upper_bound(b.begin(),b.end(),y)-b.begin();
   ll ans=min(up,lo);
   up=upper_bound(b.begin(),b.end(),x)-b.begin();
   lo=upper_bound(a.begin(),a.end(),y)-a.begin();
   ans=max(ans,min(up,lo));
   cout<<ans<<endl;

  

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  f();
  tt
  {
    solve();
  }
}
