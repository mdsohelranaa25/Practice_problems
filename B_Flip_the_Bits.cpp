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
// ll change_div[N]={0};
// vector<ll>divisor[N];
// void divis(){
// for(int i=1;i<=N;i++){
// for(int j=i;j<=N;j+=i){
// change_div[j]++;
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
//  ll n;
//  cin>>n;
//  string s,ss;
//  cin>>s>>ss;
// // ll i=n-1;
//  ll change=0;
//  map<ll,ll>mp;
//  ll odd=0,even=0;
//  itr(i,n){
//   if(s[i]=='1') odd++;
//   else even++;
//   if(odd==even) mp[i]=1;
//   }
//   bool f=0;
//   for(int i=n-1;i>=0;i--){
//     if(change){
//       if(s[i]==ss[i]){
//         if(mp[i]) change=0;
//         else {
//           f=1;
//           break;
//         }


//       }
      
//     }
//     else {
//       if(s[i]!=ss[i]){
//         if(mp[i]) change=1;
//         else {
//           f=1;
//           break;
//         }
//       }
//     }

//   }
//   if(f) no;
//   else yes;

//   }
//   }
  

/*
  //! In The Name Of Allah




*/
#include <bits/stdc++.h>
using namespace std;
#define tt  \
  int t;    \
  cin >> t; \
  while (t--)
#define itr(i, a) for (int i = 0; i < a; i++)
#define ittr(i, bg, a) for (int i = bg; i < a; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define endd cout << endl
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a, x) a.push_back(x)
#define MOD 1000000007
#define f first
#define sc second
#define endl '\n'
const int N = 1e6 + 1;
vector<bool> isprime(N, false);
vector<ll> primes;


void solve()
{

  ll n;
  cin>>n;
  string s,ss;
  cin>>s>>ss;
  vc(one,n+5);
  vc(zero,n+5);
  itr(i,n){
    if(s[i]=='0') zero[i]++;
    else one[i]++;
    if(i) one[i]+=one[i-1];
    if(i) zero[i]+=zero[i-1];
  }
ll i=n-1;
ll change=0;
bool f=0;
while(i>=0){
  if(f) break;
  //cerr<<i<<' '<<change<<endl;
  if(change%2==0){
    while(i>=0&&s[i]==ss[i]) i--;
    if(i>=0){
    if(one[i]==zero[i])
    change++;
    else{
      f=1;
        break;
    }
  }
    
  }
  //cerr<<i<<endl;
  if(i>=0&&change%2==1&&s[i]!=ss[i]){
    while(i>=0&&s[i]!=ss[i]) i--;
    if(i>=0&&one[i]==zero[i])
    change++;
    else if(i>=0) f=1;
  }
}
if(f==0) yes;
else no;

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  tt
  {
    solve();
  }
}
