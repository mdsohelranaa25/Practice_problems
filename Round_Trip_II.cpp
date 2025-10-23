

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

vector<vector<ll>> g(1e6+5);
vector<int> vis(1e6+6,0); 
vector<ll> par(1e6+5,-1);
vector<ll> cycle;
bool printed=0;

void dfs(ll u){
    if(printed) return;
    vis[u]=1; 
    for(auto x:g[u]){
        if(printed) return;
        if(vis[x]==0){
            par[x]=u;
            dfs(x);
        }
        else if(vis[x]==1 && !printed){
            cycle.clear();
            ll cur=u;
            cycle.push_back(x);
            while(cur!=x){
                cycle.push_back(cur);
                cur=par[cur];
            }
            cycle.push_back(x);
            reverse(cycle.begin(),cycle.end());
            cout<<cycle.size()<<endl;
            for(auto v:cycle) cout<<v<<' ';
            cout<<endl;
            printed=1;
            return;
        }
    }
    vis[u]=2; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        g[i].clear();
        vis[i]=0;
        par[i]=-1;
    }
    cycle.clear();
    printed=0;

    while(m--){
        ll x,y;
        cin>>x>>y;
        g[x].push_back(y);
    }

    for(int i=1;i<=n;i++){
        if(!vis[i] && !printed) dfs(i);
    }

    if(!printed) cout<<"IMPOSSIBLE"<<endl;
}
