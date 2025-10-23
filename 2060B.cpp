#include <bits/stdc++.h>

#define fwd(i, a, b) for (int i = a; i < b; i++)
#define itr(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define len length
#define sz size
#define lb endl
#define Numll stoll
#define Numi stoi
#define ll long long
#define vec vector
#define str string

void solve();

using namespace std;

int main()
{
    int t;
    t = 1;
    cin >> t;
    itr(i, t) solve();
    return 0;
}

void solve()
{
    int n, m;
    int c1[2010];
    cin >> n >> m;

    vec<vec<int>> c(n, vec<int>(m));

    itr(i, n) itr(j, m) cin >> c[i][j];

    itr(i, n) sort(c[i].begin(), c[i].end());

    itr(i, n) c1[c[i][0]] = i;

    sort(c.begin(), c.end(), [](const vec<int> &a, const vec<int> &b)
         { return a[0] < b[0]; });

    itr(i, n - 1) itr(j, m) if (c[i][j] != c[i + 1][j] - 1)
    {
        cout << -1 << lb;
        return;
    };
    itr(i, n) cout << c1[i] + 1 << ' ';
    cout << lb;
    return;
}