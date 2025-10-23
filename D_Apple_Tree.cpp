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
1
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
vector<vector<ll>>g(N);
bool vis[N];
vector<ll>cnt(N);
int dfs(int u){

    vis[u]=true;
    bool f=0;
    for(auto v:g[u]){
        if(!vis[v]){
            f=1;
            cnt[u]+=dfs(v);
        }
    }
    if(f==0){
    cnt[u]=1;
    }
     return cnt[u];
}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  tt{
 ll n,m;
 cin>>n;
 itr(i,n+1){
    g[i].clear();
    vis[i]=false;
    cnt[i]=0;
 }
 itr(i,n-1){
   ll u,v;
   cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
 }
dfs(1);

//itr(i,n) cerr<<cnt[i]<<' ';
cin>>m;
while(m--){
    ll fir=0;
    ll sec=0;
    ll a,b;
    cin>>a>>b;
    fir=cnt[a];
    sec=cnt[b];
    cout<<fir*sec<<endl;
}

  }
  }
  

