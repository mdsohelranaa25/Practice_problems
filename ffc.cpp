#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int cases;
    cin >> cases;
    
    while(cases--) {
        string str;
        cin >> str;
        bool uniqueChars = true;
        int length = str.length();
        
        if(length == 1) 
            cout << 1 << endl;
        else {
            for(int idx = 0; idx < length - 1; idx++){
                if(str[idx] == str[idx + 1]){
                    uniqueChars = false;
                    cout << 1 << endl;
                    break;
                }
            }
            if(uniqueChars) 
                cout << length << endl;
        }
    }
}
