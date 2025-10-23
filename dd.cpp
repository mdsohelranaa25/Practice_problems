#include <bits/stdc++.h>
using namespace std;

void printPermutations(string s) {
    sort(s.begin(), s.end());
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
}

int main() {
   
        string s;
        string ss;
        cin >> s;
        cin>>ss;
        cout << "Case " << i << ":" << endl;
        printPermutations(s);
    
    
    return 0;
}
