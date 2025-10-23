#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
 
    int count = 0;
 int m=s3.length();
 
    vector<char> s(s1.begin(), s1.end());
    vector<char> ss(s2.begin(), s2.end());
 
 
    for (int i = 0; i < s.size(); ++i) {
        for (int j = 0; j < s3.size(); ++j) {
            if (s[i] == s3[j]) {
                count++;
                s3.erase(s3.begin() + j);
                break;
            }
        }
    }
 
 
    for (int i = 0; i < ss.size(); ++i) {
        for (int j = 0; j < s3.size(); ++j) {
            if (ss[i] == s3[j]) {
                count++;
                s3.erase(s3.begin() + j);
                break;
            }
        }
    }

 
    if (count == (s1.length() + s2.length())&&count==m) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}