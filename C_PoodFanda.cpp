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
vector<vector<ll>>a(5,vector<ll>(4));
for(int i=0;i<5;i++){
    for(int j=0;j<4;j++){
        cin>>a[i][j];
    }
}

vector<pair<ll,vector<ll>>>pr;
vc(v,21);
ll x;
itr(i,n){
cin>>x;

for(int j=1;j<=20;j++){
    cin>>v[j];
    
}
ll p=0,q=0,r=0,s=0,ss=0;
for(int l=0;l<5;l++){

for(int k=0;k<4;k++){
    if(l==0)
    p+=v[a[l][k]];
    else if(l==1) q+=v[a[l][k]];
    else if(l==2) r+=v[a[l][k]];
    else if(l==3) s+=v[a[l][k]];
    else if(l==4) ss+=v[a[l][k]];
    //cerr<<l<<' '<<p<<' '<<a[l][k]<<' '<<v[a[l][k]]<<endl;
}
}
//cerr<<p<<' '<<q<<' '<<r<<' '<<s<<' '<<ss<<endl;
pr.push_back({x,{p,q,r,s,ss}});
}
srt(pr);
ll ans=LLONG_MAX;
ans=pr[0].f;
for(int i=0;i<5;i++) {ans+=pr[0].sc[i];
   // cerr<<pr[0].sc[i]<<' ';
}
ll cnt=0;
//cerr<<ans<<endl;
for(int i=1;i<n;i++){
    cnt=0;
    for(int k=0;k<5;k++){
        pr[i].sc[k]=min(pr[i].sc[k],pr[i-1].sc[k]);
    }
    cnt+=pr[i].f;
    for(int l=0;l<5;l++){
        cnt+=pr[i].sc[l];
    }
    ans=min(ans,cnt);

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
