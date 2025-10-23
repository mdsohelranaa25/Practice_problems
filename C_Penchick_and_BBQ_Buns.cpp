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
vector<ll>sqr;
void sqq(){
    for(int i=2;i*i<N;i++){
        sqr.push_back(i*i);
    }
}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  // sqq();
  tt{
    ll n;
    cin>>n;
    if(n%2) {
     
        if(n<27) cout<<-1<<endl;
        else{
          vc(v,n+1);
          v[1]=1;
          v[10]=1;
          v[26]=1;
          v[11]=2;
          v[27]=2;
          ll cur=3;
          for(int i=1;i<=n;i++){
            if(v[i]==0){
              v[i]=cur;
              v[i+1]=cur;
              cur++;
              i++;
            }
          }
          for(int i=1;i<=n;i++) cout<<v[i]<<' ';
          endd;
        }
        
    }
    else{
        ll cur=1;
       ll i=1;
       while(i<=n){
        cout<<cur<<' '<<cur<<' ';
        cur++;
        i+=2;
       }
       cout<<endl;
  
    }
  }
  }
  

