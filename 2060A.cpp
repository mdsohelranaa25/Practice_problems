#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, d, e;
        cin >> a >> b >> d >> e;
        int max_fibonacciness = 0;
        for (int c = -200; c <= 200; c++) {
            int count = 0;
            if (a + b == c) count++;
            if (b + c == d) count++;
            if (c + d == e) count++;
            max_fibonacciness = max(max_fibonacciness, count);
        }
        cout << max_fibonacciness << endl;
    }
    return 0;
}
