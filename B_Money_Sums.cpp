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
 vector<ll>v;
 ll n;
  set<ll>st;
ll dp[105][100005];

  void f(ll i,ll sum){
    if(dp[i][sum]) return;
    dp[i][sum]=1;
    if(i>n){
        if(sum>0)
        st.insert(sum);
        return;
    }
    f(i+1,sum+v[i]);
    f(i+1,sum);


  }
void solve()
{

  
  cin>>n;
  v.push_back(0);
  itr(i,n){
    ll x;
    cin>>x;
    v.push_back(x);

  }
  dp[0][0]=1;
  ll sum=0;
 
  f(1,0);
    cout<<st.size()<<endl;
    for(auto x:st) cout<<x<<' ';
    endd;


}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
 
    solve();
  }

