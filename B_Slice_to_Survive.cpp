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
ll rec(ll n,ll m){
  ll ans=1;
 while(n>1||m>1){
   if(n>1){
    n=(n+1)/2;
    ans++;
   }
   if(m>1){
    m=(m+1)/2;
    ans++;
   }
 }
 return ans;

}

  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  tt{
ll n,m,a,b;
cin>>n>>m>>a>>b;
ll cnt;
ll x=n,y=m;
if(n==1&&m==1) cnt=0;
else cnt=1;
 ll aa,bb,cc,dd;
 aa=(a),bb=(b),cc=(n-a+1),dd=(m-b+1);
 

ll ans=INT_MAX;
ans=min(ans,rec(min(aa,cc),y));
ans=min(ans,rec(x,min(bb,dd)));



cout<<ans<<endl;
  }
  }
  
