/*
  //! In The Name Of Allah




*/
#include <bits/stdc++.h>
using namespace std;
#define tt  \
  int t;    \
  cin >> t; \
  while (t--)
  #define int long long
#define itr(i, a) for (int i = 0; i < a; i++)
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
ll tr[4*N],v[N];
void init(int ind,int b,int e){
    if(b==e) {
        tr[ind]=v[b];
        return;
    }
    int mid=(b+e)/2;
    init(ind*2,b,mid);
    init(ind*2+1,mid+1,e);
    tr[ind]=min(tr[ind*2],tr[ind*2+1]);
}
void upd(int ind,int b,int e,int i,int val){
    if(b>i||e<i) return;
    if(b==i&&e==i) 
    {
        tr[ind]=val;
        return;
    }
    int mid=(b+e)/2;
    upd(ind*2,b,mid,i,val);
    upd(ind*2+1,mid+1,e,i,val);
    tr[ind]=min(tr[ind*2],tr[ind*2+1]);
}
int ask(int ind,int b,int e,int i,int j){
    if(b>j||e<i) return 1e9;
    if(b>=i&&e<=j) return tr[ind];
    int mid=(b+e)/2;
    int left=ask(ind*2,b,mid,i,j);
    int right=ask(ind*2+1,mid+1,e,i,j);
    return min(left,right);
}
void solve()
{
ll n,m;cin>>n>>m;
itr(i,n) cin>>v[i];
init(1,0,n-1);
//cerr<<n<< ' '<<m<<endl;
while(m--){
    //cerr<<m<<endl;
    ll a,b,c;cin>>a>>b>>c;
   // cerr<<a<<' '<<b<<' '<<c<<endl;
    if(a==1){
        upd(1,0,n-1,b,c);
    }
    else{
     int ret=ask(1,0,n-1,b,c-1);
     cout<<ret<<endl;
    }
    //cerr<<m<<endl;
}

  

}
int32_t main()
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
