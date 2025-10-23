		/*
			//! In The Name Of Allah
				
			
				
				
		*/                                                                                                                                                  
  #include<bits/stdc++.h>
  using namespace std;
  #define tt int t;cin>>t;while(t--)
  #define itr(i,a) for(int i=0;i<a;i++)
#define ittr(i,bg,a) for(int i=bg;i<a;i++)
  #define yes cout<<"YES"<<endl
  #define no cout<<"NO"<<endl
  #define ll long long
  #define endd cout<<endl
  #define vc(v, n) vector<ll> v(n)  
  #define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a,x) a.push_back(x)
#define MOD 1000000007
  #define f first
  #define sc second
#define endl '\n'
const int N=1e6+1;
vector<bool>isprime(N,false);
vector<ll>primes;
ll cnt_div[N]={0};
vector<ll>divisor[N];
void divis(){
for(int i=1;i<=N;i++){
for(int j=i;j<=N;j+=i){
cnt_div[j]++;
divisor[j].push_back(i);
//if(i/j!=i) divisor[j].push_back(i/j);
}
}

}
void sieve(){
isprime[1]=false;
isprime[2]=true;
pb(primes,2);
for(int i=3;i*i<=N;i+=2) isprime[i]=true;
for(int i=3;i<=N;i+=2){
if(isprime[i]){
pb(primes,i);
for(int j=i*i;j<=N;j+=i){
isprime[j]=false;
}
}
}
}
vector<vector<ll>>g(1e4);
vector<ll>ans;
vector<vector<ll>>v(1e5);
vector<bool>vis(1e5,false);
map<pair<ll,ll>,ll>mp;
void dfs(ll u){
    vis[u]=true;
    for(auto v:g[u]){
        if(!vis[v]){
            ans.push_back({mp[{u,v}]});
            dfs(v);
        }
    }
}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  tt{
 ll n;
 cin>>n;
itr(i,n+6) {
    g[i].clear();
    vis[i]=false;
    
    
}
mp.clear();
set<ll>st;
for(ll i=1;i<=n;i++){
    ll x,y;
    cin>>x>>y;
   g[x].push_back(y);
    mp[{x,y}]=i;
    st.insert(x);
    st.insert(y);
}
ans.clear();
for(auto x:st){
    if(!vis[x]) dfs(x);
}
// srt(pr);
// vector<ll>ans;
// map<ll,ll>mpp;
// vector<pair<ll,ll>>rempr;
// for(int i=1;i<=n;i++){
//     ll x=pr[i].f;
//     ll y=pr[i].sc;
//     if(mpp[x]&&mpp[y]){
//     continue;
//     }
//    else if(pr[i-1].f==pr[i].f){
//     rempr.push_back({pr[i].f,pr[i].sc});
//     }
//     else {
//         mpp[x]++;
//         mpp[y]++;
//         ans.push_back(mp[{x,y}]);
//     }
// }
// for(int i=0;i<rempr.size();i++){
//     ll x=rempr[i].f;
//     ll y=rempr[i].sc;
//     if(mpp[x]&&mpp[y]) continue;
//     else ans.push_back(mp[{x,y}]);
// }
srt(ans);
cout<<ans.size()<<endl;
for(auto x:ans) cout<<x<<' ';
endd;

  }
  }
  

