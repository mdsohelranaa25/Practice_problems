#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        int arr[n][2];
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            arr[i][0] = x;2
            arr[i][1] = y;
        }

        int per = n * m * 4;
        int rem = 0;
        for (int i = 1; i < n; i++) {
            rem += abs(m-arr[i][0] ) + abs(m-arr[i][1]);
            per -= rem * 2;
            rem = 0;
        }
        cout << per << endl;
    }
    return 0;
}
