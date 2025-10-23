#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<ll, ll>> pr;
        set<ll> st;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        map<ll, ll> mp;
        for (int i = 0; i < n; i++) {
            st.insert(v[i]);
            mp[v[i]]++;
        }

        for (auto x : st) {
            pr.push_back({mp[x], x});
        }

        sort(pr.begin(), pr.end());

        vector<ll> final;
        ll highest = 0;
        ll cnt = 0;
        for (int i = 0; i <= n; i++) {
            if (mp[i] == 0) {
                highest = i;
                break;
            }
        }

        for (int i = 0; i < pr.size(); i++) {
            if (pr[i].second >= highest) cnt += pr[i].first;
            else final.push_back(pr[i].second);
        }

        ll m = final.size();
        vector<ll> pref(m + 5, 0);
        vector<ll> extra(m + 5, 0);

        for (int i = m - 1; i >= 0; i--) {
            pref[i] = pref[i + 1] + mp[final[i]];
        }

        extra[0] = cnt;
        for (int i = 1; i < m; i++) {
            extra[i] = extra[i - 1] + mp[final[i - 1]] - 1;
        }

        sort(v.begin(), v.end());

        for (int i = 0; i <= n; i++) {
            ll ans = 0;
            ll lo = 0, hi = m - 1;
            while (lo <= hi) {
                ll mid = (lo + hi) / 2;
                if (mid >= m) break;

                if (mp[final[mid]] <= i && (extra[mid] + pref[mid]) > i) {
                    mid = min(mid, highest + 1);
                    if (mid != highest + 1)
                        ans = max(ans, mid + 1);
                    else
                        ans = max(ans, mid);
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            }
            cout << min(highest + 1, ans + 1) << ' ';
        }
        cout << endl;
    }
}
