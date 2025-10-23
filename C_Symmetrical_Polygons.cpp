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


ll ts=0;
void solve()
{
ll n;
cin>>n;
vc(v,n);
itr(i,n) cin>>v[i];
srt(v);
map<ll,ll>mp;
ll ans=0;
set<ll>st;
itr(i,n){
    st.insert(v[i]);
    mp[v[i]]++;

}
ll use=0;
vector<ll>pore;
for(auto x:st){
    ans+=x*((mp[x]/2)*2);
    use+=(mp[x]/2)*2;
    if(mp[x]%2){
        pore.push_back(x);
    }
}
ll now=0;
ll mx=ans;
cerr<<mx<<endl;
 n=pore.size();
rsrt(pore);
bool f=0;
cerr<<n<<endl;

if(ans==0) {
    cout<<0<<endl;
    return;
}
//use 452138826
//f 705084822 226069413
for(int i=0;i<n;i++){
    if(pore[i]<ans) {mx=ans+pore[i];
        f=1;
    }
    
}
for(int i=0;i<n-1;i++){
    if(pore[i]<(ans+pore[i+1])){
        mx=max(mx,ans+pore[i]+pore[i+1]);
        f=1;
        break;
    }
}

if(f==1||use>2) cout<<mx<<endl;
else cout<<0<<endl;


  

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
   ts=0;
  tt
  {
    ts++;
    solve();
  }
}
