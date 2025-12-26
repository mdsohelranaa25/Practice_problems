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
cin>>n;
vc(v,n);
vc(vv,n);
itr(i,n) cin>>v[i];
itr(i,n) cin>>vv[i];
ll sum=0;
itr(i,n){
    sum+=v[i];
    sum+=vv[i];

}

  if(sum%2==0) {cout<<"Tie"<<endl;
    return;
  }
  ll lind=-1;
  for(int i=n-1;i>=0;i--){
    if(v[i]!=vv[i]){
        lind=i+1;
        break;
    }
  }
  //cout<<lind<<endl;
  if(lind%2) cout<<"Ajisai"<<endl;
  else cout<<"Mai"<<endl;

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

  
  

