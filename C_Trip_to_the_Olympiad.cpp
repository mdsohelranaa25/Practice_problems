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

  ll n,m;cin>>n>>m;
  bitset<34>k=m;
  bitset<34>kk=n;
  ll ext=0;
  ll last=0;
  if(m-n==2) {cout<<n<<' '<<n+1<<' '<<n+2<<endl;
    return ;
  }
  ll one=0,sec=0,thi=0;
  for(int i=33;i>=0;i--){
    if(k[i]==1&&kk[i]==0){
        last=i;
        break;
    }
    else if(k[i]==1&&kk[i]==1) ext+=1<<i;
  }
  one=1<<last;
  one+=ext;
  

  cout<<one<<' '<<one-1<<' ';
  if(one-2>=n) cout<<one-2<<endl;
  else cout<<one+1<<endl;

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
