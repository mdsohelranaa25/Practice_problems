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
 
ll n,k;
cin>>n>>k;
vc(v,n);
map<ll,ll>mp;
vector<ll>pre(1e5+5,-1),suf(1e5+5,-1);
itr(i,n){
    cin>>v[i];
    mp[v[i]]++;
    
}
itr(i,n){
    if(pre[v[i]]==-1) pre[v[i]]=i;
}
for(int i=n-1;i>=0;i--){
    if(suf[v[i]]==-1) suf[v[i]]=i;
}
ll mn=n,mx=0;
for(int i=k;i>=1;i--){
    if(mp[i]==0) pre[i]=mn;
    else 
    pre[i]=min(pre[i],mn);
    mn=pre[i];
   if(mp[i]==0) suf[i]=mx;
   else 
    suf[i]=max(suf[i],mx);
    mx=suf[i];
}

for(ll i=1;i<=k;i++){
    if(mp[i]==0) cout<<0<<' ';
    else {
        ll l=suf[i]-pre[i]+1;
        cout<<l*2<<' ';
    }

}
endd;
  }
  }
  

