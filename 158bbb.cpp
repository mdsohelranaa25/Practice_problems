#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m;
    int friq[5] = {0}; 

    for (int i = 0; i < n; i++) {
        cin >> m;
        friq[m]++;
    }

    int ans = 0;

    if (friq[3] > friq[1]) {
        ans += friq[1];
        friq[3] -= friq[1];
        friq[1] = 0;
    } else {
        ans += friq[3];
        friq[1] -= friq[3];
        friq[3] = 0;
    }

    ans += friq[2] / 2;
    friq[2] %= 2;

    ans += friq[4];
    ans += friq[3];

    if (friq[1] >= 2 && friq[2] == 1) {
        ans += 1;
        friq[2] = 0;
        friq[1] -= 2;
    } else if (friq[2] == 1 && friq[1] <= 2) {
        ans += 1;
        friq[2] = 0;
        friq[1] = 0;
    }

    ans += friq[2];
    if (friq[1] % 4 != 0)
        ans += friq[1] / 4 + 1;
    else
        ans += friq[1] / 4;

    cout << ans;

    return 0;
}
