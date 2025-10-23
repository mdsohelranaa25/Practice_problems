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
//     tt{
//    ll a,b,c,d;
//    cin>>a>>b>>c>>d;
//    set<ll>st;
//    map<ll,ll>mp;
//    ll l,l2,l3;
// l=max(a,max(b,c));
// l3=min(a,min(b,c));
// l2=(a+b+c)-(l+l3);

// ll vol=d;
// cerr<<"l ll lll "<<l<<' '<<l2<<' '<<l3<<endl;
// a=1,b=1,c=1;
// bool f=0,ff=0,fff=0;
// ll mm=1;
//    for(int i=2;i<=l;i++){
// if(fff) break;
    
//    while(d%i==0){
//     cerr<<" a b c d mm i "<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<mm<<' '<<i<<endl;
//     if(f){
//         if(ff){
//            c=d;
//            fff=1;
//         break;
            
//         }
//         else{
//             if(mm*i<=l2){
//                 mm*=i;
//             }
//             else{
//                 b=mm;
//                 mm=1;
//                 ff=1;
//                 d*=i;
//             }
//             d/=i;
//         }
//     }
//     else {
//         if(mm*i<=l3){
//         mm*=i;
        
//     }
//     else {
//         a=mm;
//         mm=1;
//         d*=i;
//         f=1;
//     }
    
//     d/=i;
// }
  
//    }
  
// }
// c=d;
// d=vol;

// ll t=a,t2=b,ttt=c;
// a=max(t,max(ttt,t2));
// c=min(t,min(t2,ttt));
// b=(t+t2+ttt)-(a+c);
// cerr<<a<<' '<<b<<' '<<c<<endl;
// if(a*b*c==d){
//     if(a<=l&&b<=l2&&c<=l3) {
//         ll cnt=1;
//         cnt*=(l-a+1);
//         cnt*=(l2-b+1);
//         cnt*=(l3-c+1);
//         cout<<cnt<<endl;
    
//     }
//     else cout<<0<<endl;
// }
// else cout<<0<<endl;

  
//     }
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
    tt{
   
  ll a,b,c,d;
  ll x=-1,y=-1,z=-1;
  ll ans=0;
  cin>>a>>b>>c>>d;
  for(int i=1;i<=a;i++){
    for(int j=1;j<=b;j++){
        ll ab=i*j;
        if(d%ab==0&&d/ab<=c){
           ll an=(a-i+1)*(b-j+1)*(c-d/ab+1);
           ans=max(ans,an);
            

        }
    }
  }

  cout<<ans<<endl;
    }
    }
    
  
  