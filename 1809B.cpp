#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long ans = sqrt(n);
        
        while (ans * ans > n) ans--;
        while (ans * ans < n) ans++;

        cout << ans - 1 << '\n';
    }
}
