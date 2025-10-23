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
vector<bool>vis(1e6,false);
vector<vector<ll>>g(1e6);
vector<ll>val(1e6);
ll current=1;
ll cyclecnt=0;
map<pair<ll,ll>,ll>col;
vector<ll>color(1e6);
bool oddcycle_ache=false;
 ll n,m;
vector<ll>back(1e6);
vector<ll>par(1e6);
void dfs(ll u){
    vis[u]=true;
    for(auto x:g[u]){
        
        if(!vis[x]){
            par[x]=u;
            color[x]=color[u]^1;
            if(color[u]==1){
                 col[{u,x}]=0;
                 col[{x,u}]=1;
            }
            else{
                 col[{u,x}]=1;
            col[{x,u}]=0;

            } 

            dfs(x);
        }
      
        else if(x!=par[u]){
            cerr<<x<<' '<<u<<' '<<color[x]<<' '<<color[u]<<endl;
            if(color[x]==color[u])  {oddcycle_ache=true;
                return ;
            }
            else{
                if(color[u]==1){
                 col[{u,x}]=0;
                 col[{x,u}]=1;
            }
            else{
                 col[{u,x}]=1;
            col[{x,u}]=0;

            } 
            }
        }
    
}

    }

  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);

 cin>>n>>m;
 ll mm=m;
 map<ll,ll>mp;
 vector<pair<ll,ll>>prr;
   ll onebar=1;
 while(mm--){
    ll u,v;
  
    cin>>u>>v;
    prr.push_back({u,v});
    g[u].push_back(v);
    g[v].push_back(u);
    mp[u]++;
    mp[v]++;
    
 }
 for(int i=1;i<=n;i++) if(mp[i]==1) onebar=i;
 
color[onebar]=1;
val[onebar]=current++;
dfs(onebar);
if(oddcycle_ache) no;
else{
yes;

itr(i,m){
    
    ll u=prr[i].f;
    ll v=prr[i].sc;
  //  cerr<<u<<' '<<v<<endl;
   // cerr<<u<<' '<<v<<' '<<' '<<col[{u,v}]<<endl;
    cout<<col[{prr[i].f,prr[i].sc}];
}

}


  }
  

