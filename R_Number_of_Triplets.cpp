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
 vector<pair<ll,ll>>pr;
 itr(i,n){
    ll x,y;
    cin>>x>>y;
    pr.push_back({x,y});
 }
 srt(pr);
 ll ans=0;
 ll a,b,c,d;
 itr(i,n){
    a=pr[i].f;
    b=pr[i].sc;
    for(int j=i+1;j<n;j++){
        c=pr[j].f;
        
        d=pr[j].sc;
        ll e=c+(c-a);
        ll f=(d+(d-b));
        ll p=lower_bound(pr.begin(),pr.end(),make_pair(e,f))-pr.begin();
        ll q=upper_bound(pr.begin(),pr.end(),make_pair(e,f))-pr.begin();
        ans+=q-p;
    }
    
 }
 cout<<ans<<endl;
  }
  

