                                                                                                                                                
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
   ll ttt=0;
  tt{
    ttt++;
 ll n,x,y;
 cin>>n>>x>>y;
 vc(v,x);
 itr(i,x) cin>>v[i];
 srt(v);
 ll ans=0;
 ll i=2;

    ll df=v[1]-v[0];
 
        if(df%2==0){
            if(df/2-1<=y) {
                ans+=df-1;
                y-=df/2-1;
            }
            else {
                ans+=y*2;
                y=0;
            }
        }
        else {
            ll lo=min(df/2,y);
            if(df/2<=y) {ans+=lo*2;
                //if(lo) ans++;
            }
          
            else {
                ans+=lo*2;
            }
            y-=lo;
           
        }
   // }

//cerr<<ans<<endl;
 for(i;i<x;i++){

     df=v[i]-v[i-1];
    ll tot=df;
  
    if(df%2==0){
        if((df/2)-1<=y){
            ans+=df;
            y-=((df/2)-1);
        }
        else {
            ans+=y*2+1;
            y=0;
        }
    }
  
    else{
        ans++;
      ll lo=min(df/2,y);
      ans+=lo*2;
      y-=lo;
   
    }


  
 }
 //cerr<<ans<<endl;
  df = (v[0] - v[x-1] + n) % n;


 if(df%2==0){


        if((df/2)-1<=y){
            ans+=df-1;
            y-=(df/2)-1;
        }
        else {
            ans+=y*2;
            y=0;
        }
    }
  
    else{
        //ans++;
      ll lo=min(df/2,y);
      ans+=lo*2;
      y-=lo;
   
    }
    
  cout<<ans<<endl;

  }
  }
  

