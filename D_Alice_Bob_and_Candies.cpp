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
vc(v,n);
ll move=0;
itr(i,n) cin>>v[i];
ll i=0,j=n-1;
ll purbe=0;
ll alice=0,bob=0;
ll count=0;
while(i<=j){
    count=0;
    bool f=0,ff=0;
    while(i<=j){
        if(f==0){
            f=1;
            move++;
        }
      //   cerr<<"a a "<<move<<' '<<count<< ' '<<count+v[i]<<' '<<i<<endl;
    count+=v[i];
     i++;
    if(count>purbe){
       
        alice+=count;
        purbe=count;
        count=0;
        break;


    }
     else if(j<i) alice+=count;
    

}
count=0;
while(i<=j){
     if(ff==0){
        ff=1;
        move++;
     }
    //cerr<<"b B "<<count<< ' '<<count+v[j]<<' '<<j<<endl;
    count+=v[j];
    j--;
    if(count>purbe){
       
         bob+=count;
         purbe=count;
         count=0;
         break;
    }
    else if(j<i) bob+=count;

    
}

    

}
cout<<move<<' '<<alice<<' '<<bob<<endl;
  }
  }
  

