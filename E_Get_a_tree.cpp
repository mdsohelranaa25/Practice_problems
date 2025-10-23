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
   vector<vector<ll>>g(1e6);
   vector<bool>vis(1e6,false);
   ll n,m;
#define endl '\n'
const int N=1e6+1;
ll cnt_div[N]={0};
vector<vector<ll>>final(1e6);
void dfs(ll u){
    vis[u]=true;
    for(auto x:g[u]) {
        if(!vis[x]){
            cout<<u<<' '<<x<<endl;
           // final[u].push_back(x);
            dfs(x);

        }
    }
}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  cin>>n>>m;
  while(m--){
    ll u,v;
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
 dfs(1);
 

  }
  

