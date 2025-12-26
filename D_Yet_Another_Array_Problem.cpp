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
const int N = 1e4 + 1;
vector<bool> isprime(N, false);
vector<ll> primes;

void sieve()
{
  isprime[1] = false;
  isprime[2] = true;
 for(int i=2;i<=N;i++) isprime[i]=true;
    for(int i=2;i*i<=N;i++){
        if(isprime[i]){
            for(int j=i*i;j<=N;j+=i){
                isprime[j]=false;
            }
        }
    }
 for(int i=2;i<=N;i++){
     if(isprime[i]){
         primes.push_back(i);
     }
    }
   // cerr<<primes.size()<<endl;
}
void solve()
{

  ll n;
  cin>>n;
  vc(v,n);
  itr(i,n) cin>>v[i];
  ll mn=INT_MAX;
  itr(i,n){
    ll now=v[i];
    for(auto x:primes){
        if(now%x!=0){
            mn=min(mn,x);
            break;
        }
    }
  }
  if(mn==INT_MAX) cout<<-1<<endl;
  else cout<<mn<<endl;

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  sieve();
  // divis();
  tt
  {
    solve();
  }
}
