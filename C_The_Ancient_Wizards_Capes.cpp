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
    vc(v,n+5);
    for(int i=1;i<=n;i++) cin>>v[i];
    vc(pre,n+4);
    vc(suf,n+5);
    bool f=0;
    pre[1]=0;
    for(int i=2;i<=n;i++)
    {
        ll dif=abs(v[i]-v[i-1]);
        if(dif>=2) {
            f=1;
            break;
        }
        if(dif==1){
            pre[i]=pre[i-1];
        }
        else pre[i]=1^pre[i-1];
    }
    vector<ll>age(n+4,0),pore(n+4,0);
    age[1]=0;
    for(int i=2;i<=n;i++){
        if(pre[i-1]==0) age[i]=age[i-1]+1;
        else age[i]=age[i-1];
    }
    for(int i=n-1;i>=1;i--){
        if(pre[i+1]==1) pore[i]=pore[i+1]+1;
        else pore[i]=pore[i+1];
    }
    ll ans=0;
    bool fr=0;
    for(int i=1;i<=n;i++){
        ll now=1;
        now+=age[i];
        now+=pore[i];
        if(now!=v[i])
        fr=1;

    }
    if(fr==0) ans++;
    fr=0;
    pre[1]=1;
    for(int i=2;i<=n;i++)
    {
        ll dif=abs(v[i]-v[i-1]);
        if(dif>=2) {
            f=1;
            break;
        }
        if(dif==1){
            pre[i]=pre[i-1];
        }
        else pre[i]=1^pre[i-1];
    }
    vector<ll>agee(n+4,0),poree(n+4,0);
    agee[1]=0;
    for(int i=2;i<=n;i++){
        if(pre[i-1]==0) agee[i]=agee[i-1]+1;
        else agee[i]=agee[i-1];
    }
    for(int i=n-1;i>=1;i--){
        if(pre[i+1]==1) poree[i]=poree[i+1]+1;
        else poree[i]=poree[i+1];
    }
     for(int i=1;i<=n;i++){
        ll now=1;
        now+=agee[i];
        now+=poree[i];
        if(now!=v[i])
        fr=1;

    }
    if(fr==0) ans++;
    if(f){
        cout<<0<<endl;
        return;
    }
    else cout<<ans<<endl;


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
