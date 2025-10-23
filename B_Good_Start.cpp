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
 ll w,h,a,b;
 cin>>w>>h>>a>>b;
 ll x1,y1,x2,y2;
 cin>>x1>>y1>>x2>>y2;
 if(x1>x2){
    swap(x1,x2);
    swap(y1,y2);
 }
 bool f=0;
 if(x1+a<=x2){
    if((y1+b)<=y2||y1>=(y2+b)) {
           ll df=abs(x1-x2)-a;
        ll dff=abs(y1-y2)-b;
        if(df%a==0||dff%b==0) yes;
        else no;
    }

    else {
        ll dif=x2-x1-a;
        if(dif%a) no;
        else yes;
    }
 }
 else {
   
        ll dif=0;
        dif=abs(y1-y2);
        dif-=b;
        if(dif%b) no;
        else yes;
    
 }

  }
  }
  
