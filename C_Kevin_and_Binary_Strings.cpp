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
//    string s;
//    cin>>s;
//    ll n=s.length();
//   ll a,b,c,d;
//   a=1,b=n;
//   c=-1,d=-1;
// ll i=0,j=0,l=0,r=0;
// ll f1=-1;
// while(i<n) {
//     if(s[i]!='1'){
//         f1=i;
//         break;
//     }
//     i++;

// }
// if(f1==-1) {
//     cout<<1<<' '<<n<<' '<<n<<' '<<n<<endl;
//     continue;
// }
// else{
// ll rem=n-f1;
// string best="";
// itr(i,rem) best+='0';
// for(int i=0;i<f1;i++){
//     ll cc=0;
//     string tmp="";
//     for(int j=f1;j<n;j++,cc++){
//         if(s[j]!=s[i+cc]){
//             tmp+='1';

//         }
//         else tmp+='0';
//     }
//     if(tmp>best){
//         best=tmp;
//         c=i+1;
//         d=i+rem;
//     }
// }
// cout<<a<<' '<<b<<' '<<c<<' '<<d<<endl;




// }
  
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
   string s;
   cin>>s;
   ll n=s.length();
   ll i=0,j=0,a=1,b=n,c=-1,d=-1,f1=-1;
   for(int i=0;i<n;i++){
    if(s[i]=='0'){
        f1=i;
        break;
    }
}
    if(f1==-1) {
        c=n,d=n;
    }
    else {
        ll rem=n-f1;
        ll x=f1-1;
        for(int i=f1;i<n&&x>=0;i++,x--){
            if(s[i]=='1') break;
        }
        c=x+2;
        d=c+rem-1;
    }
   
   cout<<a<<' '<<b<<' '<<c<<' '<<d<<endl;

  
    }
    }
    
  
  
    
  
  