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
 ll n,x,y;
 cin>>n>>x>>y;
 ll gc=__gcd(x,y);
 ll lc=x*y/gc;
 ll nA=n/x;
 ll nB=n/y;
 ll c=n/lc;
 nA-=c;
 nB-=c;
 ll nn=n;
 n=nB;
 ll lowSum=(n*(n+1))/2;
 n=nn;
 ll hiSum=(n*(n+1))/2;
 n=nn-nA;
 ll subSum=(n*(n+1))/2;
 ll upSum=hiSum-subSum;
 cout<<upSum-lowSum<<endl;
//  set<ll>a,b,total;
//  for(int i=x;i<=n;i+=x){
//     a.insert(i);
//     total.insert(i);

//  }
//  for(int i=y;i<=n;i+=y){
//     b.insert(i);
//      total.insert(i);

//  }
//  ll sum_a=0,sum_b=0;
//  ll nA=a.size(),nB=b.size(),c=total.size();
//  ll dicrease=(nA+nB)-c;
//  nA-=dicrease;
//  nB-=dicrease;
// // for(auto x:a) cerr<<x<<' ';
// // cerr<<endl;
// // for(auto x:b) cerr<<x<<' ';
// // cerr<<endl;
// // cerr<<a.size()<<' '<<b.size()<<endl;
//     ll i=n;
//     ll cnt=1;
//     while(cnt<=nA){
//         sum_a+=i;
//         i--;
//         cnt++;
//     }
//     i=1;
//     cnt=1;
//     while(cnt<=nB){
//         sum_b+=i;
//         i++;
//         cnt++;
//     }
//     cout<<sum_a-sum_b<<endl;
 
// //cerr<<nA<<' '<<nB<<' '<<c<<' '<<sum_a<<' '<<sum_b<<endl;

  }
  }
  

