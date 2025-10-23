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
 itr(i,n) cin>>v[i];
 srt(v);
 map<ll,ll>mp;
 itr(i,n) mp[v[i]]++;
 ll mx=0;
 itr(i,n) if(v[i]==mx) mx++;
 vc(vv,n);
 if(k==0){
    ll sum=0;
    itr(i,n) sum+=v[i];
    cout<<sum<<endl;
    continue;
 }
 itr(i,n){
    if(mp[v[i]]==1&&v[i]<mx) vv[i]=v[i];
    else vv[i]=mx;
 }
 k--;
 srt(vv);
if(k){
    for(auto x:vv) cerr<<x<<' ';
    cerr<<endl;
    v=vv;
    k--;
    mp.clear();
    itr(i,n) mp[v[i]]++;
    mx=0;
    itr(i,n) if(v[i]==mx) mx++;
    vv.assign(n,0);
    itr(i,n){
        if(mp[v[i]]==1&&v[i]<mx) vv[i]=v[i];
        else vv[i]=mx;

    }
    srt(vv);
    for(auto x:vv) cerr<<x<<' ';
    cerr<<endl;
    ll sum=0;
    ll i=0;

sum+=vv[0];

i=1;
v=vv;
mp.clear();
itr(i,n) mp[v[i]]++;
if(mp[v[0]]>1){
  cerr<<k<<endl;
  if(k%2) {
    cout<<(v[0]==0?n:0)<<endl;
    continue;
  }
  else {
    cout<<n*v[0]<<endl;
    continue;
  }
}
while(i<n&&mp[v[i]]==1) {sum+=v[i];
i++;}
ll baki=v[i];
ll pos=n-i;
cerr<<"i "<<i<<endl;
if(baki==v[i-1]+1){
  if(k%2==0) sum+=baki*pos;
else sum+=(baki+1)*pos;
}
else{
if(k%2==0) sum+=baki*pos;
else sum+=(baki-1)*pos;
}
cout<<sum<<endl;


}
else{
    ll sum=0;
    for(auto x:vv) sum+=x;
    cout<<sum<<endl;
}

  }
  }
  
