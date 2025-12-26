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
    ll n;cin>>n;
    ll tot=__builtin_popcount(n);
    if(tot%2) no;
    else {
        bool f=0;
        bitset<41>k=n;
        ll i=0,j=40;
        while(i<j&&k[i]==0) i++;
        while(j>i&&k[j]==0)j--;
       // cerr<<i<<' '<<j<<endl;
        while(i<j){
            if(k[i]==k[j]){
                i++;
                j--;

            }
            else {
                f=1;
                break;
            }
        }
        if(f) no;
        else yes;
    }

  

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
