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
 
ll l1,b1,l2,b2,l3,b3;
cin>>l1>>b1>>l2>>b2>>l3>>b3;
bool f=0;
if(b1==b2&&b2==b3&&b1==(l1+l2+l3)) f=1;
else if(l1==l2&&l2==l3&&l1==(b1+b2+b3)) f=1;
else if(l1==l3&&(b1+b3==b2)&&(l1+l2==b2)) f=1;
else if(l1==l2&&(b1+b2==b3)&&(l1+l3==b3)) f=1;
else if(l2==l3&&(b2+b3==b1)&&(l2+l1==b1)) f=1;
else if(b1==b2&&(l1+l2==l3)&&(l1+l2==(b1+b3))) f=1;
else if(b3==b2&&(l3+l2==l1)&&(l3+l2==(b2+b1))) f=1;
else if(b1==b3&&(l1+l3==l2)&&(l1+l3==(b3+b2))) f=1;
if(f) yes;
else no;

  }
  }
  

