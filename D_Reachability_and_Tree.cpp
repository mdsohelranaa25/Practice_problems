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
}    ll n;
vector<ll>last;
vector<vector<ll>>g(N);
vector<bool>vis(N,false);
void dfs(ll u){
  vis[u]=true;
   bool f=1;
   for(auto v:g[u]){
     
     if(!vis[v]) {
       dfs(v);
       f=0;
     }
   }
   if(f) last.push_back(u);
}
map<ll,ll>mp;
bool paichii=false;
ll fi=-1,se=-1;
void rec(int u,int col){
  
  mp[u]=col;
  //<<u<<' '<<col<<' '<<mp[u]<<endl;
  vis[u]=true;
  for(auto v:g[u]){
    if(!vis[v]&&col==1&&paichii==false&&v==se){
      cerr<<"paichi "<<v<<endl;
      paichii=true;
      rec(v,col);
    }
    if(!vis[v]) rec(v,col^1);
  }
  
}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  tt{
last.clear();
    cin>>n;
    itr(i,n+4) {g[i].clear();
    vis[i]=false;
    }
 vector<pair<ll,ll>>pr;
 itr(i,n-1){
   ll x,y;
   cin>>x>>y;
   g[x].push_back(y);
   g[y].push_back(x);
   pr.push_back({x,y});
 }
 mp.clear();
 paichii=false;
 dfs(1);
 ll final=-1;
  fi=-1,se=-1;
 for(int i=1;i<=n;i++){
  if(g[i].size()==2){
     final=g[i][0];
    //cout<<"shit "<<g[i][0]<<endl;
     fi=final;
     se=i;
    break;
}
 }
cerr<<"fi se final "<<fi<<' '<<se<<' '<<final<<endl;
 if(final==-1){
   no;
   continue;
 }
 else yes;

for(int i=0;i<n+4;i++) vis[i]=false;
//cout<<"final "<<final<<' '<<fi<<' '<<se<<endl;
rec(final,1);
itr(i,n-1){
  ll x=pr[i].f;
  ll y=pr[i].sc;
   if((fi==x&&se==y)||(fi==y&&se==x)){
    cout<<fi<<' '<<se<<endl;
  }
  else  if(mp[x]==1) cout<<x<<' '<<y<<endl;
  else cout<<y<<' '<<x<<endl;
}

  }
  }
  