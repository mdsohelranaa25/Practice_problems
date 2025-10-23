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
string s;
vector<pair<ll,ll>>dp(1e5);
vector<bool>vis(1e5,false);
vector<vector<ll>>g(1e5);
int n;
vector<ll>col(n+4);
int ans=0;

void dfs(int u){
    cerr<<"Y ";

   // if(dp[u].f!=-1) return dp[u];
    int b=s[u-1]=='B'?1:0;
    int w=s[u-1]=='W'?1:0;
    
    for(auto x:g[u]){
        dfs(x);
        b+=dp[x].f;
        w+=dp[x].sc;
    }
    dp[u]={b,w};
    if(b==w) ans++;
    
}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  tt{
 cin>>n;
 ans=0;
 for(int i=0;i<=n+4;i++){
    vis[i]=false;
    g[i].clear();
    dp[i]={0,0};
 }
 vc(v,n+3);
 for(int i=2;i<=n;i++) cin>>v[i];
 cin>>s;
 for(int i=2;i<=n;i++){
g[v[i]].push_back(i);
 }
 
 dfs(1);
 cout<<ans<<endl;

  }
  }
  

