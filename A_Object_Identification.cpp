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
vc(v,n);
itr(i,n)cin>>v[i];
map<ll,ll>mp;
itr(i,n) mp[v[i]]++;
ll nai=0;
for(int i=1;i<=n;i++) if(mp[i]==0) {nai=i;
    break;
}
if(nai==0){
    ll fr=0,ss=0;
    itr(i,n){
        if(v[i]==1) fr=i+1;
        if(v[i]==n) ss=i+1;
    }
    cout<<"? "<<fr<<' '<<ss<<endl;
    cout.flush();
    ll x;
    cin>>x;
   
     cout<<"? "<<ss<<' '<<fr<<endl;
    cout.flush();
    ll y;
    cin>>y;
    if(x==y&&x>=n-1) cout<<"! B"<<endl;
    else cout<<"! A"<<endl;
    cout.flush();

}
else{
    cout<<"? "<<nai<<' '<<v[0]<<endl;
    cout.flush();
    ll x;
    cin>>x;
    
    if(x==0) cout<<"! A"<<endl;
    else cout<<"! B"<<endl;
    cout.flush();

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
