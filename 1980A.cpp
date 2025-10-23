#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        unordered_map<char, int> v;
        for (char c : s) {
            v[c]++;
        }

        int d = 0;
        string ss = "ABCDEFG";
        for (char c : ss) {
            if (v[c] < m) {
                d += (m - v[c]);
            }
        }

        cout << d << endl;
    }
    return 0;
}
