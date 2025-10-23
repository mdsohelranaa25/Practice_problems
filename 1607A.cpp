#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string ss, s;
        cin >> ss >> s;

        unordered_map<char, int> position;
        for (int i = 0; i < ss.length(); i++) {
            position[ss[i]] = i + 1;
        }

        int n = 0;
        for (int i = 1; i < s.length(); i++) {
            n += abs(position[s[i]] - position[s[i - 1]]);
        }

        cout << n << endl;
    }
    return 0;
}
