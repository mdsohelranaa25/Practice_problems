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
priority_queue<ll>v;
bool even=false,odd=false;
 for(int i=1;i<=n;i++){
    ll x;
    cin>>x;
    v.push(x);
    if(x%2) odd=true;
    if(x%2==0) even=true;
 }
 if(odd&&even) cout<<-1<<endl;
 else{
    vector<ll>ans;
    priority_queue<ll>pq;
    while(v.top()>0){
        ll div=(v.top()+1)/2;

        // if(v.top()%2) div=v.top();
        // else div=v.top()/2;
        ans.push_back(div);
        while(!v.empty()){
            pq.push(abs(v.top()-div));
            v.pop();
        }
        v=pq;
       priority_queue<ll>tmp;
       pq=tmp;

    }
    cout<<ans.size()<<endl;
    
    for(auto xx:ans) cout<<xx<<' ';
    endd;

 }

  }
  }
  

