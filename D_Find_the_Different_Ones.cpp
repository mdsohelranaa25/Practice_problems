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
 ll n;
 cin>>n;
 vc(v,n);
 itr(i,n){
    cin>>v[i];
 }
 vector<ll>ans;
 ans.push_back(0);
 for(int i=1;i<n;i++){
    if(v[i]!=v[i-1]) ans.push_back(i);
 }
ll m;
cin>>m;

while(m--){
    ll p,q;
    cin>>p>>q;
    p--;
    q--;
    if(v[p]!=v[q]) cout<<p+1<<' '<<q+1<<endl;
    else {
      ////  cerr<<p<<' ';
        ll x=upper_bound(ans.begin(),ans.end(),p)-ans.begin();
       if (x >= ans.size()) {
    cout << -1 << ' ' << -1 << endl;
    continue;
}
        x=ans[x];
       // cerr<<x<<endl;
        if(x>q){
            cout<<-1<<' '<<-1<<endl;
        }
        else cout<<p+1<<' '<<x+1<<endl;
    }
    
}
endd;
  }
  }
  

		/*
			//! In The Name Of Allah
				
			
				
				
		*/                                                                                                                                                  
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
//  ll n;
//  cin>>n;
//  vc(v,n);itr(i,n) cin>>v[i];
//  ll pre[n+2];
//  pre[0]=0;
//  for(int i=1;i<n;i++){
//     if(v[i]!=v[i-1]) pre[i]=i;
//     else pre[i]=pre[i-1];
//  }
//  ll m;
//  cin>>m;
//  while(m--){
//     ll p,q;
//     cin>>p>>q;
//     p--;
//     q--;
//     if(pre[p]==pre[q]) cout<<-1<<' '<<-1<<endl;
//     else {
//         if(v[pre[p]]!=v[pre[q]]) cout<<p+1<<' '<<q+1<<endl;
//         else cout<<p+1<<' '<<pre[q]<<endl;
//     }
//  }
//  endd;

//   }
//   }
  

