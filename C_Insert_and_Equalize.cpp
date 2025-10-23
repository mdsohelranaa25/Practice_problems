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
 
ll n;
cin>>n;
vc(v,n);
itr(i,n) cin>>v[i];
vector<ll>last;
srt(v);
ll mx=v[n-1];
itr(i,n){
    last.push_back(mx-v[i]);
}
ll gc=last[0];
itr(i,last.size()) gc=__gcd(gc,last[i]);
ll ans=0;
if(gc==0){ cout<<n<<endl;
continue;}
vector<ll>final;
itr(i,last.size()){
    ans+=last[i]/gc;
    final.push_back(last[i]/gc);
}
srt(final);
ll mn=0;
for(int i=1;i<final.size();i++){
    if(final[i]-final[i-1]>1) {mn=final[i-1]+1;
    break;}
}
if(mn==0) ans+=n;
else ans+=mn;
cout<<ans<<endl;


  }
  }
  

