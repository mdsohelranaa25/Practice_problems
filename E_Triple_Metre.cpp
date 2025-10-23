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
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define ll long long
#define endd cout << endl
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a, x) a.push_back(x)

#define f first
#define sc second
#define endl '\n'
//hashing
const int p1 = 293, mod1 = 1e9 + 7, p2 = 277, mod2 = 1e9 + 9;
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

pair<int, int> pref[N];

void build(string s) {
    int n = s.size();
    for (int i = 0; i < n; i++) {
        pref[i].first = 1LL * s[i] * pw[i].first % mod1;
        if (i) pref[i].first = (pref[i].first + pref[i - 1].first) % mod1;
        pref[i].second = 1LL * s[i] * pw[i].second % mod2;
        if (i) pref[i].second = (pref[i].second + pref[i - 1].second) % mod2;
    }
}


void solve()
{
    
    string s;
    cin>>s;
auto full=string_hash(s);
string ss="oxxoxxoxxoxxoxxoxxoxx";
build(ss);
ll n=s.size();
bool f=0;

//cerr<<full.first<<endl<<full.sc<<endl;
for(int i=1;i<=5;i++){
    
    if(i+n-1>ss.size()) break;
    ll sub1=pref[i+n-2].first;
    if(i-2>=0) sub1=(sub1 - pref[i-2].first + mod1)%mod1;
    sub1=1LL*sub1*ipw[i-1].first%mod1;
    ll sub2=pref[i+n-2].second;
    if(i-2>=0) sub2=(sub2 - pref[i-2].second + mod2)%mod2;
    sub2=1LL*sub2*ipw[i-1].second%mod2;
    //cerr<<sub1<<endl<<sub2<<endl;
    if(sub1==full.first&&sub2==full.sc) {
        f=1;
        break;
    }



}
if(f) yes;
else no;
  


}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
 prec();
    solve();
  
}
