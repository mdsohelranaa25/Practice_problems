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
  #define ll int 
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
 vector<vector<int>>g(1e6);
vector<ll>dp(1e6,0);
vector<ll>v;

ll dfs(int u){
    ll mn=INT_MAX;
for(auto v:g[u]){
    mn=min(mn,dfs(v));
    
}
//cerr<<u<<' '<<v[u]<<' '<<mn<<endl;
if(mn==INT_MAX) return v[u];
else {
  if(mn>v[u]) return v[u]=(v[u]+mn)/2;
  else return v[u]=mn;
}

}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  
  tt{
 
    ll n;
    cin>>n;
    v.clear();
    v.push_back(0);
    for(int i=0;i<=n+5;i++) g[i].clear();
     for(int i=1;i<=n;i++) {
        ll x;
        cin>>x;
        v.push_back(x);
     }
    int mn=INT_MAX;
    for(int i=2;i<=n;i++){
        ll x;
        cin>>x;
        g[x].push_back(i);
    }
    for(auto v:g[1]){
        mn=min(mn,dfs(v));
    }
    cout<<v[1]+mn<<endl;

  }
  }
  

