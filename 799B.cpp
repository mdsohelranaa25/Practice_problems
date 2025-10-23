#include <bits/stdc++.h>
using namespace std;

#define tt int t; cin >> t; while (t--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define endd cout << endl

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

  

    vector<int> a(n), b(n);
    priority_queue<int, vector<int>, greater<int>> pq[4][4];
   
    for (auto &it : a) cin >> it;
    for (auto &it : b) cin >> it;

 
    int m;
    cin >> m;
    vector<int> ar(m);
   
    for (int i = 0; i < m; i++) {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++) {
        pq[a[i]][b[i]].push(v[i]);
    }
    for (int i = 0; i < m; i++) {
        int c = ar[i];
        int f = -1, b = -1, ans = INT_MAX;

        for (int j = 1; j <= 3; j++) {
            if (!pq[c][j].empty() && pq[c][j].top() < ans) {
                ans = pq[c][j].top();
                f = c, b = j;
            }
        }

        for (int j = 1; j <= 3; j++) {
            if (!pq[j][c].empty() && pq[j][c].top() < ans) {
                ans = pq[j][c].top();
                f = j, b = c;
            }
        }

        if (ans == INT_MAX) {
            cout << -1 << " ";
        } else {
            cout << ans << " ";
            if (!pq[f][b].empty()) pq[f][b].pop();
        }
    }

    return 0;
}
