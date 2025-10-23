#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vc(v, n) vector<ll> v(n)  
#define srt(v) sort(v.begin(), v.end())

ll rec(vector<ll>& v, ll x, ll lo, ll hi, ll n) {
    ll ans = n;
    while (lo <= hi) {
        ll mid = (lo + hi) / 2;
        if (v[mid] > x) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return ans;
}

int main() {
  
        ll n;
        cin >> n;
        vc(v, n);
        for (auto &it : v) cin >> it;
        srt(v);

        ll m;
        cin >> m;
        vc(vv, m);
        for (auto &it : vv) cin >> it;

        for (ll i = 0; i < m; i++) {
            ll x = vv[i];
            ll ans =upper_bound(v.begin(),v.end(),x)-v.begin();
            cout << ans << endl;
        }
    }

