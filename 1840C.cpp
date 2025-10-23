#include <bits/stdc++.h>
using namespace std;

#define tt int t; cin >> t; while (t--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define in long long
#define end cout << endl

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt {
        in n, d, t;
        cin >> n >> d >> t;
        vector<int> v;

        in count = 0, total = 0;
        for (in i = 0; i < n; i++) {
            in x;
            cin >> x;
            if (x <= t) count++;
            else {
                if (count > 0) v.push_back(count);
                count = 0;
            }
        }
        if (count > 0) v.push_back(count);  
        for (in i = 0; i < v.size(); i++) {
            if (v[i] >= d) {
                in len = v[i] - d + 1;
                total += (len * (len + 1)) / 2; 
            }
        }

        cout << total << endl;
    }
}
