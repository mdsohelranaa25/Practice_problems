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
ll cnt_div[N]={0};
vector<ll>dis(1e4,1e9);
vector<vector<char>>v;
vector<bool>vis(1e4,false);
vector<vector<ll>>g(1e4);
void dfs(ll u){
    vis[u]=true;
    for(auto x:g[u]){
        dis[x]=min(dis[x],dis[u]+1);
        if(!vis[x]){
            dis[x]=min(dis[x],dis[u]+1);
            dfs(x);
        }
    }
}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();


ll n,x;
cin>>n>>x;
v.resize(n+2,vector<char>(n+3));
itr(i,n){
    itr(j,n){
        cin>>v[i][j];
        if(v[i][j]=='1'){
            g[i+1].push_back(j+1);
           // g[j+1].push_back(i+1);
        }
    }
}
fill(dis.begin(),dis.end(),-1);
dis[x]=0;
queue<ll>q;
q.push(x);
while(!q.empty()){
    ll u=q.front();
    q.pop();
    for(auto x:g[u]){
     
        if(dis[x]==-1) {dis[x]=dis[u]+1;
            q.push(x);
        }
    }
}
for(int i=1;i<=n;i++) cout<<dis[i]<<' ';

 
}
  
  
  

