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
ll n,a,b;
cin>>n>>a>>b;
ll m=log2(n);
m++;
m++;
vector<vector<char>>pos(n+1,vector<char>(m+1,'o'));
ll now=1;
ll ebar=1;
while(now<=m){
    ll cur=0;
    char c='o';
    for(int i=1;i<=n;i++){
        if(cur<ebar){
            pos[i][now]=c;
            
            cur++;

        }
        else{
            if(c=='o') c='e';
            else c='o';
            cur=1;
            pos[i][now]=c;
        }

    }
    ebar*=2;
    now++;
}
if(a==1){
    for(int i=0;i<m;i++) pos[b][i]='e';
}
else{
    for(int i=0;i<m;i++) pos[a-1][i]=pos[b][i];
}
ll cur=0;
for(int i=0;i<m;i++){
    if(pos[1][i]=='o') cur+=(1<<i);
}
vc(v,n+1);
v[1]=cur;
for(int i=2;i<=n;i++){
     cur=0;
     for(int j=0;j<m;j++) if(pos[i][j]!=pos[i-1][j]) cur+=(1<<j);
     v[i]=cur;

}
for(int i=1;i<=n;i++) cout<<v[i]<<' ';
cout<<endl;



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
