/*
    //! In The Name Of Allah
        ~~Sohel~~
*/

#include <bits/stdc++.h>
using namespace std;
#define tt int t;cin>>t;while(t--)
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt {
        ll n;
        cin >> n;

        if (n % 2 == 0) {
            cout << "IMPOSSIBLE\n";
            continue;
        }

        int ch = 'A';
        ll m = n / 2;

        for (int j = 0; j < m; j++) {
            for (int i = 0; i < m; i++) cout << " ";
            cout << char((ch + j - 'A') % 26 + 'A') << endl;
        }

        ll mm = m * 2;
        ll mn = mm;
        while (mm >= m) {
            cout << char((ch + mm - 'A') % 26 + 'A');
            mm--;
        }

        ll l = 3 * m + 1;
        for (int i = 0; i < m; i++) {
            cout << char((l % 26) + 'A');
            l++;
        }

        cout << endl;

        ch = 'A' + (mn + 1);
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < m; i++) cout << " ";
            cout << char((ch + j - 'A') % 26 + 'A') << endl;
        }
    }
    return 0;
}
