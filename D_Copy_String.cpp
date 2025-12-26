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

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s, ss;
    cin >> s >> ss;
    ll pre[n + 5];
    memset(pre, 0, sizeof(pre));
    bool f = 0;
    ll change[n + 5];
    memset(change, 0, sizeof(change));
    if (s[0] != ss[0])
        f = 1;
    ll mx = 0;

    map<char, int> mp;
    map<ll, ll> chng;

    for (int i = 0; i < n; i++)
    {
        mp[s[i]] = i + 1;
        if (!mp.count(ss[i]))
        {
            f = 1;
            break;
        }
        else
            pre[i] = mp[ss[i]] - 1;

        ll dif = i - pre[i];
        chng[pre[i]] = i;
        mx = max(mx, dif);
    }

    if (f || mx > k)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        cout << mx << endl;
        string s1 = "";
        ll cnt = 1;

        while (cnt <= mx)
        {
            map<ll, ll> tmp;
            s1 += s[0];
            for (int i = 1; i < n; i++)
            {
                if (chng.count(i - 1) && chng[i - 1] != i - 1)
                {
                    s1 += s[i - 1];
                    tmp[i] = chng[i - 1];
                }
                else
                {
                    s1 += s[i];
                }
            }

            cout << s1 << endl;

            s = s1;
            chng = tmp;
            s1 = "";
            cnt++;
        }
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
