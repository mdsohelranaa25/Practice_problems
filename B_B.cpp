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
#define ll double
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
void sieve()
{
  isprime[1] = false;
  isprime[2] = true;
  pb(primes, 2);
  for (int i = 3; i * i <= N; i += 2)
    isprime[i] = true;
  for (int i = 3; i <= N; i += 2)
  {
    if (isprime[i])
    {
      pb(primes, i);
      for (int j = i * i; j <= N; j += i)
      {
        isprime[j] = false;
      }
    }
  }
}

void solve()
{
ll n;
cin>>n;
vector<pair<ll,ll>>pr;
itr(i,n){
  ll x,y;cin>>x>>y;
  pr.push_back({x,y});
}
srt(pr);
ll now=INT_MAX;
ll cur=0;
itr(i,n-2){
  for(int j=i+1;j<n-1;j++){
    for(int k=j+1;k<n;k++){
      ll x1=pr[i].f,y1=pr[i].sc;
      ll x2=pr[j].f,y2=pr[j].sc;
      ll x3=pr[k].f,y3=pr[k].sc;
      ll cur=(0.5)*abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
     //cerr<<x3<<' '<<y3<<endl;
      if(cur!=0){
        now=min(now,cur);
      }
      

    }
  }
}
if(now==INT_MAX) cout<<-1<<endl;
else cout<<now<<endl;
  

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
