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
ll lo=0,hi=n;

vector<pair<ll,ll>>pr;
itr(i,n) {
    ll a,b;
    cin>>a>>b;
    hi=max(hi,b);
    pr.push_back({a,b});
}
ll lagbe=n;
ll agei=0;

while(lo<=hi){
    ll mid=(lo+hi)/2;
    ll cur=0;
    ll curlo=0;
    agei=0;
    ll k=mid;
   // cerr<<"mid "<<mid<<endl;
    itr(i,n){
        ll dis=pr[i].sc;
        ll shuru=pr[i].f;
        if(shuru>=curlo){
          if(cur+k<shuru){
            agei=1;
            break;
          }
          else{
            curlo=shuru;
            cur=min(cur+k,dis);
          }

        }
        else{
          if(curlo-k>dis){
            agei=1;
            break;
          }
          else{
            curlo=max(curlo-k,shuru);
            cur=min(dis,cur+k);

          }
        }
        if(agei>0) break;
    


    }
      if(agei==0){
        lagbe=mid;
        hi=mid-1;

    }
    else lo=mid+1;
  }
    
  


cout<<lagbe<<endl;
  

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
