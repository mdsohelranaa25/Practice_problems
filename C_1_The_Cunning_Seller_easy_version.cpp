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
ll total=0;
ll n,k;

ll expp(ll rem,ll x){
   ll ans=1,mul=3;
   while(x){
   if(x%2){
    ans*=mul;
    mul*=mul;
    
    x/=2;
   }
   else {
    mul*=mul;
    x/=2;
   }
}
return ans;


}
bool exp(ll rem,ll x){
   ll ans=1,mul=3;
   while(x){
   if(x%2){
    ans*=mul;
    mul*=mul;
    
    x/=2;
   }
   else {
    mul*=mul;
    x/=2;
   }
}
if(ans<=rem) return true;
else return false;


}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  tt{
    

 total=0;
 cin>>n;

 while(n){
     ll lo=0,hi=20;
     ll mx=1;
     while(lo<=hi){
        ll mid=(lo+hi)/2;
        
       bool f= exp(n,mid);
      // cerr<<f<<' '<<mid<<' '<<n<<endl;
       if(f){
        mx=mid;
        lo=mid+1;
       }
       else hi=mid-1;
       

     }
     ll per=expp(n,mx);
     ll cstper=per*3+(mx*(per/3));
     ll time=n/per;
     cstper=time*cstper;
     total+=cstper;
     per*=time;
     n-=per;
     

 }
 cout<<total<<endl;
 

  }
  }
  

