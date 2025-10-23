#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

  
    string c;
    cin >> c;

    set<char> letters;

    for (char ch : c) {

        letters.insert(tolower(ch));
    }
if(letters.size()==26)
cout<<"YES";
else cout<<"NO";
  

}
