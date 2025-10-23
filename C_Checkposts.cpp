			//! In The Name Of Allah
				
			
				
				
	                                                                                                                                                 
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
vector<vector<ll>>g(1e6);
vector<bool>vis(1e6,false);
set<ll>cycle;
vector<ll>v;
ll n;
stack<ll>topo;
map<ll,ll>mp;
ll mn=1e14;
vector<bool>viss(1e6,false),visss(1e6,false);
void dfs(ll u){
    vis[u]=true;
    for(auto x:g[u]){
        if(!vis[x]) dfs(x);
        else cycle.insert(x); 
    }
}
bool ddfss(ll u){
    visss[u]=true;
    bool ff=0;
    for(auto x:g[u]){
        if(viss[x]) {ff=1;
          //  visss[x]=true;
            mn=min(mn,v[x]);
        }
        if(!visss[x]) ff|=ddfss(x);
    }
    if(ff){
        mn=min(mn,v[u]);
        mp[v[u]]++;
        visss[u]=true;
    }
    return ff;
}
bool ddfs(ll u,ll tar){
  cerr<<u<<' '<<tar<<' '<<v[u]<<endl;
    vis[u]=true;
    bool ff=false;
    for(auto x:g[u]){
        if(x==tar||viss[x]){
            mn=min(mn,v[x]);
            mn=min(mn,v[u]);
          //  mp[v[u]]++;   
             viss[u]=true;
            ff=true;
        }
        else if(!vis[x]) ff|=ddfs(x,tar);
        else {
      // v[u]=min(v[u],v[x]);
          ff=viss[x];
        }
    }
    cerr<<"back "<<u<<' '<<ff<<endl;
    if(ff){
        topo.push(u);
cerr<<"uu "<<u<<' '<<v[u]<<' '<<mp[v[u]]<<endl;
       // mp[v[u]]++;
        mn=min(mn,v[u]);
    }
    viss[u]=ff;
    return ff;   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    v.push_back(0);
    itr(i,n){
        ll x; cin>>x;
        v.push_back(x);
    }

    ll m;
    cin>>m;
    while(m--){
        ll u,w;
        cin>>u>>w;
        g[u].push_back(w);
    }

    for(ll i=1;i<=n;i++){
        if(!vis[i]) dfs(i);
    }

    vis.assign(1e6,false);
    ll ans=0, perm=1;
cerr<<"cycle"<<endl;
for(auto x:cycle) cerr<<x<< ' ';
cerr<<endl<<endl;
    for(auto x:cycle){
         vis.assign(1e6,false);
        if(!vis[x]){
          cerr<<"charlam "<<x<<endl;
            mp.clear();
            mn=v[x];
            ddfs(x,x);
          
            ddfss(x);
            v[x]=mn;
                if(mn==1e14) cout<<x<<' '<<v[x]<<endl;
           // ddfss(x);
           if(mn!=1e14){
            ans+=mn;
            //ans%=MOD;
           cerr<<mn<<' '<<mp[mn]<<endl;
            perm=(perm*mp[mn])%MOD;
           }
           else ans+=v[x];
        }
    }

    for(int i=1;i<=n;i++){
        if(!visss[i]) {
            cerr<<i<<endl;
            ans+=v[i];
           
        }
    }

    cout<<ans<<" "<<perm<<endl;
}
