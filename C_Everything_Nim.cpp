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
 vector<ll>v;
 ll x;
map<ll,ll>mp;
itr(i,n){
    cin>>x;
    mp[x]++;
    if(mp[x]==1) v.push_back(x);
}
n=v.size();
srt(v);
string s="";

if(v[0]!=1) {
    s+='1';
}
ll i=0;
for(i=1;i<n-1;i++){
    if(v[i]-v[i-1]>1){
        if(i%2) s+='0';
        else s+='1';
        
    }
}
ll ans=0;
if(s.length()==0) {
    if(v.size()%2) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
    continue;
}
vector<ll>vv;
vv.push_back(s[0]-'0');
for(int i=1;i<s.length();i++){
    if(s[i]!=s[i-1]) vv.push_back(s[i]-'0');

}
if(n%2==vv[vv.size()-1]) vv.pop_back();
ll nn=vv.size();
// for(auto x:vv) cerr<<x<<' ';

// cerr<<endl;

    if(n%2){
        if(nn%2) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
    else{
        if(nn%2)cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }







  }
  }
  

