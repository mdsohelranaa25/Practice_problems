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

  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  tt{
 ll n,m,mm;
 cin>>n>>m>>mm;
 vector<vector<ll>> mp(n+5, vector<ll>(n+5,0));
vector<vector<ll>>mpp(n+5,vector<ll>(n+5,0));
 vector<vector<ll>>g(n+5),gg(n+5);
 ll op=m;
 while(m--){
    ll x,y;
    cin>>x>>y;
    mp[min(x,y)][max(x,y)]=1;

    g[min(x,y)].push_back(max(x,y));
    //cerr<<min(x,y)<<' '<<g[(min(x,y))].size()<<endl;
    
 }
 while(mm--){
    ll x,y;
    cin>>x>>y;
     mpp[min(x,y)][max(x,y)]=1;
    gg[min(x,y)].push_back(max(x,y));
   //cerr<<min(x,y)<<' '<<gg[(min(x,y))].size()<<endl;
 }
ll cnt=0;
 
  

  for(int i=1;i<=n;i++){
   // cerr<<i<<' '<<op<<endl;
//cerr<<g[i].size()<<' '<<gg[i].size()<<endl;
    // for(auto x:g[i]) {
    //    // cerr<<i<<' '<<x<< ' '<<mp[i][x]<<' '<<mpp[i][x]<<endl;
    //     if(!(mp[i][x]&&mpp[i][x])) cnt++;


    // }
    for(auto x:gg[i]){
        cerr<<i<<' '<<x<<' '<<op<<endl;
        // cerr<<i<<' '<<x<< ' '<<mp[i][x]<<' '<<mpp[i][x]<<endl;
       // if(!(mp[i][x]&&mpp[i][x])) cnt++;
       if(mp[i][x]) op--;
       else if(mp[i][x]==0) op++;
    }
  }
  cout<<op<<endl;
//  cout<<cnt<<endl;

}
  }
  

