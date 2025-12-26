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
vector<ll>v(N,0);

ll tr[4*N];

vector<ll>final;
ll m;
void update(int id,int b,int e,int i,int val){
  if(b>i||e<i){
    return;
  }
  if(b==i&&e==i){
    tr[id]+=val;
    return;
  }
  int mid=(b+e)/2;
  update(id*2,b,mid,i,val);
  update(id*2+1,mid+1,e,i,val);
  tr[id]=tr[id*2]+tr[id*2+1];

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
ll n,q;
cin>>n>>q;
vector<ll>pos(n+5,0);
vector<ll>all(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    all[i]=v[i];
    //pos[i]=v[i];
}
struct Query{
    char c;
    ll a,b;
};
vector<Query>qry(q);
for(int i=0;i<q;i++){
    cin>>qry[i].c>>qry[i].a>>qry[i].b;
    if(qry[i].c=='!'){
        all.push_back(qry[i].b);
    }
    else {all.push_back(qry[i].a);
        all.push_back(qry[i].b);
    }

}
srt(all);
all.erase(unique(all.begin(), all.end()), all.end());

m=all.size();
auto getid = [&](long long x) {
    return int(lower_bound(all.begin(), all.end(), x) - all.begin()) + 1;
};
for(int i=1;i<=n;i++){
    pos[i]=getid(v[i-1]);
    update(1,1,m,pos[i],+1);
}
for(int i=0;i<q;i++){
    if(qry[i].c!='!'){
        ll l=qry[i].a;
        ll e=qry[i].b;
       l=getid(l);
      e=upper_bound(all.begin(),all.end(),e)-all.begin();
      if(l>e) cout<<0<<endl;
      else{
        ll ans=ask(1,1,m,l,e);
        cout<<ans<<endl;
      }

    }
    else{
        ll k=qry[i].a;
        ll x=qry[i].b;
        ll old=pos[k];
        ll ne=getid(x);
        update(1,1,m,old,-1);
        update(1,1,m,ne,+1);
        pos[k]=ne;
    }
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
