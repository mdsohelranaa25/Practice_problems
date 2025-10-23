#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_set<int> uset;
        vector<int> result;
        vector<int> s(2 * n);

        for (int i = 0; i < 2 * n; i++) {
            cin >> s[i];
        }

        for (auto c : s) {
            if (uset.find(c) == uset.end()) {
                uset.insert(c);
                result.push_back(c);
            }
        }

        for (auto c : result) {
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}
