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
#define ll double
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

void solve()
{
  ll pi = 3.14159265358979323846;
  ll poridhi = 2.0 * (pi) * 50.0;
  poridhi /= 8.0;
  ll angle = 360.0 / 8.0;

  string s;
  cin >> s;
  int a = s[0] - '0';
  int b = s[2] - '0';

  if (s[1] == '>')
  {
    int dd = (b - a + 8) % 8;
    cout << fixed << setprecision(15) << poridhi * dd << endl;
  }
  else if (s[1] == '<')
  {
    int dd = (a - b + 8) % 8;
    cout << fixed << setprecision(15) << poridhi * dd << endl;
  }
  else if (s[1] == 'v')
  {
    cout << fixed << setprecision(15) << 100.0 << endl;
  }
  else
  {
    int ghor = abs(a - b);
    ghor = min(ghor, 8 - ghor);

    ll angle_now = angle * ghor;
    ll angrade = angle_now * (pi / 180.0);
    ll now = 2.0 * 50.0 * (sin(angrade / 2.0));
    cout << fixed << setprecision(15) << now << endl;
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
