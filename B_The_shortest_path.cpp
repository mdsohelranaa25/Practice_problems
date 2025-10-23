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
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();

 ll n,m;
 cin>>n>>m;
ll a,b;
cin>>a>>b;
vector<vector<ll>>g(n+5);
itr(i,m){
    ll u,v;
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
}

vector<ll>final;
vector<ll>dis(n+5,-1);
queue<ll>q;
q.push(a);
dis[a]=0;
vector<ll>par(n+5);
while(!q.empty()){
    ll u=q.front();
    q.pop();
    for(auto x:g[u]){

        if(dis[x]==-1){
            q.push(x);
            dis[x]=dis[u]+1;
            par[x]=u;
        }
    }
}
for(int i=1;i<=n;i++) cerr<<dis[i]<<' ';
if(dis[b]==-1) cout<<-1<<endl;
else{
    cout<<dis[b]<<endl;
    final.push_back(b);
    ll x=b;
    //cout<<a<<' ';
    while(x!=a){
        //cout<<x<<' ';
        final.push_back(par[x]);
        x=par[x];

    }
    for(int i=final.size()-1;i>=0;i--) cout<<final[i]<<' ';
   endd;
}



  }
  
  

