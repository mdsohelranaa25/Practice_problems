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
   ll  n,x;
   cin>>n>>x;
   bitset<30>kk=x;
   map<ll,ll>mp;
   ll cnt=0;
   for(int i=0;i<30;i++){
    if(kk[i]==1){
        cnt++;
        mp[i]=1;
 
    }
}
    ll ans=0;
    for(int i=1;i<30;i++){
        if(mp[i]==1)ans+=1<<i;
 
    }
    bool f=0;
    ll rem=n-cnt;
   
if(cnt==0&&n==1) {
    cout<<-1<<endl;
    continue;
}
rem=(n-cnt+mp[0]);
// if(rem==0){
//     cout<<ans<<endl;
//     continue;
// }
//cout<<rem<<' '<<cnt<<' '<<ans<<' '<<mp[0]<<endl;
cnt-=mp[0];
bool ff=0;
if(cnt>=n){
    if(mp[0]==1) ans+=1;
    cout<<ans<<endl;
    continue;
    
}
 
    if(mp[0]==1){
        if(rem%2){
            ans+=rem;
        }
        else {
           if(rem+1<=n){
            ans+=rem+1;
 
           }
           else {
            ans+=rem-1;
            f=1;
           }
        }
    }
    else{
        if(rem%2){
            if(rem+1<=n){
                ans+=rem+1;
    
               }
               else {
                ans+=rem-1;
                f=1;
               }
        }
        else {
            ans+=rem;
        }
    }
    if(f){
      ans+=4;
    }
    cout<<ans<<endl;
    
    
   }
  
    }
    
    
  
  