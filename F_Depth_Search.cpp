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
ll ans=1;
vector<vector<ll>>g(1e4);
void dfs(ll u){
    vis[u]=true;
    for(auto x:g[u]){
       // dis[x]=min(dis[x],dis[u]+1);
        if(!vis[x]){
ans++;
         //   dis[x]=min(dis[x],dis[u]+1);
            dfs(x);
        }
    }
}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();


ll n,a;

cin>>n>>a;
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
dfs(a);

cout<<ans<<endl;


  }