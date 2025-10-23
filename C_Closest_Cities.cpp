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
 itr(i,n) cin>>v[i];
 vector<ll>pre(n+5);
  pre[0]=0;
  pre[1]=1;
  for(int i=1;i<n-1;i++){
    ll r=v[i+1]-v[i];
    ll l=v[i]-v[i-1];
    if(r<l) pre[i+1]=pre[i]+1;
    else pre[i+1]=pre[i]+r;

  }
  vector<ll>suf(n+5);
  suf[n-1]=0;
  suf[n-2]=1;
  for(int i=n-2;i>0;i--){
    ll r=v[i+1]-v[i];
    ll l=v[i]-v[i-1];
    if(l<r) suf[i-1]=suf[i]+1;
    else suf[i-1]=suf[i]+l;
  }
  ll m;
  cin>>m;
  while(m--){
    ll x,y;
    cin>>x>>y;
    x--;
    y--;
    if(x<y)
    cout<<pre[y]-pre[x]<<endl;
    else cout<<suf[y]-suf[x]<<endl;
  }



  }
  }
  

