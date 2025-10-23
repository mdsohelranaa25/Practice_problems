		/*
			//! In The Name Of Allah
				
			
				
				
		*/                                                                                                                                                  
  #include<bits/stdc++.h>
  using namespace std;
  #define tt int t;cin>>t;while(t--)
  #define itr(i,a) for(int i=0;i<a;i++)
#define ittr(i,bg,a) for(int i=bg;i<a;i++)
  #define yes cout<<"Yes"<<endl
  #define no cout<<"No"<<endl
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
 ll a,b,c,d;
 cin>>a>>b>>c>>d;
 vc(v,n);
 itr(i,n) cin>>v[i];

 double fi=0,se=0;
 rsrt(v);
fi=v[0];
ll i=1;
while(i<n){
    while(i<n&&se<=fi){
        se+=(double)v[i];
        i++;
    }
    if(i<n){
        fi+=(double)v[i];
        i++;
    }

}
ll hh=(fi+se)-v[0];
ll mx=v[0];
double dd=(abs(a-c)*abs(a-c)+abs(b-d)*abs(b-d));
 dd=sqrt(dd);
 if(mx>(hh+dd)||(fi+se)<dd) no;
 
// cerr<<dd<<' '<<abs(fi-se)<<endl;
//if(dd>=abs(fi-se)&&(fi+se>=dd)) yes;
else yes;


  }
  }
  

