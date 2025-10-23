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
 
ll k,a,b,x,y;
cin>>k>>a>>b>>x>>y;

    ll ans=0;
    ll anss=0;
    ll kk=k;
    
    ll cnt=0;
    
    cnt=k-a;
    cnt/=x;
   // cerr<<cnt<<' ';
    cnt=max(0LL,cnt);
    if(k>=a) cnt++;
  ///  cerr<<cnt<<' ';
   ans=max(ans,cnt);
    k-=cnt*x;
    if(k>=b){
        cnt=k-b;
        cnt=max(0LL,cnt);
        cnt/=y;
      //  cerr<<cnt<<' ';
        if(k>=b) cnt++;
     //   cerr<<cnt<<' '<<endl;
      ans+=cnt;
    }
   // cout<<ans<<endl;

    k=kk;
    cnt=k-b;
     cnt=max(0LL,cnt);
    cnt/=y;
   //  cerr<<cnt<<' ';
    if(k>=b) cnt++;
    // cerr<<cnt<<' ';
    anss=max(anss,cnt);
    k-=cnt*y;

    if(k>=a) {
        cnt=k-a;
         cnt=max(0LL,cnt);
        cnt/=x;
      //   cerr<<cnt<<' ';
       if(k>=a) cnt++;
      //  cerr<<cnt<<' '<<endl;
        if(cnt>=0) anss+=cnt;
    }
    //cout<<anss<<endl;


    cout<<max(ans,anss)<<endl;


  }
  }
  

