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
vector<ll>val(1e4,0);
ll current=1;
ll cyclecnt=0;

bool oddcycle_ache=false;
 ll n,m;
 ll mn=1e5;
vector<ll>back(1e4);
vector<ll>par(1e4);

void dfs(ll u){
    cerr<<u<<' '<<mn<<endl;
    vis[u]=true;
    for(auto x:g[u]){
      if(!vis[x]){
      if(val[x]==0) val[x]=val[u]+1;

      
      else{
      
        val[x]=min(val[x],val[u]+1);
      //  mn=min(mn,now);
        //cerr<<"now "<<mn<<endl;
      }
    }
  }
    for(auto x:g[u]){
     // cerr<<x<<' '<<u<<' '<<vis[x];
     // if(vis[x]) cerr<<val[x]<<' '<<val[u]<<endl;
      //else cerr<<endl;
        
        if(!vis[x]){
            par[x]=u;

            dfs(x);
        }
        else if(x!=par[u]){
          oddcycle_ache=true;
          ll now=2;
          now+=abs(val[x]-val[u])+1;
          mn=min(mn,now);
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
   
    g[u].push_back(v);
    g[v].push_back(u);
    mp[u]++;
    mp[v]++;
    
 }
 for(int i=1;i<=n;i++) if(mp[i]==1) onebar=i;
val[onebar]=1;
dfs(onebar);
//for(int i=1;i<=n;i++) cerr<<val[i]<<' ';
if(oddcycle_ache){
    cout<<mn<<endl;
}
else{
cout<<-1<<endl;

}


  }
  