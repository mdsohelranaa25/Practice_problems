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
#define ll int
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
string s;
cin>>s;
ll a=0,b=0;
map<ll,vector<ll>>mpp;

vc(pre,n+5);
pre[0]=0;
itr(i,n){
    if(s[i]=='a') a++;
    else b++;
    ll now=a-b;
    pre[i+1]=now;
    //mp[now].push_back(i+1);
}


a=0,b=0;
for(int i=n-1;i>=0;i--){
 if(s[i]=='a') a++;
    else b++;
    ll now=a-b;
    mpp[now].push_back(i+1);
}
ll mn=n;
mpp[0].push_back(n+1);

for (auto &x : mpp) sort(x.second.begin(), x.second.end());

//cerr<<n<<endl;
for(int i=1;i<=n;i++){
     ll now = -pre[i - 1];
    // srt(mpp[now]);
    if(mpp.count(now)){
        auto it = lower_bound(mpp[now].begin(), mpp[now].end(), i);
       // cerr<<i<<' '<<pre[i-1]<<' '<<*it<<endl;
        if (it != mpp[now].end()) {
            mn = min(mn, *it - i);
        }
    }
}
if(mn==n) cout<<-1<<endl;
else cout<<mn<<endl;

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
