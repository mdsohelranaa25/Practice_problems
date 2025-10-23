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

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  ll ts = 0;
  tt
  {
    // ts++;
    ll n;
    cin >> n;
    vc(v, n);
    itr(i, n) cin >> v[i];

    ll mx_ev = 0;
    for (int i = 1; i < n; i += 2)
    {
      mx_ev = max(mx_ev, v[i]);
    }

    ll sum = 0;
    for (int i = 0; i < n; i += 2)
    {
      sum += v[i];
      // cerr<<i<<' ';
      i++;
      if (i < n)
        sum -= v[i];
      //  cerr<<i<<' ';
      i--;
      // cerr<<i<<endl;
    }
    ll ans = sum + (n % 2 == 1 ? n - 1 : n - 2); // normal vabe jeta sum+ odd first and last index swap

    if (n == 1)
    {
      cout << v[0] << endl;
      continue;
    }
    // cerr<<ans<<endl;
    vc(pre, n + 5);
    vc(suf, n + 5);
    ll i = 0;
    ll extra = 0;
    if (n % 2)
      i = n - 2; // last even index dekhtechi(1 based index hole)
    else
      i = n - 1;
    ll ind = i;
    ll now = v[i];
    pre[i] = i;
    now = 2 * v[i];

    extra = 2;
    i -= 2;
    while (i >= 0)
    {
      if (2 * v[i] >= now + extra)
      {
        ind = i;
        now = 2 * v[i];
        extra = 0;
      }
      pre[i] = ind;
      extra += 2; // purbe 2 index right e chilo tokhn index er karone 2 pacchilam.tai
      i -= 2;
    }
    i = 1;
    now = 2 * v[i];
    ind = i;
    suf[i] = ind;
    extra = 2;
    i += 2;
    while (i < n)
    {
      if (2 * v[i] >= now + extra)
      {
        ind = i;
        now = 2 * v[i];
        // cerr<<i<<' '<<ind<<endl;
      }
      // cerr<<i<<' '<<ind<<endl;
      suf[i] = ind;

      extra += 2; // age index er karone 2 pacchilam
      i += 2;
    }
    for (i = 0; i < n - 1; i += 2)
    {

      ll ekhon = (-2 * v[i] + 2 * v[pre[i + 1]]) + (pre[i + 1] - i);
      ans = max(ans, ekhon + sum);
      // cerr<<ekhon<<' '<<ans<<" djdj"<<endl;
    }
    // cerr<<sum<<endl;
    if (n % 2)
      i = n - 1;
    else
      i = n - 2; // 1 based index hole odd index gulo nibo then even er sathe swap korbo beshi lav e
    for (i; i > 0; i -= 2)
    {
      ll ekhon = (-2 * v[i] + 2 * v[suf[i - 1]]) + (i - suf[i - 1]);
      ans = max(ans, ekhon + sum);
    }
    cout << ans << endl;
  }
}
