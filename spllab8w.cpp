#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    while (q--) {
        string cc;
        cin >> cc;

        if (cc == "pop_back") {
            s.pop_back();
        } else if (cc == "front") {
            cout << s.front() << endl;
        } else if (cc == "back") {
            cout << s.back() << endl;
        } else if (cc == "sort") {
            int l, r;
            cin >> l >> r;
            sort(s.begin() + l - 1, s.begin() + r);
        } else if (cc == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(s.begin() + l - 1, s.begin() + r);
        } else if (cc == "print") {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << endl;
        } else if (cc == "substr") {
            int l, r;
            cin >> l >> r;
            cout << s.substr(l - 1, r - l + 1) << endl;
        } else if (cc == "push_back") {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }

    return 0;
}
