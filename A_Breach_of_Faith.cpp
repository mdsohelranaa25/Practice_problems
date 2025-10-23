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
 n*=2;
 map<ll,ll>mp;
 vc(v,n);
 ll sum=0;
 itr(i,n) {cin>>v[i];
    mp[v[i]]++;
    sum+=v[i];
 }
 rsrt(v);
 ll i=0,j=n/2;
 ll first=0,sec=0;
if(n==2){
cout<<v[0]<<' '<<v[0]+v[1]<<' '<<v[1]<<endl;
continue;
}
else{
vector<ll>final(n+4);
for(i=0;i<=n/2;i++){
 // cerr<<2*i+1<<' '<<v[i]<<endl;
  final[2*i+1]=v[i];

}

j=2;
for(i=n/2+1;i<n;i++){
  //cerr<<j<<' '<<v[i]<<endl;
  final[j]=v[i];
  j+=2;
}
ll ans=final[1]+final[n+1];
for(int i=2;i<n;i++){
  ans+=final[i+1]-final[i];
  i++;

}
final[n]=ans;
for(int i=1;i<=n+1;i++) cout<<final[i]<<' ';
endd;
}
  }
  }
  

