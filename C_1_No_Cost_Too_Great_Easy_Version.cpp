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
const int N = 3e5 + 1;
vector<bool> isprime(N+5, false);
vector<ll> primes;
vector<int> divs[N+1];   
ll ts=0;
void sieve() {
  for (int i = 3; i < N; i += 2) {
    isprime[i] = 1;
  }
  for (int i = 3; i * i < N; i += 2) {
    if (isprime[i]) {
      for (int j = i * i; j < N; j += i) {
        isprime[j] = 0;
      }
    }
  }
  isprime[2] = 1;
  for (int i = 2; i < N; i++) {
    if(isprime[i]){
      primes.push_back(i);
    }
  }
}
vector<ll> f(ll u){
  vector<ll>res;
  for(auto x:primes){
    if(x*x>u) break;
    else if(u%x==0)
    {
      res.push_back(x);
      while(u%x==0) u/=x;
    }
  }
  if(u>1) res.push_back(u);
  return res;
}


void solve() {
    ts++;
ll n;
cin >> n;
vc(v, n);
vc(vv, n);
itr(i, n) cin >> v[i];
itr(i, n) cin >> vv[i];
// if(ts==144){
//     cout<<n;
//     for(auto x:v) cout<<x<<'s';
//     cout<<endl;
//     return;
// }

ll need = 2;
map<ll, ll> mp,mpp;

for (int i = 0; i < n; i++) {
  vector<ll>dv=f(v[i]);
  //cerr<<endl<<v[i]<<endl;
  for(auto x:dv){
  //  cerr<<x<<' ';
    if(mp.count(x)) need=0;
    if(mpp.count(x)) need=min(need,1LL);
    mp[x]=1;
  }
  vector<ll>dvv=f(v[i]+1);
  for(auto x:dvv){
   if(mp.count(x)) need=min(need,1LL);
    mpp[x]=1;
  }
 
}
cout<<need<<endl;



}


// for (auto x : primes) {
//     if(need==0) break;
//     if(need==1) break;
//     if (x > v[n - 1]) break;
//     if (mp[x] > 1) {
//         need = 0;
//         break;
//     } else if (mp[x] == 1) {
//        // cerr<<"x "<<x<<endl;

//         for (auto y : v) {
//            // cerr<<y<<' '<<x<<endl;
            
//             if (y % x != 0) {need = min(need, x - (y % x));
//              //   cerr<<need<<' '<<x-(y%x)<<endl;
//         }
//     }
//     }
// }







int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
   sieve();
  // divis();
  ll ts;
  cin>>ts;
  while(ts--)
  {
    solve();
  }
}