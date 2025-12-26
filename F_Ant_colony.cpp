///
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
#define ll int
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

ll tr[4*N];
ll v[N];
ll marge(ll l,ll r){
    if(l<0) return r;
    if(r<0) return l;
   
  ll gc=__gcd(l,r);
  return gc;

   
}
void init(int ind,int b,int e){
    if(b==e) {
       tr[ind]=v[b];
      // tr[ind].cnt=1;
       return;
    }
    int mid=(b+e)/2;
    init(ind*2,b,mid);
    init(ind*2+1,mid+1,e);
    tr[ind]=marge(tr[ind*2],tr[ind*2+1]);
}

ll ask(int ind,int b,int e,int i,int j){
    if(b>j||e<i) return {-1};

    if(b>=i&&e<=j) return tr[ind];
    int mid=(b+e)/2;
    ll left=ask(ind*2,b,mid,i,j);
    ll right=ask(ind*2+1,mid+1,e,i,j);
    return marge(left,right);
}
void solve()
{
   ll n;
   cin>>n;
   unordered_map<ll,ll>mp;
   vector<ll>unq;
   itr(i,n){

    cin>>v[i];
    mp[v[i]]++;
    if(mp[v[i]]==1) unq.push_back(v[i]);
   }
   ll m=unq.size();
   ll id=1;
   mp.clear();
   vector<vector<ll>>g(1e5+5);
 for(int i=0;i<m;i++){
    mp[unq[i]]=id++;
}

   for(int i=1;i<=n;i++){
    ll id=mp[v[i]];
    g[id].push_back(i);
   }
   ll q;
   cin>>q;
   init(1,1,n);
   while(q--){
    ll a,b;cin>>a>>b;
    ll ans=ask(1,1,n,a,b);
    ll tot=b-a+1;
    ll gcc=ans;
    ll sz=g[gcc].size();
    ll id=mp[gcc];
   if(mp.find(gcc) == mp.end()) {
    cout << tot << endl;
    continue;
}

    ll lind=lower_bound(g[id].begin(),g[id].end(),a)-g[id].begin();
    ll uind=upper_bound(g[id].begin(),g[id].end(),b)-g[id].begin();
    if(uind==lind){
        cout<<tot<<endl;
        
    }
    else{
        tot-=uind-lind;
        cout<<tot<<endl;
    }
    
   }


  

}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  //tt
  {
    solve();
  }
}
