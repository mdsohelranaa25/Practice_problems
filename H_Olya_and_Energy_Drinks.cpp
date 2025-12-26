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
vector<vector<char>>v(1005,vector<char>(1000));
ll dist[1005][1005];
ll n,m,k;
bool valid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && v[x][y] != '#');
}
void solve()
{

cin>>n>>m>>k;

  itr(i,n){
    itr(j,m) {cin>>v[i][j];
        dist[i][j]=-1;
    }
  }
ll a,b,c,d;
cin>>a>>b>>c>>d;
a--;
b--;
c--;
d--;
dist[a][b]=0;
 queue<pair<int,int>> q;
 q.push({a,b});

 while(!q.empty()){
    auto l=q.front();
    q.pop();
    ll x=l.f;
    ll y=l.sc;
    if(valid(x+1,y)&&dist[x+1][y]==-1){
        dist[x+1][y]=dist[x][y]+1;
        q.push({x+1,y});
    }
    if(valid(x,y+1)&&dist[x][y+1]==-1){
         dist[x][y+1]=dist[x][y]+1;
        q.push({x,y+1});
    }
    cerr<<dist[x][y+1]<<' '<<dist[x+1][y]<<' '<<x<<' '<<y<<endl;
 }
 ll sum=dist[c][d];
 if(sum==0) {
    cout<<-1<<endl;
    return;
 }
 if(sum%k==0) cout<<sum/k<<endl;
 else cout<<sum/k+1<<endl;

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
 // tt
  {
    solve();
  }
}
