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
const int N=1e5+5;
vector<ll>fact_ar(N,1),modinv(N,1);
ll power(ll x,ll mod){
    if(mod<0) return 0;
    ll ans=1;
    while(mod){
        if(mod%2==0){
            x=(x*x)%MOD;
            mod/=2;
        }
        else{
            ans=(ans*x)%MOD;
            mod--;
        }
    }
    return ans;
}
void precomp(){
    fact_ar[0]=1;
    for(int i=1;i<N;i++){
        fact_ar[i]=(fact_ar[i-1]*i)%MOD;
        modinv[i]=power(fact_ar[i],MOD-2);

    }
}

ll ncr(ll n,ll r){
    if(n<0||r<0||r>n) return 0;
    ll numo=fact_ar[n];
    ll ans=((fact_ar[n]*modinv[r])%MOD*modinv[n-r])%MOD;
    return ans;
}
vector<vector<ll>>g(N);
vector<ll>vis(N,false);
ll dfs(ll u){
   
    vis[u]=true;
    ll anss=0;
    for(auto x:g[u]){
        if(!vis[x]) anss+=dfs(x);
    }
    return 1+anss;

}
void solve()
{

  ll n,m;
  cin>>n>>m;
  ll cnt=0;
  ll mm=m;
  vector<ll>ans;
  while(m--){
    ll a,b;
    cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  for(int i=1;i<=n;i++){
    if(!vis[i]){
      ll cnt=0;
     cnt= dfs(i);
      ans.push_back(cnt);
    }
  }
  ll graphe=mm+cnt;
  ll rem=n-graphe;
  ll fin=1;
ll tot=n;
srt(ans);
for(auto x:ans){

    //dhurrrballll
    ll now=ncr(tot,x);
    now%=MOD;
    fin*=now;
    fin%=MOD;
  //  cerr<<tot<<' '<<x<<' '<<now<<endl;
    tot-=x;
}
cout<<fin<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  precomp();
  //tt
  {
    solve();
  }
}
