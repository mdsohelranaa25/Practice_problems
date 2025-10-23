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
const int N=1e7;
vector<bool>isprime(N,false);
vector<ll>primes;

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
vector<ll>fibox(N,-1);
vector<ll>fiboy(N,-1);
//ll fiboy[N]={-1};
void fib(){
    fibox[0]=1;
    fibox[1]=0;
    for(int i=2;i<N;i++){
        fibox[i]=fibox[i-1]+fibox[i-2];
        if(fibox[i]>=1e6) break;
    }
    fiboy[0]=0;
    fiboy[1]=1;
     for(int i=2;i<N;i++){
        fiboy[i]=fiboy[i-1]+fiboy[i-2];
         if(fiboy[i]>=1e6) break;
    }

    
}


  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
   fib();

  tt{
 ll n,k;
 cin>>n>>k;

ll x=fibox[k-1];
ll y=fiboy[k-1];
if(k>1e5){
    cout<<0<<endl;
    continue;
}
if(x>n) {
    cout<<0<<endl;
    continue;
}
ll ans=0;
bool f=0;
//cerr<<x<<' '<<y<<endl;
for(int i=0;i<n;i++){
    if(f) break;
    ll rem=n-x*i;
    if(rem%y==0){
       // cerr<<rem<<' '<<rem/y<<' '<<i<<endl;
        if(rem/y<i) {
            f=1;
            break;
        }
        else ans++;
        
    }
}
cout<<ans<<endl;

  }
  }
  

