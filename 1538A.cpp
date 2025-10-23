#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        int ll = 0, mm = 0;
        int l = INT_MAX, h = INT_MIN;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] <= l) {
                l = arr[i];
                ll = i;
            }
            if (arr[i] >= h) {
                h = arr[i];
                mm = i;
            }
        }

        int mini = min(ll, mm);
        int maxi = max(ll, mm);
        int a = maxi + 1;
        int b = (mini + 1) + (n - maxi);
        int c = n - mini;
        int ans = min(a, min(b, c));
        cout << ans << endl;
    }
    return 0;
}
