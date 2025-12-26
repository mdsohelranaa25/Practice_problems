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
vc(v,n+5);
for(int i=1;i<=n;i++) cin>>v[i];
vc(pre,n+5);
ll now=v[n];
ll i=n-1;
while(i>0){
    if(v[i]*v[i+1]<0) {
        pre[i+1]=now;
        now=v[i];
    }
    else now=max(now,v[i]);
    i--;
}
pre[1]=now;
ll sum=0;
for(int i=1;i<=n;i++) sum+=pre[i];
cout<<sum<<endl;
  

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
