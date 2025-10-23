#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int tot = (n + 1) / 2;
        vector<int> freq_count;
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }

        for (auto &p : freq) {
            freq_count.push_back(p.second);
        }

        sort(freq_count.begin(), freq_count.end());

        int alice = 0, count = 0;
        
int dd=0;
 for (int i = 0; i < freq_count.size(); i++) {
    if(freq_count[i]==1) dd++;
    else break;
 }
alice+=((dd+1)/2)*2;;

        count=(dd+1)/2;
        int ll=freq_count.size()-dd;
        int get=(n+1)/2-count;
        if(ll>=get) alice+=get;
        else alice+=ll;
       // cout<<tot<<endl;
        cout << alice << endl;
    }
}
