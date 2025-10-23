#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;

        char max_char = s[0];
        char min_char = s[0];
        int max_freq = freq[max_char];
        int min_freq = freq[min_char];

        for (auto& pair : freq) {
            if (pair.second >= max_freq) {
                max_char = pair.first;
                max_freq = pair.second;
            }
           
        }
          for (auto& pair : freq) {
             if (pair.second <= min_freq) {
                min_char = pair.first;
                min_freq = pair.second;
            }
          }
        if (max_freq == n) {
            cout << s << endl;
            continue;
        }
        else if(max_freq==min_freq){
            for(int i=0;i<n;i++){
                if(s[i]!=s[i+1]){
                    s[i]=s[i+1];
                    break;
                }
            }
            cout<<s<<endl;
            continue;
        }

        for (int i = 0; i < n; ++i) {
            if (s[i] == min_char&&s[i]!=max_char) {
                s[i] = max_char;
                break;
            }
        }
        //cout<<min_char<<" "<<min_freq<<" "<<max_char<<" "<<max_freq<<endl;

        cout << s << endl;
    }
    return 0;
}
