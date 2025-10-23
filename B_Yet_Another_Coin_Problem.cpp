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
 ll a=1,b=3,c=6,d=10,e=15;
 ll cnt=0;
 cnt+=n/e;
 n%=e;
 if(n==14) cnt+=3;
 else if(n<14&&n>6) {
    if(n==10) cnt+=1;
    else if(n>=7&&n!=8) cnt+=2;
    else if(n==8){
        cnt=max(cnt-1,0LL);
        cnt+=3;
    }
    
 }
 else if(n==5){
    if(cnt>0) cnt++;
    else cnt+=3;
 }
 else if(n==6||n==1||n==3||n==10) cnt+=1;
 else if(n==4||n==2) cnt+=2;
 cout<<cnt<<endl;
//  cerr<<cnt<<' '<<n<<endl;
//  cnt+=n/d;
//  n%=d;
//  cerr<<cnt<<' '<<n<<endl;
//  cnt+=n/c;
//  n%=c;
//  cerr<<cnt<<' '<<n<<endl;
//  cnt+=n/b;
//  n%=b;
//  cerr<<cnt<<' '<<n<<endl;
//  cnt+=n/a;
//  n%=a;
 //cout<<cnt<<endl;

  }
  }
  

