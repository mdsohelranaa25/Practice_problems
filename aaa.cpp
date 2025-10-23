//Kosaraju Algorithm
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define itr(i,n) for(int i=0;i<n;i++)
#define srt(v) sort(v.begin(),v.end())

unordered_map<ll,ll> mp;
vector<ll> val;

void dfs(ll node, vector<ll> adj[], vector<bool> &vis, stack<ll> &st) {
    vis[node] = true;
    for(auto v : adj[node]) {
        if(!vis[v]) dfs(v, adj, vis, st);
    }
    st.push(node);
}

void dfsTranspose(ll node, vector<ll> transpose[], vector<bool> &vis, vector<ll> &component) {
    vis[node] = true;
    //mp[val[node]]++;
    component.push_back(node);
    for(auto v : transpose[node]) {
        if(!vis[v]) dfsTranspose(v, transpose, vis, component);
    }
}

int main() {
    ll n;
    cin >> n;
    ll m,k;
    cin>>m>>k;
    vector<ll> adj[n+5];
  
    stack<ll> st;
    vector<bool> vis(n+5,false);
   
    while(m--) {
        ll a,b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    for(ll i=1; i<=n; i++)
        if(!vis[i]) dfs(i, adj, vis, st);
    vector<ll> transpose[n+5];
    for(ll i=1; i<=n; i++)
        for(ll v : adj[i])
            transpose[v].push_back(i);
   vector<ll>ans;
    ll way = 1;
    fill(vis.begin(), vis.end(), false);
    while(!st.empty()) {
        ll node = st.top(); st.pop();
        if(!vis[node]) {
            vector<ll> component;
          
            dfsTranspose(node, transpose, vis, component);
           ans.push_back(component.size());
        }
    }
    sort(ans.rbegin(),ans.rend());
ll cnt=0;
itr(i,k) cnt+=ans[i];
cout<<cnt<<endl;
    
}
