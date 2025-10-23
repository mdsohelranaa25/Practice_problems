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
ll ans=0;
vector<vector<ll>>g(1e6);
vector<bool>vis(1e6,false);
vector<ll>countt(1e6);
vector<ll>v;
ll n,k;
void dfs(ll u){
    vis[u]=true;
    bool f=0;
    for(auto x:g[u]){
        if(!vis[x]){
            if(v[x-1]>0||countt[u-1]>k){
                countt[x-1]=countt[u-1]+1;
                

            }
            else 
            countt[x-1]=0;
            f=1;
            dfs(x);
        }

    }
    cerr<<u<<' '<<f<<' '<<countt[u-1]<<endl;
    if(f==0&&countt[u-1]<=k){
        ans++;

    }
}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();

 cin>>n>>k;

 itr(i,n ){
    ll x;
    cin>>x;
    v.push_back(x);
 }
itr(i,n-1) {
    ll u,v;
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);

}
countt[0]=v[0];
dfs(1);
for(int i=0;i<n;i++) cerr<<countt[i]<<endl;
cout<<ans<<endl;

  }
  
  

