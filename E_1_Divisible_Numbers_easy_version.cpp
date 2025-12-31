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
ll lcm(ll a,ll b){
    ll mul=a*b;
    ll g=__gcd(a,b);
    return mul/g;
}

void solve()
{

  ll a,b,c,d;
  cin>>a>>b>>c>>d;
   ll ansa=-1,ansb=-1;
//   ll mul=a*b;
//   bool f=0;
//   //cerr<<"x "<<endl;
//   for(ll i=a+1;i<=c;i++){
//    // cerr<<i<<' ';
//     if(f) break;
//     ll baki;
//     if(mul%i==0) baki=mul/i;
//     else{
//     ll g=__gcd(mul,i);
//     //cerr<<g<<' ';
//     ll lc=lcm(mul,i);
//    // cerr<<lc<<' ';
//      baki=lc;
//    // cerr<<baki<<' ';
//         baki/=i;
//     }
//     if(baki<=b){
//     ll lagbe=b/baki;
//     lagbe++;
//     baki*=lagbe;
//     }
//    // cerr<<baki<<endl;

//     if(baki>d) continue;
//     else {
//         ansa=i;
//         ansb=baki;
//         f=1;


//     }

//   }
vector<ll>p,pp;
for(ll i=1;i*i<=a;i++) {
    if(a%i==0){
        p.push_back(i);
        if(a/i!=i) p.push_back(a/i);
    }
}
for(ll i=1;i*i<=b;i++) {
    if(b%i==0){
        pp.push_back(i);
        if(b/i!=i) pp.push_back(b/i);
    }
}
for(auto P:p){
    for(auto Q:pp){
        ll tmpx=P*Q;
        ll x=(a/tmpx+1)*tmpx;
        ll tmpy=(a*b)/tmpx;
        ll y=(b/tmpy+1)*tmpy;
        if(x>c||y>d) continue;
        else {
            cout<<x<<' '<<y<<endl;
            return;
        }
    }
}

  cout<<ansa<< ' '<<ansb<<endl;
  return;

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
