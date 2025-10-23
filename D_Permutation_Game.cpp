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
 ll n,turn,pb,ps;
 cin>>n>>turn>>pb>>ps;
 vc(v,n+3);
 vc(vv,n+3);
 for(int i=1;i<=n;i++) cin>>v[i];
 for(int i=1;i<=n;i++) cin>>vv[i];
 ll first=0,sec=0;
 ll curFirst=0,curSecond=0;
ll round=0;
vector<bool>vis(n+4,false),viss(n+3,false);
while(round<turn){
    ll rm=turn-round;
  first=max(first,curFirst+rm*vv[pb]);
  curFirst+=vv[pb];
  vis[pb]=true;
  pb=v[pb];
  if(vis[pb]) break;
  round++;
  
}
round=0;
while(round<turn){
   ll rm=turn-round;
 if(viss[ps]) break;
  sec=max(sec,curSecond+rm*vv[ps]);
  curSecond+=vv[ps];
  viss[ps]=true;
  ps=v[ps];
  round++;

}
first=max(first,curFirst);
sec=max(sec,curSecond);
//cerr<<first<<' '<<sec<<endl;
if(first>sec) cout<<"Bodya"<<endl;
else if(sec>first) cout<<"Sasha"<<endl;
else cout<<"Draw"<<endl;


  }
  }
  

