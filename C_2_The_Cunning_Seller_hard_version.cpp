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
ll cnt=0;
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
    
cnt=0;
 total=0;
 cin>>n>>k;
vector<pair<ll,ll>>pr;
vector<ll>prr(25);
 while(n){
     ll lo=0,hi=20;
     ll mx=1;
     while(lo<=hi){
        ll mid=(lo+hi)/2;

       bool f= exp(n,mid);
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
 pr.push_back({mx,time});
prr[mx]=time;
     per*=time;
     cnt+=time;
     n-=per;
     

 }
//for(int i=0;i<8;i++) cerr<<i<<' '<<prr[i]<<endl;
 if(cnt>k) cout<<-1<<endl;
 else 
{
  k-=cnt;
for(int i=20-1;i>0;i--){
//  cerr<<i<<' '<<k+prr[i]<<' '<<prr[i]<<endl;
   if(prr[i]*3<=(k+prr[i])){

    k-=(prr[i]*3-prr[i]);
    prr[i-1]+=3*prr[i];
    prr[i]=0;
  }

  
  else{
    ll parbo=k/2;
    prr[i]-=parbo;
    //cerr<<"prr[i-1]"<<' '<<parbo<<' '<<prr[i-1]<<' '<<3*parbo<<endl;
    prr[i-1]+=3*parbo;
    k-=2*parbo;

  }
  //cerr<<k<<endl;

}
total=0;
for(int i=0;i<20;i++){
  if(prr[i]){
  ll per=expp(n,i);
  //cerr<<"per "<<per<<' '<<prr[i]<<endl;
  ll cstper=per*3+(i*(per/3));
  cstper*=prr[i];
  total+=cstper;
  }
}
cout<<total<<endl;


}
 

  }
  }
  

