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
 ll n;
 cin>>n;
 vc(v,n);
 itr(i,n) cin>>v[i];
 srt(v);
 ll lo=0,hi=n;
 ll ans=0;
 while(lo<=hi){
    ll mid=(lo+hi)/2;
    ll cnt=0;
    ll kom=v[mid-1];
    ll i=v[mid-1];
   while(cnt<mid&&i<n){
    i=upper_bound(v.begin(),v.end(),v[i])-v.begin();
    if(i<n) cnt++;
    else break;
   }
   if(cnt>=mid) {
    ans=mid;
    lo=mid+1;

   }
   else hi=mid-1;
    
    
 }
 
 cout<<ans<<endl;
 ll now=ans-1;
 ll i=ans;
 
 while(i<n||now>=0){
    ll cur=v[i];
    while(i<n&&v[i]==cur) { cout<<v[i]<<' ';
    i++;}
    if(now>=0) { cout<<v[now]<<' '; now--;}

 }
 
  }
  

