/*
  //! In The Name Of Allah




*/
#include <bits/stdc++.h>
using namespace std;
#define tt  \
  int t;    \
  cin >> t; \
  while (t--)
#define itr(i, a) for (int i = 1; i <= a; i++)
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

ll ts=0;
void solve()
{
    ts++;
ll n;
cin>>n;
vc(v,n+1);
map<ll,ll>mp;
ll lf=-1,rt=-1;
itr(i,n) {
    
    cin>>v[i];
    mp[v[i]]++;
    
}
if(mp[0]<=1){
    
    itr(i,n){
        if(v[i]!=i){
            if(v[i]==0&&mp[i]==0) continue;
            if(lf==-1) lf=i;
            else rt=i;

        }
    }
    if(lf==rt) cout<<0<<endl;
    else
    cout<<rt-lf+1<<endl;
}
else{
    itr(i,n){
        if(v[i]!=i){
            if(lf==-1) lf=i;
            else rt=i;

        }
    }
    if(lf==rt) cout<<0<<endl;
    else
    cout<<rt-lf+1<<endl;

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
