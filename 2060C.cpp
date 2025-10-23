#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        int m;
        
        for (int i = 0; i < n; i++) {
            cin >> m;
            if (m < k) v.push_back(m);
        }

        int count = 0;
        int mm = v.size();
        int i = 0, j = mm - 1;
        sort(v.begin(), v.end());

        while (i < j) {
            if (v[i] + v[j] == k) {
                count++;
                i++;
                j--;
            }
            else if (v[i] + v[j] < k) {
                i++;
            }
            else {
                j--;
            }
        }

        cout << count << endl;
    }
    return 0;
}
