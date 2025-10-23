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
vector<bool>vis(1e6,false);
ll n,m;
vector<ll>facto(1e6);
void prec() {
    facto[0] = 1;
    for (int i = 1; i < 1e5; i++) {
        facto[i] = (facto[i - 1] * i) % MOD;
    }
}

ll dfs(int u){
    vis[u]=true;
    ll cnt=0;
    ll x=1;
    for(auto v:g[u]){

        if(!vis[v]){
            cnt++;
            x*=dfs(v);
            x%=MOD;
            
            
        }
    }
    cnt=facto[cnt];
            cnt%=MOD;
            cnt*=x;
            cnt%=MOD;

            
    return cnt;
}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
   prec();
  tt{
 map<ll,ll>mp;

cin>>n>>m;
bool f=0;
itr(i,max(n,m)+5){
vis[i]=false;
g[i].clear();
}
while(m--){
    ll x,y;
    cin>>x>>y;
    mp[x]++;
    mp[y]++;
    if(mp[x]>1&&mp[y]>1){
        f=1;
    }
    g[x].push_back(y);
    g[y].push_back(x);
    
}
if(f) {
    cout<<0<<endl;
    continue;
}
ll ans=dfs(1);
ans*=2;
cout<<ans%MOD<<endl;

  }
  }
  

