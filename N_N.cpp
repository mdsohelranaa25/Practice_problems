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


void solve() {
    ll n; cin >> n;
    ll m = 2 * n;

    priority_queue<pair<ll,ll>> boro;
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> choto;

    for (int i = 1; i <= m; i++) {
        ll a, b;
        cin >> a >> b;
        ll bor = max(a, b);
        ll chot = min(a, b);
        boro.push({bor, i});
        choto.push({chot, i});
    }

    map<ll,ll> mp;
    ll ans = 0;

    while (!boro.empty() && !choto.empty()) {
       
        auto x = boro.top(); boro.pop();
        while (!boro.empty() && mp[x.sc] > 0) {
            x = boro.top(); boro.pop();
        }
        // cerr<<"boro "<<boro.size()<<' '<<x.sc<<endl;
        //if (boro.empty()) break;
        if(mp[x.sc]>0) break;
        auto y = choto.top(); choto.pop();
        while (!choto.empty() && mp[y.sc] > 0) {
            y = choto.top(); choto.pop();
        }
       // if (choto.empty()) break;
      // cerr<<" choto "<<choto.size()<<' '<<y.sc<<endl;
 if(mp[y.sc]>0) break;
        if (x.sc != y.sc) {
            mp[x.sc]++;
            mp[y.sc]++;
            ans += abs(x.f - y.f);
        } else {
            if (boro.empty() || choto.empty()) break;
            auto c = boro.top(); boro.pop();
           
            while (!boro.empty() && mp[c.sc] > 0) {
                c = boro.top(); boro.pop();
            }
           //  cerr<<" c "<<c.sc<<endl;
             if(mp[c.sc]>0) break;
           // if (boro.empty()) break;

            auto d = choto.top(); choto.pop();
            while (!choto.empty() && mp[d.sc] > 0) {
                d = choto.top(); choto.pop();
            }
          //  cerr<<"d "<<d.sc<<endl;
           // if (choto.empty()) break;
             if(mp[d.sc]>0) break;
            ll age = abs(x.f - d.f);
            ll pore = abs(y.f - c.f);


            if (age >= pore) {
                mp[x.sc]++;
                mp[d.sc]++;
                if(mp[c.sc]==0)
                boro.push(c);
                if(mp[y.sc]>0)
                choto.push(y);
                ans += age;
            } else {
                mp[y.sc]++;
                mp[c.sc]++;
                if(mp[x.sc]==0)
                boro.push(x);
                if(mp[d.sc]==0)
                choto.push(d);
                ans += pore;
            }
        }
    }

    cout << ans << "\n";
}
int main()
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
