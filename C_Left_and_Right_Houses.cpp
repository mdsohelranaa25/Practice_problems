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
 string s;
 cin>>s;
 ll arr[n+5];
 vector<ll>pre(n+1,0),suf(n+5,0);
 ll tot1=0,tot0=0,left1=0,left0=0;
 itr(i,n) {
    if(s[i]=='1') tot1++;
    if(s[i]=='0') pre[i+1]=pre[i]+1;
    else pre[i+1]=pre[i];


 }
 for(int i=n-1;i>=0;i--){
    if(s[i]=='1') suf[i+1]=suf[i+2]+1;
    else suf[i+1]=suf[i+2];
 }
  tot0=n-tot1;

  vector<char>ss(n+4,' ');
  for(int i=0;i<n;i++) ss[i+1]=s[i];
ll zero=n-tot1;
 ll lind=-1;
 ll dif=INT_MAX;
 ll cnt=0;
 ll i=1;
 while(i<=n&&ss[i]=='1') {
    cnt++;
    i++;
 }
 if(i==n) cout<<0<<endl;
 else if(cnt==tot1){
    if(tot1>=zero) cout<<0<<endl;
    else cout<<n<<endl;
 }
 else{

    for(int i=n-1;i>=0;i--){
        zero=pre[i];
        ll one=suf[i+1];
       // cerr<<" i zero one dif predif zero+one "<<i<<' '<<zero<<' '<<one<<' '<<(i+1)/2<<' '<<(n-i+1)/2<<' '<<abs(n-2*i)<<' '<<dif<<' '<<zero+one<<' '<<endl;
        if(zero>=(i+1)/2&&one>=(n-i+1)/2&&(zero+one)>=(n+1)/2&&abs(n-2*i)<=dif){
            dif=abs(n-2*i);
            lind=i;
        }
    }
    if(lind==-1) cout<<n<<endl;
   else cout<<lind<<endl;
 }

  }
  }
  


 