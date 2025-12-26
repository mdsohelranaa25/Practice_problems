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

  ll n,m;
  cin>>n>>m;
  vc(v,n);
  itr(i,n) cin>>v[i];
  srt(v);
   vc(vv,m);
    vc(vvv,m);
    itr(i,m) cin>>vv[i];
    itr(i,m) cin>>vvv[i];
  vector<pair<ll,ll>>pr;
  vector<ll>zero;
  itr(i,m){
    ll x,y;
    x=vv[i];
       y=vvv[i];
    if(y==0) zero.push_back(x);
    else pr.push_back({x,y});
  }
  srt(zero);
  srt(pr);
  ll mx=v[n-1];
  ll cnt=0;
  for(int i=0;i<pr.size();i++){
    if(pr[i].f>mx) break;
    else {
        cnt++;
        mx=max(mx,pr[i].sc);
        if(pr[i].f<pr[i].sc){
            int ind=lower_bound(v.begin(),v.end(),pr[i].f)-v.begin();
            if(v[ind]<pr[i].sc) {
                v[ind]=pr[i].sc;
                srt(v);
            }
        }
    }
  }
 int i=0,j=0;
 while(i<zero.size()&&j<v.size()){
    if(zero[i]<=v[j]){
        cnt++;
        i++;
        j++;
    }
    else j++;
 }
 cout<<cnt<<endl;
  

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