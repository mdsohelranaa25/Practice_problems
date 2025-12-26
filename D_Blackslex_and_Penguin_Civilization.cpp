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
    ll n;
    cin >> n;
    ll k = n;
  unordered_map<ll,ll>mp;
vector<ll>v;
v.push_back((1<<n)-1);
mp[v[0]]++;
    v.push_back((1<<(n-1))-1);
    mp[v[1]]++;
    for (int k = n-1; k > 0; k--) {
       // cerr<<k<<endl;
        ll baki=n-k;

        ll add=0;
         add=(1<<baki);
        
      //  ll edike=(1<<(k-1))-1;
       // v.push_back(edike);
        for(int i=0;i<add;i++){
            bitset<17>kk=i;
            ll ekhon=(1<<(k-1))-1;
            for(int j=0;j+k<n;j++){
                if(kk[j]==1){
                    ekhon+=(1<<(j+k));
                }
            }
            v.push_back(ekhon);
            mp[ekhon]++;
        }
       
    }
    for(int i=0;i<(1<<n);i++) if(mp[i]==0) v.push_back(i);

     for (auto x : v) cout << x << ' ';
    
    endd;
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
