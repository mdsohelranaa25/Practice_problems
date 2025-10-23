// 		/*
// 			//! In The Name Of Allah
				
			
				
				
// 		*/                                                                                                                                                  
//   #include<bits/stdc++.h>
//   using namespace std;
//   #define tt int t;cin>>t;while(t--)
//   #define itr(i,a) for(int i=0;i<a;i++)
// #define ittr(i,bg,a) for(int i=bg;i<a;i++)
//   #define yes cout<<"YES"<<endl
//   #define no cout<<"NO"<<endl
//   #define ll long long
//   #define endd cout<<endl
//   #define vc(v, n) vector<ll> v(n)  
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
// string s,ss;
// cin>>s>>ss;
// ll cnt=0;
// ll m=n-1;
//   int f=0;
// while(ss[m]=='<') m--;
// for(int i=m;i>=0;i--){
//     if(ss[i]=='>') {cnt++; 
//     }
//     else if(s[i]=='>') cnt++;
//     // else {
//     //     cnt--;
//     // }
    
// }

// if(cnt>=n-1) yes;
// else no;
//   }
//   }
  

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
ll n;
vector<bool>vis(1e6+2,false);
vector<pair<ll,ll>>pr(1e6+2);
vector<vector<bool>>got(3,vector<bool>(1e6));
string s,ss;
bool f(ll i,ll x){
if(i==n-1) {
  if(x==2) return true;
  else return false;
}
if(got[x][i]) return got[x][i];
bool nn=false;
if(x==1){
  if(s[i+1]=='>') nn|=f(i+2,1);
  else if(ss[i]=='>') nn|=f(i+1,2);
}
else {
    if(ss[i+1]=='>') nn|=f(i+2,2);
  else if(s[i]=='>') nn|=f(i+1,1);

}
return got[x][i]=nn;

}
    

  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  tt{
    itr(i,n+12) {
      got[1][i]=false;
      got[2][i]=false;
      vis[i]=false;
    }

 cin>>n;

 cin>>s;

 cin>>ss;
 if(f(0,1)) yes;
 else no;


  }
  }
  

