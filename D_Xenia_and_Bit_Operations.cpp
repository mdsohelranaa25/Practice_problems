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
#define int long long
const int N = 1e6 + 1;
vector<bool> isprime(N, false);
vector<ll> primes;
ll tr[N*4+12],v[N];
void init(int ind,int l,int e){
    if(l==e){
        tr[ind]=v[l];
        return;
    }
    ll mid=(l+e)/2;
    init(ind*2,l,mid);
    init(ind*2+1,mid+1,e);
  long long now = e - l + 1;
long long d = log2(now);
    if(d%2==1) {
       // cerr<<"init or "<<l<<' '<<e<<' '<<d<<endl;
        tr[ind]=tr[ind*2]|tr[ind*2+1];
    }
    else {tr[ind]=tr[ind*2]^tr[ind*2+1];
         //cerr<<"init xor "<<l<<' '<<e<<' '<<d<<endl;
    }

}
void update(int id,int b,int e,int i,int val){
  if(b>i||e<i){
    return;
  }
  if(b==i&&e==i){
    tr[id]=val;
    return;
  }
  int mid=(b+e)/2;
  update(id*2,b,mid,i,val);
  update(id*2+1,mid+1,e,i,val);
 long long now =  e- b+ 1;
long long d = log2(now);
    if(d%2==1) {tr[id]=tr[id*2]|tr[id*2+1];
         //cerr<<"upd or "<<b<<' '<<e<<' '<<d<<endl;
    }
    else {tr[id]=tr[id*2]^tr[id*2+1];
         //cerr<<"upd or "<<b<<' '<<e<<' '<<d<<endl;
    }
//cerr<<b<<' '<<e<<' '<<tr[id]<<endl;


}
int ask(int id,int b,int e,int i,int j){
  if(b>j||e<i){
    return 0;
  }
  if(b>=i&&e<=j){
  return tr[id];
  }
  int mid=(b+e)/2;
  int left=ask(id*2,b,mid,i,j);
  int right=ask(id*2+1,mid+1,e,i,j);
  return left+right;

}

void solve()
{
ll n,m;

cin>>n>>m;
n=(1LL<<n);
for(int i=1;i<=n;i++) cin>>v[i];
init(1,1,n);
while(m--){
    ll a,b;
    cin>>a>>b;
    update(1,1,n,a,b);
   //// cerr<<tr[2]<<' '<<tr[3]<<endl;
    
    
    cout<<tr[1]<<endl;
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
