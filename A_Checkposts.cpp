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
vector<ll>val(1e6,0);
vector<bool>vis(1e6,false);
stack<ll>st;
vector<vector<ll>>g(1e6);
vector<vector<ll>>trans(1e6);
unordered_map<ll,ll>mp;
 vector<ll>comp;
void dfs(ll u){
    vis[u]=true;
    for(auto x:g[u]){
        if(!vis[x]) dfs(x);
    }
    st.push(u);
}
void transdfs(ll u){
    vis[u]=true;
    mp[val[u]]++;
    comp.push_back(u);
    for(auto x:trans[u]){
        if(!vis[x]) transdfs(x);
    }

}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  ll n;
  cin>>n;
  itr(i,n){
    ll x;
    cin>>x;
    val[i+1]=x;
  }
  ll m;
  cin>>m;
  while(m--){
    ll u,v;cin>>u>>v;
    g[u].push_back(v);
  }
for(int i=1;i<=n;i++) if(!vis[i]) dfs(i);
fill(vis.begin(),vis.end(),false);
for(int i=1;i<=n;i++){
    for(auto x:g[i]){
        trans[x].push_back(i);
    }
}
ll ans=0,count=1;
while(st.size()){
    cerr<<st.top()<<' ';
    ll node=st.top(); st.pop();
    if(!vis[node]){
    mp.clear();
   comp.clear();
    transdfs(node);
    ll mn=INT_MAX;
    ll cnt=0;
    for(auto x:comp){
        if(val[x]<=mn) {
            mn=val[x];
            cnt=mp[mn];
        }

    }
    ans+=mn;
    count*=cnt;
    count%=MOD;
}
}
cout<<ans<<' '<<count<<endl;


  }
  

