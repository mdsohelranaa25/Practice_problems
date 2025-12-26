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
#define int long long
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
ll s,f;
cin>>s>>f;
unordered_map<ll,ll>mp;
set<ll>st;
st.insert(s);
st.insert(f);
itr(i,n)
{
    ll a,b;
    cin>>a>>b;
    if(a>=f) continue;
    if(b<=s) continue;
    if(a<s&&b>s) {a=s;
          
    }
    if(b>f&&a<f) {b=f;
    }
        st.insert(b);
   st.insert(a);
           mp[a]++;
    mp[b]--;
    
  
    
}
vector<ll>v;
for(auto x:st) v.push_back(x);
vector<ll>fin(n+5,0);
ll now=0;
now=mp[v[0]];
for(int i=1;i<v.size();i++){
    ll dif=v[i]-v[i-1];
    fin[now+1]+=dif;
    now+=mp[v[i]];
}
for(int i=1;i<=n;i++) {
    fin[i]+=fin[i-1];
    cout<<fin[i]<<' ';
}


}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  //tt
  {
    solve();
  }
}
