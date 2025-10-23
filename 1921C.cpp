#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    long long m = n * b;
    if (m < f) {
        cout << "YES" << endl;
        return;
    }
    
    long long cn = 0;
    for (long long i = 0; i < n; i++) {
        long long lm = (i == 0) ? arr[i] * a : (arr[i] - arr[i - 1]) * a;
        cn += min(lm, b);
        if (cn >= f) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
