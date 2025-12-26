/*
  //! In The Name Of Allah
*/
#include <bits/stdc++.h>
using namespace std;
#define tt  \
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
const int N = 5000 + 5;
#define int long long
void solve() {
    string s;
    cin >> s;
    ll k;
    cin >> k;
    ll n = s.size();
    vector<string> v;

   
    for (int i = 0; i < n; i++) {
        for (int j = i; j < min(n, i + 5); j++) {
            v.push_back(s.substr(i, j - i + 1));
        }
    }

    srt(v); 
    v.erase(unique(v.begin(), v.end()), v.end()); 

    cout << v[k - 1] << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
