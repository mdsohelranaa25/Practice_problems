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
    ll n, k;
    cin >> n >> k;
    set<ll> st;
    vector<ll>v;
    map<ll, ll> mp;
    itr(i, n) {
        ll x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
        st.insert(x);
    }

    vector<ll> fin;
    for (auto x : st) fin.push_back(x);
    ll m = fin.size(); 

    if (m == 0) {
        cout << 0 << "\n";
        return;
    }

  
    ll i = 0;
    while (i < m && mp[fin[i]] <= k) i++;
    if (i == m) {
        cout << 0 << "\n";
        return;
    }

    ll op = 0;
    ll cur = mp[fin[i]];
    ll prev = fin[i];
// cerr<<prev<<' '<<cur<<endl;
   
    for (ll j = i + 1; j < m; ++j) {
        prev = fin[j - 1];
        ll now = fin[j];

        if (prev + cur - k < now) {
         
            op += max(0LL, cur - k);
           // cerr<<cur<<' ';
            cur = mp[fin[j]];
            //cerr<<cur<<endl;
        } else {
            ll purbe = now - prev;
            cur -= purbe;           
            cur += mp[now];        
            op += max(0LL, purbe);   
        }
    }
//cerr<<cur<<endl;
    if (cur > k) op += (cur - k);
   
    cout << op << "\n";
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
