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
//hashing
const int p1 = 257, mod1 = 1e9 + 7, p2 = 277, mod2 = 1e9 + 9;
const int N = 1e6 + 9;

int power(long long n, long long k, int mod) {
    int ans = 1 % mod;
    n %= mod;
    if (n < 0) n += mod;
    while (k) {
        if (k & 1) ans = (long long)ans * n % mod;
        n = (long long)n * n % mod;
        k >>= 1;
    }
    return ans;
}

int ip1, ip2;
pair<int, int> pw[N], ipw[N];
void prec() {
    pw[0] = {1, 1};
    for (int i = 1; i < N; i++) {
        pw[i].first = 1LL * pw[i - 1].first * p1 % mod1;
        pw[i].second = 1LL * pw[i - 1].second * p2 % mod2;
    }

    ip1 = power(p1, mod1 - 2, mod1);
    ip2 = power(p2, mod2 - 2, mod2);

    ipw[0] = {1, 1};
    for (int i = 1; i < N; i++) {
        ipw[i].first = 1LL * ipw[i - 1].first * ip1 % mod1;
        ipw[i].second = 1LL * ipw[i - 1].second * ip2 % mod2;
    }
}

pair<int, int> string_hash(string s) {
    int n = s.size();
    pair<int, int> hs({0, 0});
    for (int i = 0; i < n; i++) {
        hs.first = (hs.first + 1LL * s[i] * pw[i].first) % mod1;
        hs.second = (hs.second + 1LL * s[i] * pw[i].second) % mod2;
    }
    return hs;
}

pair<int, int> pref[N],preff[N];

void build(string s) {
    int n = s.size();
    for (int i = 0; i < n; i++) {
        pref[i].first = 1LL * s[i] * pw[i].first % mod1;
        if (i) pref[i].first = (pref[i].first + pref[i - 1].first) % mod1;
        pref[i].second = 1LL * s[i] * pw[i].second % mod2;
        if (i) pref[i].second = (pref[i].second + pref[i - 1].second) % mod2;
    }
}

void buildd(string s) {
    int n = s.size();
    for (int i = 0; i < n; i++) {
        preff[i].first = 1LL * s[i] * pw[i].first % mod1;
        if (i) preff[i].first = (preff[i].first + preff[i - 1].first) % mod1;
        preff[i].second = 1LL * s[i] * pw[i].second % mod2;
        if (i) preff[i].second = (preff[i].second + preff[i - 1].second) % mod2;
    }
}
pair<int, int> get_hash(int i, int j) {
    assert(i <= j);
    pair<int, int> hs({0, 0});
    hs.first = pref[j].first;
    if (i) hs.first = (hs.first - pref[i - 1].first + mod1) % mod1;
    hs.first = 1LL * hs.first * ipw[i].first % mod1;

    hs.second = pref[j].second;
    if (i) hs.second = (hs.second - pref[i - 1].second + mod2) % mod2;
    hs.second = 1LL * hs.second * ipw[i].second % mod2;
    return hs;
}

pair<int, int> gett_hash(int i, int j) {
    assert(i <= j);
    pair<int, int> hs({0, 0});
    hs.first = preff[j].first;
    if (i) hs.first = (hs.first - preff[i - 1].first + mod1) % mod1;
    hs.first = 1LL * hs.first * ipw[i].first % mod1;

    hs.second = preff[j].second;
    if (i) hs.second = (hs.second - preff[i - 1].second + mod2) % mod2;
    hs.second = 1LL * hs.second * ipw[i].second % mod2;
    return hs;
}


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  prec();
 while(1){
    string s;cin>>s;
    if(s.size()==0) break;  
    string ss=s;
    ll n=s.size();
    reverse(ss.begin(),ss.end());
    build(s);
    buildd(ss);
    ll i=n-1,j=0;
     

    
        for (int l = n - 1; l >= 0; l--) {
        ll dif = n - l;
        if (l < 0) continue;
        auto sub1 = get_hash(l, n - 1);
        if (2 * dif - 1 < n) {
            auto sub2 = gett_hash(dif, 2 * dif - 1);
            if (sub1 == sub2) {
                i = n - 2 * dif;
               
            }
        }
        if (2 * dif < n) {
            auto sub3 = gett_hash(dif + 1, 2 * dif);
            if (sub1 == sub3) {
                i = n - 2 * dif - 1;
              
            }
        }
    }
    string sss = "";
    for (int k = 0; k < i; k++) sss += s[k];
    reverse(sss.begin(), sss.end());
    cout << s + sss << endl;
  }
}
