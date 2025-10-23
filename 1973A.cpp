#include<bits/stdc++.h>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int x, y, z, flag = 0;
        cin >> x >> y >> z;
        int operations = 0;
        int arr[3] = {x, y, z};
        if ((x == y && y == z && x == z) && x % 2 != 0) {
            flag = 1;
            if (y % 2 != 0) {
                cout << -1 << endl;
            }
        } else if ((x == 0 && y == 0 && z > 0) || (x == 0 && y > 0 && z == 0) || (x > 0 && y == 0 && z == 0)) {
            flag = 1;
            if ((z > 0 && z % 2 == 0) || (y > 0 && y % 2 == 0) || (z > 0 && z % 2 == 0)) {
                cout << 0 << endl;
            } else {
                cout << -1 << endl;
            }
        } else {
            while (1) {
                sort(arr, arr + 3, greater<int>());
                if (arr[0] <= 0 || arr[1] <= 0) {
                    break;
                } else {
                    arr[0]--;
                    arr[1]--;
                    operations++;
                }
            }
        }
        if (flag == 0) {
            if (arr[0] % 2 != 0) {
                cout << -1 << endl;
            } else {
                cout << operations << endl;
            }
        }
    }
    return 0;
}
