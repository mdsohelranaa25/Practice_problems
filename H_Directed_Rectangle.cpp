 
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
   ll n,m;
#define endl '\n'
const int N=1e6+1;
ll cnt_div[N]={0};
bool dfs(ll u,ll tar){
    cerr<<u<<' '<<tar<<endl;
    vis[u]=true;
    bool f=0;
    
    for(auto x:g[u]) {
        if(tar==x) return true;
        if(!vis[x]) f|=dfs(x,tar);

    }
    return f;
}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  
string s;
ll m=4;
  while(m--){
    char u,v;
    cin>>u>>s>>v;
    cerr<<s[0]<<endl;
    if(s[0]=='-')
    
    g[u-'A'].push_back(v-'A');
    else 
    g[v-'A'].push_back(u-'A');
  }
 ll n;
 cin>>n;
 while(n--){
for(int i=0;i<5;i++) vis[i]=false;
char x,y;
cin>>x>>y;

if(dfs(x-'A',y-'A')) yes;

else no;
cerr<<endl;
 }

  }
  