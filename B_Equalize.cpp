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
  ll m=n;
  vector<ll>v;
map<ll,ll>mp;
  itr(i,n) {
    ll x;
    cin>>x;
    if(mp[x]==0){
        pb(v,x);
        mp[x]++;
    }
  }
  n=v.size();
  srt(v);
//   itr(i,n) cout<<v[i]<<' ';
//   endd;

  ll lo=v[0],hi=v[n-1]+n;
  ll mx=0;
ll i=0,j=n-1;
ll ans=0;
i=0,j=0;
// itr(i,n){
//     if(v[i]-v[j]>=m) j++;
//     ans=max(ans,i-j+1);
// }
// cout<<ans<<endl;
// while(i<n){
//     if(v[i]-v[j]>=m) j++;
//     ans=max(ans,i-j+1);
//     i++;
// }
//cout<<i<<' '<<j<<endl;
// while(i<=j){
//     if(v[j]-v[i]<m){
    //   //  cout<<v[i]<<' '<<v[j]<<' '<<v[j]-v[i]<<endl;
    //     ans=j-i+1;
    //     ll k=j;
    //     while(j<n&&v[j]-v[i]<m) {
           
    //         ans=max(ans,j-i+1);
    //         j++;

    //     }
    //     j=k;
    //     while(i>=0&&v[j]-v[i]<m){
    //         ans=max(ans,j-i+1);
    //         i--;
    //     }
    //     break;


    // }
    // else {
    //     ll d1=v[j]-v[j-1];
    //     ll d2=v[i+1]-v[i];
    //     d1>=d2?j--:i++;
    // }
    
//}
cout<<ans<<endl;

    }
    }
    
  

  