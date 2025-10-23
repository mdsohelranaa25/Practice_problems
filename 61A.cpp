#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, s1;
    cin >> s >> s1;


    int maxLength = max(s.length(), s1.length());
    while (s.length() < maxLength) {
        s = "0" + s; 
    }
    while (s1.length() < maxLength) {
        s1 = "0" + s1;
    }

   
    string result = "";
    for (int i = 0; i < maxLength; i++) {
        if (s[i] == s1[i]) {
            result += "0"; 
        } else {
            result += "1"; 
        }
    }

   
    cout << result << endl;

    return 0;
}
