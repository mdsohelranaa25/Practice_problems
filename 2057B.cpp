#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<int> freq;
        int count = 1;
        for (int i = 1; i < n; i++){
            if(v[i] == v[i-1])
                count++;
            else {
                freq.push_back(count);
                count = 1;
            }
        }
        freq.push_back(count);
        sort(freq.begin(), freq.end());
        int removed = 0;
        for (int f : freq) {
            if(k >= f) {
                k -= f;
                removed++;
            } else {
                break;
            }
        }
        int ans = freq.size() - removed;
        if(ans == 0) ans = 1;
        cout << ans << "\n";
    }
    return 0;
}
