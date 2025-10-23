#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long msb = 1;
        while (msb <= n) {
            msb <<= 1;
        }
        cout << (msb - 1) / 2 << endl;
    }
    return 0;
}
