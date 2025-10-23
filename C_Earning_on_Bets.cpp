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
  ll gcd(ll a,ll b){
    while(b){
      ll tmp=a%b;
      a=b;
      b=tmp;
    }
    return a;
  }
  ll lc( ll a,ll b){
    return a*b/(gcd(a,b));
  }
    int main(){
      ios::sync_with_stdio(false);
        cin.tie(nullptr);
      // sieve();
     // divis();
    tt{
   
//   ll n;
//   map<ll,ll>mp;
//   cin>>n;
//   vc(v,n);
//   bool f=0;
//   itr(i,n) {cin>>v[i];
//     mp[v[i]]++;
//     if(mp[v[i]]==v[i]){
//         f=1;
//     }
//   }
// //   if(f) {cout<<-1<<endl;
// continue;}
// vector<ll>vv(v.begin(),v.end());
// ll mx=vv[n-1];
// ll sum=0;
// ll j=n;
// ll ans=-1;
// ll lo=1e5,hi=1e8;
// while(lo<=hi){
//     ll mid=(lo+hi)/2;
// ll tot=mx*mid;
// sum=0;
// ll mn=LLONG_MAX;
// itr(i,n){
// ll ml=tot/v[i];
// mn=min(mn,ml*v[i]);
// sum+=ml;

// }
// if(mn>sum) {ans=mid;
//     break;
// }
// else lo=mid+1;



// }
// //cout<<sum<<' '<<mn<<endl;
// // for(j;j<2500;j++){
// //     ll tot=mx*j;
// //     sum=0;
// //     ll mn=LLONG_MAX;
// //     itr(i,n){
// //         ll ml=tot/v[i];
// //         mn=min(mn,ml*v[i]);
// //         sum+=ml;

// //     }
// //     if(mn>sum) {
// //         ans=j;
// //         break;
// //     }
// // }
// if(ans!=-1){
//    // cout<<sum<<endl;
//  ll tot=mx*ans;
//  for(int i=0;i<n;i++){
//     ll ml=tot/v[i];
//     cout<<ml<<' ';
    
//  }
//  endd;
// }

//else cout<<ans<<endl;
ll n;
cin>>n;
vc(v,n);
itr(i,n) cin>>v[i];
ll z=1;
itr(i,n){
  z=lc(z,v[i]);
}
ll sm=0;
itr(i,n){
  sm+=z/v[i];
}
if(sm<z){
  itr(i,n) cout<<z/v[i]<<' ';
  endd;
} else cout<<-1<<endl;


    }
    }
    
  
  