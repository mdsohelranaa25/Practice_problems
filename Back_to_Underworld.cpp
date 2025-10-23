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
bool vis[N];
int isNode[20009];
ll cnt=0,cnt1=0;
vector<vector<ll>>adj(20009);
void dfs(int u,int col){
    vis[u]=true;
    if(col==1) cnt1++;
    cnt++;
    ll tmp;
        if(col==1) tmp=2;

        else tmp=1;
    for(auto v:adj[u]){
        
        if(!vis[v]){
            dfs(v,tmp);

        }
    }
    
}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
   ll c=1;
  tt{
    cout<<"Case "<<c++<<": ";
 ll n;
 cin>>n;
 for(int i=1;i<=20000;i++){
vis[i]=0;
adj[i].clear();
isNode[i]=0;
 }
 while(n--){
    ll u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
    isNode[v]=1;
    isNode[u]=1;
 }
 ll ans=0;
 for(int i=1;i<=20000;i++){
    if(!vis[i]&&isNode[i]){
        cnt=0,cnt1=0;
        dfs(i,1);
        ans+=max(cnt1,cnt-cnt1);


    }

 }
 
cout<<ans<<endl;
  }
  }
  

