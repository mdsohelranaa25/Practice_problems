/*
  //! In The Name Of Allah
*/

#include <bits/stdc++.h>
using namespace std;
#define tt  \
  int t;    \
  cin >> t; \
  while (t--)
#define itr(i, a) for (int i = 1; i <= a; i++)
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
#define endl '\n'
const int N = 1e6 + 1;

vector<bool> isprime(N, false);
vector<ll> primes;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<char>> v(n + 5, vector<char>(n + 5));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> v[i][j];
        }
    }

    bool f = 0;
    ll cnt = 0;
    ll contin = 0;
    vector<ll> first(n + 5, -1);


    for (int i = 1; i <= n; i++) {
        cnt = 0;
        contin = 0;
        if (f) break;
        for (int j = 1; j <= n; j++) {
            if (v[i][j] == '#') contin++;
            if (contin >= 3) {
                f = 1;
                break;
            }
            if (v[i][j] == '.') contin = 0;
            if (contin == 1) cnt++;
            if (cnt > 1) {
                f = 1;
                break;
            }
        }
    }

   
    for (int i = 1; i <= n; i++) {
        cnt = 0;
        contin = 0;
        if (f) break;
        for (int j = 1; j <= n; j++) {
            if (v[j][i] == '#') contin++;
            if (contin >= 3) {
                f = 1;
                break;
            }
            if (v[j][i] == '.') contin = 0;
            if (contin == 1) cnt++;
            if (cnt > 1) {
                f = 1;
                break;
            }
        }
    }

    vector<ll> row(n + 5);
    for (int i = 1; i <= n; i++) {
        contin = 0;
        for (int j = 1; j <= n; j++) {
            if (v[i][j] == '#') contin++;
        }
        row[i] = contin;
        contin = 0;
    }

    if (f) {
        no;
    } else {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (v[i][j] == '#') {
                    if (first[i] == -1) first[i] = j;
                }
            }
        }

        vector<ll> last(n + 5, -1);
        if (row[n] > 0) last[n] = n;
        for (int i = n - 1; i >= 1; i--) {
            if (row[i]) last[i] = i;
            else last[i] = last[i + 1];
        }

        vector<ll> ind;
        int start_idx = 1; 
        while (start_idx <= n) {
            ll now = last[start_idx];
            if (now > 0) ind.push_back(now);
            if (now == -1) break;
            start_idx = now + 1; 
        }

        int left = 0;
        for (int i = 1; i < (int)ind.size(); i++) {
            ll j = ind[i];
            ll jj = ind[i - 1];
            if (first[j] > first[jj]) {
                left = 1;
                break;
            } else if (first[j] < first[jj]) {
                left = 2;
                break;
            }
        }

        ll shuru = -1;
        for (int i = 1; i <= n; i++) {
            if (row[i] == 2) shuru = i;
        }
        if(ind.size()==2){
          if (shuru + 1 <= n && row[shuru + 1]) {
    ll age = first[shuru];
    bool cond = (age <= n && v[shuru + 1][age] == '#');
    if (age + 1 <= n) cond = cond || (v[shuru + 1][age + 1] == '#');
    if (age - 1 > 0) cond = cond || (v[shuru + 1][age - 1] == '#');
    if (cond) {
        yes;
        return;
    }
}
if (shuru - 1 >= 1 && row[shuru - 1]) {
    ll age = first[shuru];
    bool cond = (age <= n && v[shuru - 1][age] == '#');
    if (age + 1 <= n) cond = cond || (v[shuru - 1][age + 1] == '#');
    if (age - 1 > 0) cond = cond || (v[shuru - 1][age - 1] == '#');
    if (cond) {
        yes;
        return;
    }
}

        
        }

        for (int i = shuru + 1; i <= n; i++) {
            ll lll = first[i - 1];
            ll ext = 1, extt = 2;
            if (left == 2) {
                ext = -1;
                extt = -2;
            }
            if (lll + ext > 0 && lll + ext <= n) v[i][lll + ext] = '#';
            if (lll + extt > 0 && lll + extt <= n) v[i][lll + extt] = '#';
            first[i] = min(lll + ext, lll + extt);
            first[i] = max(first[i], 1LL);
        }

      
        for (int i = shuru - 1; i >= 1; i--) {
            ll lll = first[i + 1];
            ll ext = 1, extt = 2;
            if (left == 1) {
                ext = -1;
                extt = -2;
            }
            if (lll + ext > 0 && lll + ext <= n) v[i][lll + ext] = '#';
            if (lll + extt > 0 && lll + extt <= n) v[i][lll + extt] = '#';
            first[i] = min(lll + ext, lll + extt);
            first[i] = max(first[i], 1LL);
        }

       
        for (int i = 1; i <= n; i++) {
            cnt = 0;
            contin = 0;
            if (f) break;
            for (int j = 1; j <= n; j++) {
                if (v[i][j] == '#') contin++;
                if (contin >= 3) {
                    f = 1;
                    break;
                }
                if (v[i][j] == '.') contin = 0;
                if (contin == 1) cnt++;
                if (cnt > 1) {
                    f = 1;
                    break;
                }
            }
        }

        
        for (int i = 1; i <= n; i++) {
            cnt = 0;
            contin = 0;
            if (f) break;
            for (int j = 1; j <= n; j++) {
                if (last[i] == -1) break; 
                if (v[j][i] == '#') contin++;
                if (contin >= 3) {
                    f = 1;
                    break;
                }
                if (v[j][i] == '.') contin = 0;
                if (v[j][i] == '#') continue;
                if (contin == 1) cnt++;
                if (cnt > 1) {
                    f = 1;
                    break;
                }
            }
        }

        if (f) no;
        else yes;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    tt
    {
        solve();
    }
}
