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
vector<ll>dpmx(1e6+5,0),dpmn(1e6+5,0);
vector<vector<ll>>g(1e6+9);
vector<bool>vis(1e6);
vector<ll>v;
void dfs(int u,int par){
    vis[u]=true;

    for(auto x:g[u]){
           if(par==-1){
        dpmx[u]=v[u];
        dpmn[u]=v[u];

        
    }
    else{
         
        dpmx[u]=max(v[u],v[u]-dpmn[par]);
        dpmn[u]=min(v[u],v[u]-dpmx[par]);
    
    
    }
 if(!vis[x]) dfs(x,u);
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
 itr(i,n+5) {
    g[i].clear();
    vis[i]=false;

 }
v.resize(n+5);
for(int i=1;i<=n;i++) cin>>v[i];
itr(i,n-1){
    ll x,y;
    cin>>x>>y;
    g[x].push_back(y);
    g[y].push_back(x);
}
dfs(1,-1);
for(int i=1;i<=n;i++) cout<<dpmx[i]<<' ';
endd;

  }
  }
  

