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
const int N = 1e6 + 5;
vector<bool> isprime(N+5, true);
vector<ll> primes;

void sieve () {

    isprime[0] = isprime[1] = false;

    for (int i = 2; i * i <= N; i++) {
        if (isprime[i]) {
            for (int j = i * i; j <= N; j += i) {
                isprime[j] = false;
            }
        }
    }
for(int i=2;i<=N;i++) if(isprime[i]) primes.push_back(i);
 
}
void solve()
{
ll n,k;cin>>n>>k;
ll sq=sqrt(1e9);
sq++;
ll lagbe=n;
sq=min(sq,k);
sq=min(sq,n);
//cerr<<sq<<endl;
for(ll i=sq;i>=1;i--){
    if(n%i==0){
        ll here=n/i;
        if(here<=k) here=min(here,i);
        //cerr<<here<<' '<<n/sq<<endl;
       // if(n/i<=k) here=min(here,n/i);
        lagbe=min(lagbe,here);
    }
}
cout<<lagbe<<endl;

  

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
