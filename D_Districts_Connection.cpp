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
vector<vector<ll>>g(5009);
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  tt{
 ll n;
 cin>>n;
 for(int i=0;i<n+4;i++) g[i].clear();
 vc(v,n);
 itr(i,n) cin>>v[i];
 ll cnt=0;
 map<ll,ll>mp;
 ll mx=0;
 itr(i,n){
  mp[v[i]]++;
  mx=max(mx,mp[v[i]]);

 }
 vector<bool>ff(n+3,false);
if(mx==n) no;
 else{
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(i==j)continue;
    
      if(v[i]!=v[j]&&(ff[i]==0||ff[j]==0)){
        
        cnt++;
        cerr<<ff[i]<<' '<<ff[j]<<endl;
        if(ff[i]||ff[j]){
            ll x,y;
            if(ff[i]) {
                x=i,y=j;
            }
            else x=j,y=i;
            g[x+1].push_back(y+1);
        }
        else g[i+1].push_back(j+1);

        ff[j]=1;
         ff[i]=1;
        
      }

     
    }
  }
  yes;
 vector<bool> f(n+4, false);
  for(int i=1;i<=n;i++){
  // if(f[i]) continue;
    for(auto x:g[i]){
       // if(i<x)
      cout<<i<<' '<<x<<endl;
      f[i]=1;
     // f[x]=1;
      }
    

  }


 }
 

  }
  }
  

