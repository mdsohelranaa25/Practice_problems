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
//      ll tc=1;
//     tt{
//    ll n,m;
//    cin>>n>>m;
//    ll v[n+1][m+1];
//    itr(i,n){
//     itr(j,m){
//         cin>>v[i][j];
//     }
//    }
//    ll cn1=0,cn2=0;
//    ll line1=-1,line2=-1,line3=-1,line4=-1;
//    ll val1=-1,val2=-1;
//    ll row=-1,col=-1;
//    ll a,b,c,d;
//   ll sum=0;
// for(int l=1;l<=5;l++){
//     ll cnt=0,count=0;
//     for(int i=1;i<n-1;i++){
//         ll count=0;
//         itr(j,m){
//             if(v[i][j]!=l){
//                 if(count>cnt){
//                     cnt=count;
//                     line1=j-cnt+1;
//                     line2=j;
//                     row=i;
//                     count=0;
//                 }
//                 else{
//                     count=0;
//                 }
//             }
//             else {
//                 count++;
//                 if(count>cnt){
//                     cnt=count;
//                     line1=j-cnt+1;
                   
//                     line2=j;
//                     row=i;
                    
//                 }
//             }
            
//         }
//        // cerr<<"line sob "<<line1<<' '<<line2<<' '<<' '<<"l "<<l<<' '<<cnt<<endl;
//     }
//     //cerr<<"roq "<<row<<endl;
//         ll count2=0;
//         for(int aa=line1;aa<=line2;aa++){
//             ll sm=0,count2=0;
//             for(int bb=0;bb<n;bb++){
             
                 
//               if(v[bb][aa]==l){
                 
//                  count2++;
//                  if(l==4)
//                  // cout<<"aa"<<' '<<aa<<' ' <<count2<< ' ' <<bb<<' '<<bb-count2+1<<endl;
                  
//                    if(count2>sm&&bb>row&&(bb-count2+1)<row){
                        
//                         sm=count2;
//                         ll cc=sm+cnt-1;
//                         sum=max(sum,cc);
                       

//                     }
                
//               }
//                 else if(v[bb][aa]!=l){
                  
//                     if(count2>sm&&bb-1>row&&(bb-count2)<row){
                        
//                         sm=count2;
//                         ll cc=sm+cnt-1;
//                         sum=max(sum,cc);
//                         count2=0;

//                     }
//                     else{
//                         count2=0;
//                     }
//                 }
                
                
//             }
            
            
//         }


    
//   //  cerr<<"sum "<<sum<<endl;
// }
// cout<<"Case "<<tc++<<": "<<sum<<endl;
   
  
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
     ll tc=1;
    tt{
   
  ll n,m;
  cin>>n>>m;
  ll v[n+5][m+5];
  itr(i,n){
    itr(j,m){
        cin>>v[i][j];
    }
  }
  ll ans=0;
  for(int i=1;i<n-1;i++){
    for(int j=1;j<m-1;j++){
    ll cr=v[i][j];
    if(v[i-1][j]!=cr||v[i+1][j]!=cr||v[i][j-1]!=cr||v[i][j+1]!=cr){
        continue;
    }
        ll a=i,b=j;
        ll cnt=0;
        while(a>=0&&v[a][j]==v[i][j]){
            a--;
            cnt++;

        }
        a=i+1;
        while(a<n&&v[i][j]==v[a][j]){
            a++;
            cnt++;
        }
        b--;
        while(b>=0&&v[i][j]==v[i][b]){
            cnt++;
            b--;
        }
        b=j+1;
        while(b<m&&v[i][j]==v[i][b]){
            cnt++;
            b++;
        }
        ans=max(ans,cnt);
    
    }
  }
 cout<<"Case "<<tc++<<": "<<ans<<endl;
    }
    }
    
  
  
  