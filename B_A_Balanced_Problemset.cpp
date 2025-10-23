                                                                                                                                               
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
  // const int N=1e8+1;
  // vector<bool>isprime(N,false);
  // vector<ll>primes;
  // ll cnt_div[N]={0};
  // vector<ll>divisor[N];
  // void divis(){
  // for(int i=1;i<=N;i++){
  // for(int j=i;j<=N;j+=i){
  // cnt_div[j]++;
  // divisor[j].push_back(i);
  // //if(i/j!=i) divisor[j].push_back(i/j);
  // }
  // }
  
  // }
  // void sieve(){
  // isprime[1]=false;
  // isprime[2]=true;
  // pb(primes,2);
  // for(int i=3;i<=N;i+=2) isprime[i]=true;
  // for(int i=3;i*i<=N;i+=2){
  // if(isprime[i]){
  // pb(primes,i);
  // for(int j=i*i;j<=N;j+=i){
  // isprime[j]=false;
  // }
  // }
  // }
  // }
    int main(){
      ios::sync_with_stdio(false);
        cin.tie(nullptr);
     //  sieve();
     // divis();
    tt{
// ll x,n;
// cin>>x>>n;

//     ll ans=0;
//     ll c=sqrt(x);
//     while(c>0){
//    ll rem=x-n*c;
//    if(x%c!=0) c--;
//    else{
//    ll dv=x/c;
//    if(n<=dv){
//     ans=max(ans,c);
//    }
//   // cerr<<"debug rem and c"<<rem<<' '<<c<<endl;
// //    if(rem%c==0) {
// //      ans=c;
// //      break;
// //    }
//  if(n<=c){
//     ans=max(ans,dv);
// }
//    c-=1;

//     }
//   }
//     cout<<ans<<endl;



// }
      ll x,n;
    cin>>x>>n;
 
    ll ans=0;
    ll c=x/n;
    while(c>0){
   ll rem=x-n*c;
   //cerr<<"debug rem and c"<<rem<<' '<<c<<endl;
   if(rem%c==0) {
     ans=max(ans,c);
     
   }
   c-=1;
 
    }
    cout<<ans<<endl;
    }
    }
    
    
  
  