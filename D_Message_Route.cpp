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
vector<vector<ll>>g(1e6);
vector<bool>vis(1e6,false);

bool f=0;
vector<ll>par(1e5+5);
vector<ll>val(1e5+5,0);
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  ll n,m;
  cin>>n>>m;
  while(m--){
    ll x,y;
    cin>>x>>y;
    g[x].push_back(y);
    g[y].push_back(x);
  }
  val[1]=1;
  queue<ll>q;
  q.push(1);
  while(!q.empty()){
    ll u=q.front();
        q.pop();
    for(auto x:g[u]){
        if(!vis[x]){
            val[x]=val[u]+1;
            vis[x]=true;
            par[x]=u;
            q.push(x);
        }
    }
  }
  //cerr<<"YEE"<<endl;

  if(val[n]==0) cout<<"IMPOSSIBLE"<<endl;

  else {
    cout<<val[n]<<endl;
    vector<ll>vv;
    vv.push_back(n);
    while(par[n]!=1){
        vv.push_back(par[n]);
        n=par[n];
    }
    vv.push_back(1);
    reverse(vv.begin(),vv.end());
    itr(i,vv.size()) cout<<vv[i]<<' ';
    endd;
  }

  

  }
  

