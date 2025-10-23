#include <bits/stdc++.h>
using namespace std;

#define tt int t; cin >> t; while (t--)
#define ll long long
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt {
        ll n, x, y;
        cin >> n >> x >> y;
        vc(v, n);
        ll sum = 0;

        for (ll &i : v) {
            cin >> i;
            sum += i;
        }

        srt(v);
        ll cnt = 0;

        for (int i = 0; i < n; i++) {
            ll remSum = sum - v[i];
            ll low = x - remSum;
            ll high = y - remSum;

            auto l = lower_bound(v.begin(), v.end(), low);
            auto r = upper_bound(v.begin(), v.end(), high);

            ll ind1 = l - v.begin();
            ll ind2 = r - v.begin() - 1;

            if (ind1 <= ind2) {
                cnt += max(0LL, ind2 - ind1 + 1);
            }

            if (v[i] >= low && v[i] <= high) cnt--;
        }

        cout << cnt / 2 << endl;
    }
}
