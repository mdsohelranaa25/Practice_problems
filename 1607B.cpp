#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        ll x0, n;
        cin >> x0 >> n;
        
        if (n == 0) {
            cout << x0 << '\n';
            continue;
        }
        
        if (x0 % 2 == 0) {
          
            if (n % 4 == 1) cout << x0 - n << '\n';
            else if (n % 4 == 2) cout << x0 + 1 << '\n';
            else if (n % 4 == 3) cout << x0 + n + 1 << '\n';
            else cout << x0 << '\n';
        } else {
            
            if (n % 4 == 1) cout << x0 + n << '\n';
            else if (n % 4 == 2) cout << x0 - 1 << '\n';
            else if (n % 4 == 3) cout << x0 - n - 1 << '\n';
            else cout << x0 << '\n';
        }
    }
}
