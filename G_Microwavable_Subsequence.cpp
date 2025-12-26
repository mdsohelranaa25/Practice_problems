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
vector<vector<ll>>tr(4*N+5);
vector<ll>v(N+1);
void init(int ind,int l,int e){
    if(l==e){
        tr[ind].push_back(v[l]);
        return;
    }
    ll mid=(l+e)/2;
    init(ind*2,l,mid);
    init(ind*2+1,mid+1,e);
    set<ll>st;
    for(auto x:tr[ind*2]) st.insert(x);
    for(auto x:tr[ind*2+1]) st.insert(x);
    for(auto x:st){
        tr[ind].push_back(x);
    }
    //tr[ind]=tr[ind*2]+tr[ind*2+1];

}
vector<ll> ask(int id,int b,int e,int i,int j){
  if(b>j||e<i){
    return {};
  }
  if(b>=i&&e<=j){
  return tr[id];
  }
  int mid=(b+e)/2;
  vector<ll>left=ask(id*2,b,mid,i,j);
  vector<ll> right=ask(id*2+1,mid+1,e,i,j);
set<ll>st;
for(auto x:left) st.insert(x);
for(auto x:right) st.insert(x);
vector<ll>fin;
for(auto x:st) fin.push_back(x);
return fin;
  

}

void solve()
{

    ll n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    init(1,1,n);
    // for(int i=1;i<=4*n;i++){
    //     cout<<tr[i]<<" ";
    // } 
    map<ll,ll>mp;
    ll sum=0;
    for(int i=1;i<=n;i++){
        
        if(mp[v[i]]>0){
            vector<ll>st =ask(1,1,n,mp[v[i]],i);
            set<ll>stt;
            for(auto x:st) stt.insert(x);
            sum+=stt.size()-1;
         
            mp[v[i]]=i;

        }
        else{
            sum+=m-1;
            mp[v[i]]=i;
        }
       // cerr<<i<<' '<<sum<<endl;
    }
    cout<<sum<<endl;
    


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
