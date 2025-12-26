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
cin>>n;
string s;cin>>s;
vc(prea,n+5);
vc(sufa,n+5);
vc(preb,n+5);
vc(sufb,n+5);
ll cnta=0,cntb=0;
itr(i,n){
    if(s[i]=='a') cnta++;
    else cntb++;
}   
prea[0]=0;
preb[0]=0;
for(int i=0;i<n;i++){
    prea[i+1]=prea[i];
    preb[i+1]=preb[i];
    if(s[i]=='a') prea[i+1]++;
    else preb[i+1]++;

}
sufa[n-1]=0,sufb[n-1]=0;
for(int i=n-1;i>=0;i--){
    sufa[i]=sufa[i+1];
    sufb[i]=sufb[i+1];
    if(s[i]=='a') sufa[i]++;
    else sufb[i]++;

}
ll i=0,j=0;
ll ans=INT_MAX;
ll need=0;
for(i;i<n;i++){
    if(s[i]=='a'){
        need+=(i-j);
       // j++;
    }
}
ll c=(cnta*(cnta-1))/2;
need=need-c;
ans=need;
cerr<<need<<endl;
for(i=1;i<n;i++){
    ll now=need;
    now+=prea[i];
   now-=sufa[i];
    need=now;
    cerr<<"need "<<i<<' '<<need<<endl;
    ans=min(ans,need);

}
//cerr<<ans<<endl;
j=0;
need=0;
for(i=0;i<n;i++){
    if(s[i]=='b'){
        need+=(i-j);
       // j++;
    }
}
//cerr<<need<<endl;
c=(cntb*(cntb-1))/2;
need=need-c;

ans=min(ans,need);

for(i=1;i<n;i++){
    ll now=need;
    now+=preb[i];
    // if(preb[i]>0) now-=sufb[i+1
    // else 
    now-=sufb[i];
    need=now;
   // cerr<<"need "<<i<<' '<<need<<endl;
    ans=min(ans,need);

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
