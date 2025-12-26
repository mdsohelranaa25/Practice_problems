/*
  //! In The Name Of Allah
*/
#include <bits/stdc++.h>
using namespace std;
#define tt  \
  int t;    \
  cin >> t; \
  while (t--)
#define int long long
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

void solve()
{
   ll n;
   cin>>n;
   ll k;
   cin>>k;
   vc(v,n);
   itr(i,n) cin>>v[i];
   vc(vv,n);
   itr(i,n) cin>>vv[i];
    multiset<ll> st;
    for (ll x : v) st.insert(x);
    ll ans = 0;
    //cerr<<endl;
    for (ll j = n - 1; j >= 0; j--)
    {
        ll need = vv[j] + 1;       
     ll odike = k - vv[j];
        if (odike < 0) continue;
     ll parbe = odike / need;   
        
        auto it = st.upper_bound(parbe);
      //  cerr<<*it<<' ';
     if (it == st.begin()) continue; 
        it--;  
     ans++;
        st.erase(it);
    }
    cout << ans << endl;
}

int32_t main()
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