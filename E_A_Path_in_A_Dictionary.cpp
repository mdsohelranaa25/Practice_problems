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
vector<vector<ll>>g(1e5+4);
map<ll,ll>mp;
vector<ll>ans;
 ll n,m,fi,la;
vector<bool>vis(1e5+5);
bool bfs(ll u){
    vis[u]=true;
   queue<ll>q;
   mp[u]=1;
   q.push(u);
   while(!q.empty()){
    ll v=q.front();
    q.pop();
    for(auto x:g[v]){
        if(!vis[x]){
            mp[x]+=

        }
    }

   }

}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  tt{

 cin>>n>>m>>fi>>la;
itr(i,n+4){
    vis[i]=false;
    g[i].clear();
}
itr(i,m){
    ll x,y;
    cin>>x>>y;
    g[x].push_back(y);
    g[y].push_back(x);
}

bool f=bfs(fi);

  }
  }
  

