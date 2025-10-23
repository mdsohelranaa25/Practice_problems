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
   vector<vector<ll>>wet(105,vector<ll>(105));
   ll n,m;
#define endl '\n'
ll first=0,sec=0;
const int N=1e6+1;
ll cnt_div[N]={0};
ll sigle1=-1,single2=-1;
ll lind=-1;
void dfs(ll u){
    vis[u]=true;
    
    for(auto x:g[u]) {
      lind=x;
        if(!vis[x]){
            cerr<<u<<' '<<x<<' '<<wet[u][x]<<' '<<wet[x][u]<<endl;
           first+=wet[u][x];
        sec+=wet[x][u];
            cerr<<first<<' '<<sec<<endl;
            dfs(x);
        }
    }
}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  cin>>n;
  while(n--){
    ll u,v,x;
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
    cin>>x;
    wet[u][v]=0;
    wet[v][u]=x;
  }

  
  dfs(1);
 first+=wet[lind][1];
 sec+=wet[1][lind];
cout<<min(first,sec)<<endl;
  }
  

