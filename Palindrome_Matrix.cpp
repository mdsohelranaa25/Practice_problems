/*
  //! In The Name Of Allah
*/

#include <bits/stdc++.h>
using namespace std;
#define tt    \
    int t;    \
    cin >> t; \
    while (t--)
#define itr(i, a) for (int i = 0; i < a; i++)
#define ittr(i, bg, a) for (int i = bg; i < a; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define endd cout << endl
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a, x) a.push_back(x)
#define MOD 1000000007
#define f first
#define sc second
#define endl '\n'

ll n, m;
vector<vector<char>> v;
vector<vector<ll>> lft, rgt, upv, dnv;
vector<vector<bool>> visited;
vector<vector<pair<int, int>>> allPalPairs;
vector<vector<ll>> ans;

void explorePalindrome(int i, int j, vector<pair<int, int>> &palPairs)
{
    if (visited[i][j] || v[i][j] == '.')
        return;

    visited[i][j] = true;
    palPairs.push_back({i, j});

    int l = lft[i][j];
    int r = rgt[i][j];
    if (l != -1 && r != -1)
    {
        int mirror_j = l + r - j;
        if (mirror_j >= l && mirror_j <= r && !visited[i][mirror_j])
            explorePalindrome(i, mirror_j, palPairs);
    }

    int u = upv[i][j];
    int d = dnv[i][j];
    if (u != -1 && d != -1)
    {
        int mirror_i = u + d - i;
        if (mirror_i >= u && mirror_i <= d && !visited[mirror_i][j])
            explorePalindrome(mirror_i, j, palPairs);
    }
}

void solve()
{
    cin >> n >> m;
    v.assign(n + 5, vector<char>(m + 5));
    lft.assign(n + 5, vector<ll>(m + 5, -1));
    rgt.assign(n + 5, vector<ll>(m + 5, -1));
    upv.assign(n + 5, vector<ll>(m + 5, -1));
    dnv.assign(n + 5, vector<ll>(m + 5, -1));
    visited.assign(n + 5, vector<bool>(m + 5, false));
    ans.assign(n + 5, vector<ll>(m + 5, 0));

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> v[i][j];

   
    for (int i = 1; i <= n; i++)
    {
        ll start = -1, end = -1;
        for (int j = 1; j <= m; j++)
        {
            if (v[i][j] == '.')
                start = -1;
            else
            {
                if (start == -1) start = j;
                lft[i][j] = start;
            }
        }
        for (int j = m; j >= 1; j--)
        {
            if (v[i][j] == '.')
                end = -1;
            else
            {
                if (end == -1) end = j;
                rgt[i][j] = end;
            }
        }
    }

  
    for (int i = 1; i <= m; i++)
    {
        ll start = -1, end = -1;
        for (int j = 1; j <= n; j++)
        {
            if (v[j][i] == '.')
                start = -1;
            else
            {
                if (start == -1) start = j;
                upv[j][i] = start;
            }
        }
        for (int j = n; j >= 1; j--)
        {
            if (v[j][i] == '.')
                end = -1;
            else
            {
                if (end == -1) end = j;
                dnv[j][i] = end;
            }
        }
    }

    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (v[i][j] == '.')
            {
                ans[i][j] = -1;
                continue;
            }

            if (!visited[i][j])
            {
                vector<pair<int, int>> palPairs;
                explorePalindrome(i, j, palPairs);
              //  cerr<<endl;
                if (!palPairs.empty())
                {
                    ll best_val = 1, min_sum = LLONG_MAX;

                    for (int val = 0; val <= 9; val++)
                    {
                        ll sum_diff = 0;
                        for (auto &cell : palPairs)
                        {
                          //  if(val==1)cerr<<cell.f<<' '<<cell.sc<<' '<<v[cell.f][cell.sc]<<endl;
                            
                           
                            sum_diff += abs((v[cell.f][cell.sc]-'0')- val);
                        }
                       // cerr<<sum_diff<<' '<<val<<endl;
                        if (sum_diff < min_sum)
                        {
                            min_sum = sum_diff;
                            best_val = val;
                        }
                    }

                    for (auto &cell : palPairs)
                        ans[cell.first][cell.second] = best_val;
                }
            }
        }
    }


    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (ans[i][j] == -1)
                cout << ".";
            else
                cout << ans[i][j];
        }
        endd;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // tt
    {
        solve();
    }
}
