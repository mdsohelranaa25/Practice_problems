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
const int N = 1e6 + 1;
vector<bool> isprime(N, false);
vector<ll> primes;


void solve() {
    ll n, k;
    string s;
    cin >> n >> k >> s;

    vector<ll> pre(n + 5, 0);
    ll cnt = 0;
    ll now = 0;
    bool f = false;

    for (int i = 0; i < n; i++) {
        

        if (s[i] == 'S') {
            if (now % 2 == 0) {
                if (i + k - 1 >= n) {
                    f = true;
                    break;
                }
                now++;
                cnt++;
                pre[i + k - 1] = 1;
            }
        } else { 
            if (now % 2 == 1) {
                if (i + k - 1 >= n) {
                    f = true;
                    break;
                }
                now++;
                cnt++;
                pre[i + k - 1] = 1;
            }
        }
        now -= pre[i]; 
    }

    if (f) cout << -1 << endl;
    else cout << cnt << endl;
}


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  tt
  {
    solve();
  }
}
