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
// #define MOD  998244353
//   #define f first
//   #define sc second
// #define endl '\n'
// const int N=1e5+5;
// vector<ll>fact_ar(N,1),modinv(N,1);
// ll power(ll x,ll mod){
//     if(mod<0) return 0;
//     ll ans=1;
//     while(mod){
//         if(mod%2==0){
//             x=(x*x)%MOD;
//             mod/=2;
//         }
//         else{
//             ans=(ans*x)%MOD;
//             mod--;
//         }
//     }
//     return ans%MOD;
// }
// vector<ll>pre(1e6+5,1);
// void prec(ll n){
//     pre[0]=1;
//     pre[1]=2;
//     for(int i=2;i<=n;i++){
//         pre[i]=pre[i-1]*2;
//         pre[i]%=MOD;
//     }
// }

//   int main(){
//     ios::sync_with_stdio(false);
//       cin.tie(nullptr);
//     // sieve();
//    // divis();


// ll n;
// cin>>n;
//   //prec(n+5);
// vc(v,n);
// ll sum=0;
// itr(i,n) cin>>v[i];
// itr(i,n) sum+=v[i];
// ll cur=1;
// ll s=sum;
// cerr<<s<<endl;
// for(int i=1;i<n;i++){
//     if(i<2) sum+=s;
//     else {
//         cur*=2;
//         cur%=MOD;
//         ll now=s*cur;
//         cerr<<now<< ' ';
//         now%=MOD;
//         sum+=now;
//         sum%=MOD;
//     }
//   //  cerr<<"sum "<<sum<<endl;

// }
// ll p=sum;
// //cerr<<sum<<endl;
// ll q=power(2,n-1);
// cerr<<q<<endl;
// q%=MOD;
// q=power(q,MOD-2);
// cerr<<q<<endl;
// cout<<(p*q)%MOD;
  
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
#define MOD  998244353
  #define f first
  #define sc second
#define endl '\n'
const int N=1e5+5;
vector<ll>fact_ar(N,1),modinv(N,1);
ll power(ll x,ll mod){
    if(mod<0) return 0;
    ll ans=1;
    while(mod){
        if(mod%2==0){
            x=(x*x)%MOD;
            mod/=2;
        }
        else{
            ans=(ans*x)%MOD;
            mod--;
        }
    }
    return ans%MOD;
}
vector<ll>pre(1e6+5,1);
void prec(ll n){
    pre[0]=1;
    pre[1]=2;
    for(int i=2;i<=n;i++){
        pre[i]=pre[i-1]*2;
        pre[i]%=MOD;
    }
}

  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();


ll n;
cin>>n;
  prec(n+5);
vc(v,n);
itr(i,n) cin>>v[i];
ll p=0;
if(n>=2) p=v[1]%MOD+v[0]%MOD;
else p=v[0];
p%=MOD;
for(int i=2;i<n;i++){
   p+=((v[i]*pre[i-1])%MOD);
   p%=MOD;
}
ll q=power(2,n-1);
q*=3;
q%=MOD;
q=power(q,MOD-2);
q%=MOD;
cout<<(p*q)%MOD;
  
  }
  

