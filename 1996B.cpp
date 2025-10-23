#include <bits/stdc++.h>
using namespace std;
#define tt int t; cin >> t; while (t--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define end cout << endl

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt {
        int n, k;
        cin >> n >> k;

        vector<vector<int>> arr(n, vector<int>(n));
        vector<vector<int>> ar(n / k, vector<int>(n / k));

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            for (int j = 0; j < n; j++) {
                arr[i][j] = s[j] - '0';
            }
        }

        int a = 0;
        for (int i = 0; i < n; i += k) {
            int b = 0;
            for (int j = 0; j < n; j += k) {
                ar[a][b] = arr[i][j];
                b++;
            }
            a++;
        }

        for (int i = 0; i < n / k; i++) {
            for (int j = 0; j < n / k; j++) {
                cout << ar[i][j];
            }
            cout << endl;
        }
    }
}
