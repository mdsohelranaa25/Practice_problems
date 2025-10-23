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
void sieve()
{
  isprime[1] = false;
  isprime[2] = true;
  pb(primes, 2);
  for (int i = 3; i * i <= N; i += 2)
    isprime[i] = true;
  for (int i = 3; i <= N; i += 2)
  {
    if (isprime[i])
    {
      pb(primes, i);
      for (int j = i * i; j <= N; j += i)
      {
        isprime[j] = false;
      }
    }
  }
}

void solve()
{

  ll n;
  cin>>n;
  string s;cin>>s;
  bool f=0;
  vc(v,n+5);
  itr(i,n){
    if(s[i]=='1') v[i]=i+1;

  }
  if(s[0]=='0'&&s[1]=='1') { no;
return;}
  vc(pre,n+5);
  ll now=n;
  ll i=n-1;
  cerr<<v[n-1]<<endl;
  while(i>=0){
    if(v[i]!=0) now=v[i]-1;
    else
     pre[i]=now;
    // cerr<<i<<' '<<pre[i]<<endl;
     i--;
    
  }
  now=pre[0];
  
  for(int i=0;i<n;i++){
    if(v[i]!=0){
        cerr<<i<<' '<<pre[i]<<endl;
        now=pre[i+1];
        continue;
    }
 
  if(v[i]==0){
    if(now<v[i-1]) { v[i]=now;
    now--;}
    else if(s[i-1]=='1'&&now==v[i-1]+1) {f=1;
    break;}
    else {
        v[i]=now;
        now--;
    }
  }
  }
  if(f) no;
  else {
    yes;
    itr(i,n) cout<<v[i]<<' ';
    endd;
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
