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
ll n,m;
ll dx[]={-1,1,0,0};
ll dy[]={0,0,-1,1};
 vector<string>v;
 bool isvalid(int x,int y){
    return (x>=0&&x<=n-1&&y>=0&&y<=m);
 }
void dfs(ll i,ll j,char col){
    v[i][j]=col;
    for(int m=0;m<4;m++){
        ll x=i+dx[m];
        ll y=j+dy[m];
        if(isvalid(x,y)&&v[x][y]=='.') dfs(x,y,col=='B'?'W':'B');
    }

}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  
 
 cin>>n>>m;

 //vector<vector<char>>v(n,vector<char>(m));
 itr(i,n){
   string s;
   cin>>s;
   v.push_back(s);
 }
 itr(i,n){
    itr(j,m){
        if(v[i][j]=='.') {
            dfs(i,j,'B');
        }
    }
 }
 itr(i,n){
    itr(j,m) cout<<v[i][j];
    endd;
 }
 endd;

  
  }
  

