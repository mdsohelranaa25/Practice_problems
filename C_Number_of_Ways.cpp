// 		/*
// 			//! In The Name Of Allah
				
			
				
				
// 		*/                                                                                                                                                  
//     #include<bits/stdc++.h>
//     using namespace std;
//     #define tt int t;cin>>t;while(t--)
//     #define itr(i,a) for(int i=0;i<a;i++)
//   #define ittr(i,bg,a) for(int i=bg;i<a;i++)
//     #define yes cout<<"YES"<<endl
//     #define no cout<<"NO"<<endl
//     #define ll long long
//     #define endd cout<<endl
//     #define vc(v, n) vector<ll> v(n)  
//     #define srt(v) sort(v.begin(), v.end())
//   #define rsrt(v) sort(v.rbegin(), v.rend())
//   #define pb(a,x) a.push_back(x)
//   #define MOD 1000000007
//     #define f first
//     #define sc second
//   #define endl '\n'
//   const int N=1e6+1;
//   vector<bool>isprime(N,false);
//   vector<ll>primes;
//   ll cnt_div[N]={0};
//   vector<ll>divisor[N];
//   void divis(){
//   for(int i=1;i<=N;i++){
//   for(int j=i;j<=N;j+=i){
//   cnt_div[j]++;
//   divisor[j].push_back(i);
//   //if(i/j!=i) divisor[j].push_back(i/j);
//   }
//   }
  
//   }
//   void sieve(){
//   isprime[1]=false;
//   isprime[2]=true;
//   pb(primes,2);
//   for(int i=3;i*i<=N;i+=2) isprime[i]=true;
//   for(int i=3;i<=N;i+=2){
//   if(isprime[i]){
//   pb(primes,i);
//   for(int j=i*i;j<=N;j+=i){
//   isprime[j]=false;
//   }
//   }
//   }
//   }
  
//     int main(){
//       ios::sync_with_stdio(false);
//         cin.tie(nullptr);
//       // sieve();
//      // divis();
//   ll n;
//   cin>>n;
//   vc(v,n);
//   ll tot=0;
//   itr(i,n) {cin>>v[i]; tot+=v[i];
//   }
//   if(tot%3) {
//     cout<<0;
//     return 0;
//   }
//   ll cnt=0,sum=0;
//   ll i=0;
//   ll part=tot/3;
  
// ll zero=0;
// ll zr=0;
// ll total_zero=0;
// vector<ll>vv;
//   while(i<n){
//     sum+=v[i];
// if(sum==0) {
//         zr++;
//         total_zero++;
//     }
//    else if(sum==part){
//         cnt++;
//         sum=0;
//        // cerr<<zr<<' '<<cnt<<' '<<total_zero<<endl;
//         vv.push_back(zr);
//         zr=0;
//          }
//     i++;
//   }
//   vv.push_back(zr);
//   if(tot==0){
//     zr=total_zero-2;
//     ll ans=zr*(zr+1);
//     ans/=2;
//     cout<<ans<<endl;
//   }
//   else if(cnt!=3){ cout<<0<<endl;
//   }
//   else{
// ll ans=0;
// if(total_zero==0){
//     cout<<1<<endl;
//     return 0;
// }
// vv.erase(vv.begin());
// ll m=vv.size()-1;
// vv.erase(vv.begin()+m);
// ans=1;
// m--;
// while(m>=0){
//    // cerr<<ans<<' '<<zer[m]<<' '<<m<<' ';
//     ans*=(vv[m]+1);
//    //cerr<<ans<<endl;
//     m--;
// }
// cout<<ans<<endl;

//   }
//     }
    
    
  
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
    
   ll n;
   cin>>n;
   vc(v,n);
   itr(i,n);
   ll sum=0;
   itr(i,n) { cin>>v[i];
    sum+=v[i];
   }
   ll tot=sum;
   if(tot%3){
    cout<<0<<endl;
    return 0;
   }
   ll pre[n+5]={0};
   ll cnt[n+5]={0};
   sum=0;
   for(int i=n-1;i>=0;i--){
    sum+=v[i];
    if(sum==tot/3) cnt[i]=1;
    pre[i]=pre[i+1]+cnt[i];
    
   }
   sum=0;
   ll ans=0;
   for(int i=0;i<n;i++){
    sum+=v[i];
    if(sum==tot/3){
        ans+=pre[i+2];
    
    }

   }
   cout<<ans<<endl;

    }
    
    
  
  