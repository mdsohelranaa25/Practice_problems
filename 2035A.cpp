#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d, sum;
        cin >> a >> b >> c >> d;
        sum = (a - c) * b + (b - d) + (b - 1) * (a - c);
        cout << sum << endl;
    }
    return 0;
}
