		/*
			//! In The Name Of Allah
				
			
				
				
		*/                                                                                                                                                  
    #include<bits/stdc++.h>
    using namespace std;
    #define tt int t;cin>>t;while(t--)
    #define itr(i,a) for(int i=1;i<=a;i++)
  #define ittr(i,bg,a) for(int i=bg;i<a;i++)
    #define yes cout<<"YES"<<endl
    #define no cout<<"NO"<<endl
    #define ll long long
    #define endd cout<<endl
    #define vc(v, n) vector<ll> v(n+5)  
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
   map<ll,priority_queue<ll>>mp;
   vc(v,n);
   itr(i,n){
    cin>>v[i];
    mp[v[i]].push(i);
   }
   vc(vv,n);
   itr(i,n)cin>>vv[i];
   ll c=0;
   bool f=0;
   map<ll,ll>mpp;
   ll mx=0;
   ll i=n;
   while(i>=1){
ll lst=mp[vv[i]].top();
c=0;
    for(int i=mx;i>0;i--){
        if(mpp[i]<lst){
            c++;
            
        }
       }
    
    if(v[i+c]!=vv[i]){
        f=1;
        break;

    }
    else {
        ll x=vv[i];
        mp[vv[i]].pop();
        i--;
        while(vv[i]==x){
            
            c=0;
            lst= mp[vv[i]].top();
           for(int i=mx;i>0;i--){
            if(mpp[i]<=lst){
                c++;
                
            }
           }
  
            if(mp[vv[i]].top()!=(i+c)){
                mx++;
                mpp[mx]=mp[vv[i]].top();
                mp[vv[i]].pop();
                i--;

            }
            else {
              mp[vv[i]].pop();
              i--;
            }

        }
    }

   }
   if(j>1) f=1;
   if(f) no;
   else yes;

  
    }
    }


    
    		/*
			//! In The Name Of Allah
				
			
				
				
		*/                                                                                                                                                  
//   #include<bits/stdc++.h>
//   using namespace std;
//   #define tt int t;cin>>t;while(t--)
//   #define itr(i,a) for(int i=1;i<=a;i++)
// #define ittr(i,bg,a) for(int i=bg;i<a;i++)
//   #define yes cout<<"YES"<<endl
//   #define no cout<<"NO"<<endl
//   #define ll long long
//   #define endd cout<<endl
//   #define vc(v, n) vector<ll> v(n+2)  
//   #define srt(v) sort(v.begin(), v.end())
// #define rsrt(v) sort(v.rbegin(), v.rend())
// #define pb(a,x) a.push_back(x)
// #define MOD 1000000007
//   #define f first
//   #define sc second
// #define endl '\n'
// const int N=1e6+1;
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
// for(int i=3;i*i<=N;i+=2) isprime[i]=true;
// for(int i=3;i<=N;i+=2){
// if(isprime[i]){
// pb(primes,i);
// for(int j=i*i;j<=N;j+=i){
// isprime[j]=false;
// }
// }
// }
// }

//   int main(){
//     ios::sync_with_stdio(false);
//       cin.tie(nullptr);
//     // sieve();
//    // divis();
//   tt{
 
// ll n;
// cin>>n;
// vc(v,n);
// vc(vv,n);

// itr(i,n) {cin>>v[i];
   
// }
// itr(i,n) {cin>>vv[i]; 
// }
// bool f=0;

// ll i=n,j=n;
// map<ll,ll>read1;

// while(i>0){
 
//   ll x=v[i];
//   ll cnt=0;
//   while(j>0&&vv[j]==x){
//     read1[x]++;
//     j--;
//   }

//    while(i>0&&v[i]==x){
// cnt++;    i--;
//    }
//   // cout<<read1[x]<<' ';
//    read1[x]-=cnt;
//   // cout<<read1[x]<<' '<<cnt<<endl;
//    if(read1[x]<0){
//     f=1;
//     break;
//    }
// }
// if(j>1) f=1;

// if(f) no;
// else yes;

// }

//   }
  
  


  
  