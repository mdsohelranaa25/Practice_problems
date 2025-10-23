#include <bits/stdc++.h>
using namespace std;

#define tt int t; cin >> t; while (t--)
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    tt {
        string s;
        cin >> s;

        vector<int> freq(10, 0); 
        vector<int> pos(10, -1); 

        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - '0']++; 
            pos[s[i] - '0'] = i; 
        }

        char ch = '0';
        bool flag = true;
bool f=1;
        for (int i = 0; i < 10; i++) {
           
            if (flag) {
                while (freq[ch - '0'] > 0) {
                    cout << ch;
                    freq[ch - '0']--;
                    f=0;
                    
                }
                
            } else {
                while (freq[ch - '0'] > 0) {
                    cout << min(9, (ch - '0') + 1);
                    freq[ch - '0']--;
                }
            }
            

            if (flag) {
               
                for (int j = 0; j < 9; j++) {
                    int m=j+1;
                    // if (pos[j] == -1 ) { 
                    //     continue; }
                    //     else
                    if(pos[m]==-1){
                            while(pos[m]==-1) m++;
                        } 
                    else if (pos[j] >= pos[m]||freq[j]!=0) {  
                        flag = false;
                        break;
                    }
                    else {
                            int xx=pos[j]+1;
                            if(pos[j]==-1&&!f) {
                                int ab=j;
                                while(pos[ab]==-1) ab--;
                                xx=pos[ab];
                            }

                    for (int k = xx; k <= pos[m]; k++) {
                      if (s[k] == (m+'0') && freq[s[k] - '0'] > 0) {
                            cout << s[k];
                            freq[s[k] - '0']--;
                        }
                    }
                }
                 j=m-1;
            }
            }
            ch++;
        }
        cout << '\n';
    }
}
