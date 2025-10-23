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
const int N=1e6+5;
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
void sieve() {
    for(int i=0;i<=N;i++) isprime[i] = true; 
    isprime[0] = isprime[1] = false;

    for(int i=2;i*i<=N;i++) {
        if(isprime[i]) {
            for(long long j=1LL*i*i; j<=N; j+=i) {
                isprime[j] = false;
            }
        }
    }

    for(int i=2;i<=N;i++) {
        if(isprime[i]) pb(primes,i);
    }
}


  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
     sieve();
   // divis();
  
 ll a,b,c;
 cin>>a>>b>>c;
 ll mx=-1;
 bool f=0;
 ll now=b;

 ll ind=upper_bound(primes.begin(),primes.end(),now)-primes.begin();
ind--;
// cerr<<ind<<' '<<primes.size()<<endl;
 //cerr<<primes[ind]<<endl;
 if(ind+1<c) cout<<-1<<endl;
else if(primes[ind]>b) cout<<-1<<endl;

 else{
  ll mx=-1;
  ind-=(c-1);
  ///cerr<<ind<<' ';
  if(primes[ind]<a) cout<<-1<<endl;
  else {
mx=b-primes[ind]+1;
ind--;
while(ind>=0&&primes[ind]>=a){
  ll now=primes[ind+c]-primes[ind];
  mx=max(mx,now);
  ind--;
}


ll nn=-1;
if(a==1) nn=primes[c-1];
//cerr<<nn<<' '<<primes[2]<<endl;
if(ind>=0&&primes[ind]<a){
  ll now=primes[ind+c]-a+1;
  mx=max(mx,now);
}

mx=max(mx,nn);
cout<<mx<<endl;
  }
 }
 


  }
  
  

