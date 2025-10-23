// 		/*
// 			//! In The Name Of Allah
				
			
				
				
// 		*/                                                                                                                                                  
//   #include<bits/stdc++.h>
//   using namespace std;
//   #define tt int t;cin>>t;while(t--)
//   #define itr(i,a) for(int i=1;i<=a;i++)
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
// vc(v,n+2);
// itr(i,n) cin>>v[i];
// ll lo=1,hi=n;
// vc(pre,n+5);
// pre[1]=v[1];
// ll ans=0;
// vector<vector<ll>> mp(n + 2, vector<ll>(25, 0));
// bitset<25>k=v[1];
// for(int i=0;i<21;i++) if(k[i]) mp[1][i]++;
// for(int i=2;i<=n;i++){
//     bitset<21>k=v[i];
//     for(int j=0;j<21;j++) {
//         mp[i][j]=mp[i-1][j];
//         if(k[j]) mp[i][j]++;
//     }

// }
// while(lo<=hi){
//     ll k=(lo+hi)/2;
//    // cerr<<k<<' '<<endl;
//     bool f=0;
//   //  bitset<50>=pre[k];
//     map<ll,ll>now,ind;
//    for (int j = 0; j < 21; j++) {
//                     now[j] = mp[k][j];
//                 }
              
// for(int i=k+1;i<=n;i++){
//     bitset<21>kk=v[i];
//     map<ll,ll>final;
//     for(int j=0;j<21;j++) if(kk[j]){
//        //if(k==3) cerr<<i<<' ';
       
//         if(now[j])
//         now[j]++;
//         else {
//             f=1;
//             break;
//         }
//     }
//     bitset<21>l=v[i-k];
//     for(int j=0;j<21;j++){
//         if(l[j]){
//             if(now[j]>1) {now[j]--;
//                 final[j]++;
//             }

//             else {
//                 f=1;
//                  break;
//             }
//         }
//     }
// }
// if(f) lo=k+1;
// else {
//     ans=k;
//     hi=k-1;
// }
// }
// cout<<ans<<endl;

//   }
//   }
  

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
 
ll n;
cin>>n;
vc(v,n+2);
itr(i,n) cin>>v[i];
ll lo=1,hi=n;
vc(pre,n+5);
pre[1]=v[1];
ll ans=0;
vector<vector<ll>> mp(n + 2, vector<ll>(25, 0));
bitset<25>k=v[1];
ll orr=v[1];
ll lind=0;
itr(i,n) orr|=v[i];
cerr<<orr<<endl;
for(ll i=1;i<=n;i++){
  bitset<21>k=v[i];
  ll cnt=0;
  for(ll j=0;j<21;j++){
    mp[i][j]=mp[i-1][j];
    if(k[j]) mp[i][j]++;
    if(mp[i][j]) cnt+=1<<j;
  }
  //cerr<<i<<' '<<cnt<<endl;
  if(cnt==orr){
     ll ekhon=n;
ll lo=0;
ll hi=i-1;
while(lo<=hi){
  ll mid=(lo+hi)/2;
  map<ll,ll>cur;
  ll curr=0;
 
  for(int l=0;l<21;l++){
if(mp[i][l]-mp[mid][l]) curr+=1<<l;
  

  }
  if(curr==orr){
    lo=mid+1;
    ekhon=(i-mid);
  }
  else hi=mid-1;
}
ans=max(ans,ekhon);
  }
  else  ans=max(ans,i+1);


}
cout<<ans<<endl;
  }
  }
  

		
		