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

ll ts=0;
void solve()
{
    ts++;
ll n;
cin>>n;
ll mx=0;
vc(v,n+5);
ll sum=0;
for(int i=1;i<=n;i++){
    cin>>v[i];
    sum+=v[i];
}
ll cur=0;
ll mn=0;
ll best=0;

ll s=0;
for(int i=1;i<=n;i++){
  s+=v[i];
  cur=(i*(i+1))-s;

  best=max(best,sum+cur-mn);
  mn=min(mn,cur);
}
cout<<best<<endl;
  

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
