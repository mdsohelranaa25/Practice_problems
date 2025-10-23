		/*
			//! In The Name Of Allah
				
			
				
				
		*/                                                                                                                                                  
  #include<bits/stdc++.h>
  using namespace std;
  #define tt int t;cin>>t;while(t--)
  #define itr(i,a) for(int i=1;i<=a;i++)
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
 
ll n,m;
cin>>n>>m;
vc(v,n+4);
vc(pre,n+5);
vc(zero,n+5);
vc(one,n+5);
itr(i,n) cin>>v[i];
pre[1]=0;
itr(i,n){
    zero[i]=zero[i-1];
    one[i]=one[i-1];
    if(v[i]==0){
        zero[i]++;

    }
    else one[i]++;
}
for(int i=2;i<=n;i++){
    if(v[i]==v[i-1]) pre[i]=pre[i-1]+1;
    else pre[i]=pre[i-1];
    
}
while(m--){
    ll a,b;
    cin>>a>>b;
    ll zr=zero[b]-zero[a-1];
    ll on=one[b]-one[a-1];
    if(zr%3||on%3) {
        cout<<-1<<endl;
        continue;
    }
    else {
        ll dif=b-a+1;
        if(pre[b]-pre[a]>0) cout<<dif/3<<endl;
        else cout<<dif/3+1<<endl;
    }
}
  }
  }
  

