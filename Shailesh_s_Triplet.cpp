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
    long long n; cin >> n;
    if (n % 2) {
        cout << -1 << endl;
        return;
    }
    long long a = n, b = n/2, c = n/2;
    bitset<65> k = n, kk = n/2;

    for (int i = 0; i < 65; i++) {
        if (k[i] != kk[i]) {
           
            if (kk[i]) {
                if (k[i]) {
                    a -= (1LL << i);
                    b += (1LL << i);
                } else {
                    a += (1LL << i);
                    b -= (1LL << i);
                }
                break;
            }
        }
    }

    cout << a << " " << b << " " << c << endl;
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
