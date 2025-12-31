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

  
ll n,k;
cin>>n>>k;
vector<pair<ll,ll>>pr;
pr.push_back({0,0});
vc(v,n+1);
vector<pair<ll,ll>>ans;
for(int i=1;i<=n;i++)cin>>v[i];
vector<ll>vv=v;
for(int i=1;i<=n;i++){
    pr.push_back({v[i],i});
}
srt(pr);
vc(presum,n+3);
for(int i=n-1;i>1;i--){
    presum[i]=presum[i+1]+pr[i].f;
}
if(k>0){
    if(2*k>n) {
        cout<<-1<<endl;
        return;
    }
    ll badshuru=n-k+1;
    ll extra=n-2*k;
    for(int i=2;i<=extra;i++){
      ans.push_back({pr[i].sc,pr[i-1].sc});
      //cout<<pr[i].sc<<' '<<pr[i-1].sc<<endl;
    }
    if(extra>0) {
      ans.push_back({pr[extra+1].sc,pr[extra].sc});
      //cout<<pr[extra+1].sc<<' '<<pr[extra].sc<<endl;
    }
    for(int i=extra+1;i<badshuru;i++){
      ans.push_back({pr[i].sc,pr[i+k].sc});
     // cout<<pr[i].sc<<' '<<pr[i+k].sc<<endl;
    }
    cout<<ans.size()<<endl;
    for(auto x:ans) cout<<x.sc<<' '<<x.f<<endl;
    
}
else{
  // for(int i=2;i<=n;i++) cerr<<presum[i]<<' ';
  // cerr<<endl;
  ll breakhobe=-1;
  for(int i=1;i<n;i++){
    //cerr<<i<<' '<<(pr[n].f-presum[i+1])<<' '<<(pr[i].f>=pr[n].f)<<endl;
    if((pr[n].f-presum[i+1])>0&&(pr[i].f>=(pr[n].f-presum[i+1]))){
      breakhobe=i;
      break;

    }
    else {
      pr[i].f-=pr[i-1].f;
    }
    
  }
 
  
  if(breakhobe==-1) {cout<<breakhobe<<endl;
    return;
  }
  for(int i=2;i<=breakhobe;i++) {
    ans.push_back({pr[i].sc,pr[i-1].sc});
    //<<pr[i].sc<<' '<<pr[i-1].sc<<endl;
  }
  for(int i=n-1;i>=breakhobe;i--){
    ans.push_back({pr[n].sc,pr[i].sc});
    //cout<<pr[n].sc<<' '<<pr[i].sc<<endl;
  }
   cout<<ans.size()<<endl;
   for(auto x:ans) cout<<x.sc<<' '<<x.f<<endl;
  
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
