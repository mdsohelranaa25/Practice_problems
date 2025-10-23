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
 ll l,n;
 cin>>l>>n;
 
 vc(v,n+2);
 ll now=n;
 ll index = (ll)log2(n);
 //cerr<<index<<endl;
 while(now>=0){
    bitset<55>k=now;
    ll cur=0;
    ll lst=cur;
    for(ll i=0;i<=index;i++){
        if(k[i]==0) cur+=(1LL<<i);
        if(cur>n) break;
        else
        if(v[cur]==0) lst=cur;
    }
    v[lst]=now;


    now--;
 }
 ll ans=0;
 for(int i=0;i<=n;i++){
    ans+=(v[i]|i);

 }
 cout<<ans<<endl;
 for(int i=0;i<=n;i++) cout<<v[i]<<' ';
 endd;


  }
  }
  

