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
  vc(v,n);
  ll now1=n-1;
  ll i=n-1;
  ll now0=now1;
  for(int i=0;i<n;i++){
    if(s[i]=='1') now0--;


  }
  while(i>=0){
    ll j=i;
    while(i>=0&&s[i]=='0'){i--;

    }
    j=i;
    while(i>=0&&s[i]=='1'){
        i--;
    }
    
    for(int l=i+1;l<=j;l++) {
        v[l]=now1;
        now1--;
    }

  }
  i=0;
  while(i<n){

    while(i<n&&s[i]=='1') i++;
    ll j=i;
    while(i<n&&s[i]=='0') i++;
    for(int l=i-1;l>=j;l--){
        v[l]=now1;
        now1--;
    }
    
  }

  bool f=0;
  for(int i=0;i<n;i++) if(s[i]!=s[0]) f=1;
  if(f==0){
    cout<<-1<<endl;
    return;
  }
  
  
  else {
    for(auto x:v) cout<<x<<' ';
  }

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
 
    solve();
  
}
