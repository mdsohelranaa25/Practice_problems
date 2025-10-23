#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1000;
int discovery_time[N],finish_time[N],current_time;
vector<ll>g[N];
bool vis[N];
void dfs(int u){
    vis[u]=true;
    current_time++;
    discovery_time[u]=current_time;
for(auto v:g[u]){
    if(!vis[v]){
        dfs(v);
    }

}
current_time++;
finish_time[u]=current_time;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin>>n;
    for(int i=1;i<=n;i++){
        int u,adjacent_node_count;
        cin>>u>>adjacent_node_count;
        while(adjacent_node_count--){
            int v;
            cin>>v;
            g[u].push_back(v);
            
        }
    }
    current_time=0;
    for( int u=1;u<=n;u++){
        if(!vis[u]){
            dfs(u);
        }
    }
    for(int u=1;u<=n;u++){
        cout<<u<<' '<<discovery_time[u]<<' '<<finish_time[u]<<'\n';
    }
   

}