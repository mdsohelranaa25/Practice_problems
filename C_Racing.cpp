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
itr(i,n){
  cin>>v[i];
}
ll x,y;
vector<pair<ll,ll>>pr;
bool f=0;
stack<ll>st;
ll cur=0;
itr(i,n){
  cin>>x>>y;
  pr.push_back({x,y});
  if(v[i]!=-1) cur+=v[i];
 
  if(v[i]==-1){
    st.push(i);
    v[i]=0;
    
  }
  ll m=max(0LL,y-cur);
  while(st.size()>y){
    st.pop();
  }
  while(cur<x){
    if(st.size()==0) {
      f=1;
      break;
    }
    ll ind=st.top();
    st.pop();
    v[ind]=1;
    cur++;
  }



}
//cerr<<f<<' '<<"first "<<endl;
cur=0;
ll cnt=0;
//cerr<<n<<endl;
for(int i=0;i<n;i++){
  cur+=v[i];
  cnt+=v[i];
  x=pr[i].f;
  y=pr[i].sc;
 // cerr<<cnt<<' '<<x<<' '<<y<<' '<<cur<<endl;
  //cerr<<cur<<' '<<i<<endl;
  if(cur<x||cur>y){
    //cerr<<" cur "<<cur<<' '<<x<<' '<<y<<endl;
    f=1;
    break;
  }

}

//cerr<<f<<' '<<"secnd"<<endl;
if(f) cout<<-1;
else for(auto x:v) cout<<x<<' ';
endd;


  }
  }
  

