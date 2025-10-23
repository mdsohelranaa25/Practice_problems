#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        string s;
        int n;
        cin >> n >> s;

        vector<char> ss;
        int m = 0, i = n - 1;

        while (i >= 0) {
            if ((s[i] == 'c' || s[i] == 'b' || s[i] == 'd') && m >= 1) {
               
                ss.push_back(s[i]);
                 ss.push_back('.');
                i--;
                m = 0;
            }
            else {
                ss.push_back(s[i]);
                i--;
                m++;
            }
        }

        reverse(ss.begin(), ss.end());
        if (ss[0] == '.') ss.erase(ss.begin());

        for (char ch : ss) {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
