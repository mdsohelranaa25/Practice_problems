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
  vector<vector<ll>>pre(n+5,vector<ll>(45,0));
  for(int i=1;i<=n;i++) cin>>v[i];
  for(int i=n;i>=1;i--){
    bitset<41>k=v[i];
    for(int j=0;j<41;j++)  pre[i][j]=k[j]+pre[i+1][j];
  }
  ll q;
  cin>>q;
  while(q--){
    ll l,k;cin>>l>>k;
   
    ll lo=l,hi=n;
    ll last=-1;
    while(lo<=hi){
        ll mid=(lo+hi)/2;
        ll ans=0;
     //  cerr<<"mid "<<mid<<endl;

        for(int i=0;i<41;i++) {
            //cerr<<i<<' '<<pre[mid][i]<<' '<<pre[l][i]<<endl;
            if(pre[l][i]-pre[mid+1][i]==(mid-l+1)) {
          //  cerr<<i<<' '<<pre[mid][i]<<' '<<pre[l][i]<<endl;
            ans+=(1<<i);
        }
        }
        if(ans>=k){
            last=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    cout<<last<<' ';


  }
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
