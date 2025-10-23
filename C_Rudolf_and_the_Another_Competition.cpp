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
 
ll n,m,time;
cin>>n>>m>>time;
vector<vector<ll>>v(n,vector<ll>(m));
itr(i,n){
    itr(j,m) cin>>v[i][j];
}
vector<pair<ll,ll>>ans;
for(int i=0;i<n;i++){
    ll cnt=0;
    ll count=0;
    srt(v[i]);
    ll tm=0;
    for(int j=0;j<m;j++){
        if(tm+v[i][j]<=time){
            tm+=v[i][j];
            cnt+=tm;
            count++;
        }
        else break;
    }
    ans.push_back({count,cnt});
    
}
ll pos=1;
ll x=ans[0].f;
ll y=ans[0].sc;
//cerr<<x<<' '<<y<<endl;
for(int i=1;i<n;i++){
    if(ans[i].f>x) pos++;
    else if(ans[i].f==x&&ans[i].sc<y) pos++;
}
cout<<pos<<endl;
  }
  }
  

