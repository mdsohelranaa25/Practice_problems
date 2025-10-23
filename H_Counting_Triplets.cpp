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
 vc(v,n+2);
 for(int i=1;i<=n;i++) cin>>v[i];
 vector<unordered_map<ll,ll>>mp(n+2);
 for(int i=n;i>=1;i--){
    mp[i]=mp[i+1];
    mp[i][v[i]]++;
 }
 ll ans=0;
 ll cnt=0;
 for(int i=1;i<n-1;i++){
    ll cn=0,cnn=0;
    for(int j=i+1;j<n;j++){
        ll sum=v[i]+v[j];
        ll have_sum=mp[j+1][sum];
        ll same=1;
        while(j<n&&v[j]==v[j+1]) {
            same++;
            j++;
        }
        cnn+=same*have_sum;
    }
    cn=1;
    while(i<n-1&&v[i]==v[i+1]){
        cn++;
        i++;
    }
    ans+=cn*cnn;
 }
 cout<<ans<<endl;

  }
  }
  

