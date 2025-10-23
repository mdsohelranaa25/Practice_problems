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


//   int main(){
//     ios::sync_with_stdio(false);
//       cin.tie(nullptr);
//     // sieve();
//    // divis();
//   tt{
//  ll n;
//  cin>>n;
//  vc(v,n);
//  itr(i,n) cin>>v[i];
//  bool ff=0;
//  vc(vv,n);itr(i,n) cin>>vv[i];
//  for(int i=0;i<n-1;i++){
//   if(v[i]<v[i+1]){ff=1;
//   break;}

//  }
//  for(int i=0;i<n-1;i++) if(vv[i]>vv[i+1]){ff=1;
// break;}
// ll mn=v[n-1];
// if(mn!=vv[0]) ff=1;
// if(ff){ no;
// continue;}
// for(int i=0;i<n-1;i++) if(v[i]%v[i+1]!=0) {ff=1;
// break;}
// for(int i=0;i<n-1;i++){ if(vv[i+1]%vv[i]!=0) { ff=1;
// break;}}
// for(int i=0;i<n;i++){
//   if(v[i]==v[n-1]){
//     if(vv[i]!=v[i]){
//       ff=1; break;
//     }
//     else
//     break;
//   }

// }
// if(ff) no;
// else yes;


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
ll _lcm(ll x,ll y){
  return (x*y)/__gcd(x,y);
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
    vc(vv,n);
    vc(a,n);
    itr(i,n) cin>>v[i];
    itr(i,n) cin>>vv[i];
    itr(i,n) a[i]=_lcm(v[i],vv[i]);
    bool f=0;
    //if(a[0]!=v[0]||a[n-1]!=vv[n-1]) f=1;
    ll now=a[0];
    for(int i=0;i<n;i++){
      now=__gcd(now,a[i]);
      if(now!=v[i]) f=1;
      
    }
    now=a[n-1];
    for(int i=n-1;i>=0;i--){
      now=__gcd(now,a[i]);
      if(now!=vv[i]) f=1;
    }
    
    if(f) no;
    else yes;

  }
  }
  

