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
vector<bool>isprime(N,false);
vector<ll>primes;
ll cnt_div[N]={0};
vector<ll>divisor[N];
void divis(){
for(int i=1;i<=N;i++){
for(int j=i;j<=N;j+=i){
cnt_div[j]++;
divisor[j].push_back(i);
//if(i/j!=i) divisor[j].push_back(i/j);
}
}

}
void sieve(){
isprime[1]=false;
isprime[2]=true;
pb(primes,2);
for(int i=3;i*i<=N;i+=2) isprime[i]=true;
for(int i=3;i<=N;i+=2){
if(isprime[i]){
pb(primes,i);
for(int j=i*i;j<=N;j+=i){
isprime[j]=false;
}
}
}
}

vector<vector<ll>>g(1e6);
vector<ll>vis(1e6,false);
ll n;
ll dfscall=0;
ll ans=0;
void dfs(ll u){
    vis[u]=true;
    ll cc=0;
   // cerr<<u<<' '<<g[u].size()<<' '<<ans<<endl;
    if(g[u].size()>2) ans+=g[u].size()-2;
    for(auto v:g[u]){
        if(!vis[v]) {
           cc++;
           //cerr<<u<<' ';
            dfs(v);
        }
        
    }
    if(cc) dfscall++;


}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  tt{
 ans=0;
    cin>>n;
    dfscall=0;
    itr(i,n+5) {
        g[i].clear();
        vis[i]=false;
    }
    map<ll,ll>mp;
    ll ind=-1;
    itr(i,n-1){
        ll x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
        mp[x]++;
        mp[y]++;


    }
    for(int i=1;i<=n;i++){
        if(mp[i]==1) ind=i;
    }
ll mx=0;
map<ll,ll>lf;
for(int i=1;i<=n;i++){
    
    if(mp[i]==1){
        lf[i]=1;
        
    }
}
   

dfs(ind);



if(dfscall>1)
ans++;
ll mn=ans;
ans++;
for(int i=1;i<=n;i++){
  ll cnt=0;
  for(auto x:g[i]){
  //  if(i==13) cerr<<endl<<g[x].size()<<' '<<x<<endl;
    if(g[x].size()==1) cnt++;

  }
  //if(i==13) //cerr<<"cnt "<<cnt<<' '<<ans<<endl;
  mn=min(mn,ans-cnt);
}
cout<<mn<<endl;

  }
  }
  
