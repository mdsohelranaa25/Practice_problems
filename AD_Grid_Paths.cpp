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
vector<vector<char>>v;
ll n;
ll dp[1004][1004];
ll rec(int i,int j){
    //cerr<<i<<' '<<j<<endl;
   // cerr<<v[i][j]<<endl;
    if(v[i][j]=='*') return 0;
    
if(i==n-1&&j==n-1) return v[i][j] == '*' ? 0 : 1;
ll r1=0,r2=0;
ll &ret=dp[i][j];
if(ret!=-1) return ret;
if(i<n-1&&v[i+1][j]!='*') r1+=rec(i+1,j);
r1%=MOD;
if(j<n-1&&v[i][j+1]!='*') r2=rec(i,j+1);
r2%=MOD;
ret=r1+r2;
ret%=MOD;
//cerr<<i<<' '<<ret<<' '<<r1<<' '<<r2<<endl;
return ret;

}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
 cin >> n;
    v.resize(n);
    itr(i,n){
        string s;
        cin >> s;
        itr(j,n) v[i].push_back(s[j]);
    }
memset(dp, -1, sizeof(dp));
    cout << rec(0, 0) << endl;
  }
  

