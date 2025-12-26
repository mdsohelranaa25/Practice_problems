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
ll n,m,k;
ll tar;
cin>>n>>m>>k;
cin>>tar;
vector<ll>one,two,thr;
for(int i=1;i*i<=n,i<=tar;i++){
    if(n%i==0){
        one.push_back(i);
        if(n/i!=i&&n/i<=tar) one.push_back(n/i);
    }
}
for(int i=1;i*i<=m,i<=tar;i++){
    if(m%i==0){
        two.push_back(i);
        if(m/i!=i&&m/i<=tar) two.push_back(m/i);
    }
}
for(int i=1;i*i<=k,i<=tar;i++){
    if(k%i==0){
        thr.push_back(i);
        if(k/i!=i&&k/i<=tar) thr.push_back(k/i);
    }
}
ll ans1=-1,ans2=-1,ans3=-1;
for(auto x:one){
     if(ans1!=-1) break;
    for(auto y:two){
        if(ans1!=-1) break;
        if(x*y>tar) break;
        for(auto z:thr) if(x*y*z==tar){
          //
          // 
            cerr<<x*y*z<<' '<<x<<' '<<y<<' '<<z<<endl;
            ans1=x-1;
            ans2=y-1;
            ans3=z-1;
            break;
        }
    }
}
if(ans1==-1) cout<<ans1<<endl;
else cout<<ans1<<' '<<ans2<<' '<<ans3<<endl;

  

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
