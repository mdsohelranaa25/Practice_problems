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
struct node{
int right;
int left;
int full;
};
node tr[4*N];
string v;
node marge(node l,node r){
    // if(l.first_element==-1) return r;
    // if(r.first_element==-1) return l;
    node ans;
    ans.full=l.full+r.full;
    ll mn=0;
    mn=min(l.left,r.right);
    ans.full+=mn;
    l.left-=mn;
    r.right-=mn;
    ans.left=l.left+r.left;
    ans.right=l.right+r.right;
    
  return ans;
}
void init(int ind,int b,int e){
    if(b==e) {
       if(v[b-1]=='('){
        tr[ind].left=1;
        tr[ind].right=0;
        tr[ind].full=0;
       }
       else{
         tr[ind].left=0;
        tr[ind].right=1;
        tr[ind].full=0;

       }
       return;
    }
    int mid=(b+e)/2;
    init(ind*2,b,mid);
    init(ind*2+1,mid+1,e);
    tr[ind]=marge(tr[ind*2],tr[ind*2+1]);
    //cerr<<b<<' '<<e<<' '<<tr[ind].full<<endl;
}

node ask(int ind,int b,int e,int i,int j){
    if(b>j||e<i) return {0,0,0};

    if(b>=i&&e<=j) return tr[ind];
    int mid=(b+e)/2;
    node left=ask(ind*2,b,mid,i,j);
    node right=ask(ind*2+1,mid+1,e,i,j);
    return marge(left,right);
}
void solve()
{
    
    cin>>v;
    ll n=v.size();
    ll m;
    cin>>m;
    init(1,1,n);
    while(m--){
        ll a,b;
        cin>>a>>b;
        node ans=ask(1,1,n,a,b);
        cout<<ans.full*2<<endl;
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
