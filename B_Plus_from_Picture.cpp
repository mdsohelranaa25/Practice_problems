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

vector<vector<bool>> vis(1e4, vector<bool>(1e4, false));

vector<vector<char>>s(1000,vector<char>(1000));
ll n,m;
ll ans=0;
bool f=0;
int ff=0;
void dfs(ll i,ll j){
    ll cnt=0;
    vis[i][j]=true;
    ll cntt=0,cntt2=0,cntt3=0;
    ll cntt1=0;
    if(i+1<n&&s[i+1][j]=='*') { cntt1++;
    if(!vis[i+1][j]) dfs(i+1,j);}
    if(i-1>=0&&s[i-1][j]=='*') { cntt++;
    if(!vis[i-1][j])  dfs(i-1,j);}
    if(j+1<m&&s[i][j+1]=='*'){
        cntt2++;
        if(!vis[i][j+1])  dfs(i,j+1);
    }
    if(j-1>=0&&s[i][j-1]=='*'){
        cntt3++;
       if(!vis[i][j-1]) dfs(i,j-1);
    }
    cnt=cntt+cntt1+cntt2+cntt3;

    if(cnt==4){
        f=1;
        ff++;
    }
    else if(cnt==3) ff++;
    else if(cnt==2){
        if(cntt!=cntt1) {ff++;
           // cerr<<ff<<' '<<i<<' '<<j<<endl;
           // cerr<<cntt<<' '<<cntt1<<endl;
        }

        
    }
    

}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
 

cin>>n>>m;
    itr(i,n){
        itr(j,m){
           cin>>s[i][j];
         
        }
    }
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        //  cout<<s[i][j];
        if(s[i][j]=='*'&&!vis[i][j]) {
            ans++;
            dfs(i,j);
        }
    }
   // endd;
}
//cerr<<f<<' '<<ff<<' '<<ans<<endl;
if(f==1&&ff==1&&ans==1) yes;
else no;


    

  }
  

