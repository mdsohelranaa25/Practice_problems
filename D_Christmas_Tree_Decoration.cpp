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
#define MOD 998244353
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
ll ext=0;
cin>>ext;
itr(i,n){
    cin>>v[i];

}
ll ans=1;
rsrt(v);
vc(lagche,n);
ll sum=0;
itr(i,n) sum+=v[i];
sum+=ext;
ll cnt=sum%n;
//cerr<<ans<<endl;
itr(i,n){
    lagche[i]=sum/n;
    if(cnt){
        lagche[i]++;
        cnt--;
        
    }
}
for(int i=0;i<n;i++){
  ll usehoiche=i;
  ll parbo=0;
  ll mx=v[i]+ext;
  for(int j=0;j<n;j++){
     if(lagche[j]>=v[i]) parbo++;
    //if((v[j]+ext)>=lagche[i]) parbo++;

  }
  ll ekhane=parbo-usehoiche;
 // cerr<<parbo<<' '<<usehoiche<<' '<<ekhane<<endl;
  
  if(ekhane<=0){
    ans*=0;
    break;
  }
  else ans*=ekhane;
  ans%=MOD;
}


cout<<ans<<endl;


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
