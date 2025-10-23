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
 
ll n;cin>>n;
vc(v,n);
map<ll,ll>mp;
vector<pair<ll,ll>>pr;
set<ll>st;
itr(i,n){
    cin>>v[i];
    mp[v[i]]++;
    st.insert(v[i]);
}
for(auto x:st){
    pr.push_back({mp[x],x});
}
sort(pr.begin(), pr.end(), [](auto &a, auto &b){
    if(a.first == b.first) return a.second > b.second; 
    return a.first > b.first;
});


ll alice=0,bob=0;
bool turnal=1;
for(auto x:pr){
    ll now=x.f;
    ll noww=x.sc;
    cerr<<now<<' '<<noww<<endl;
    ll firs=(noww+1)/2;
    firs*=now;
    ll secc=noww/2;
    secc*=now;
    if(turnal){
        alice+=firs;
        bob+=secc;
        if(noww%2) turnal=0;
    }
    else{
        alice+=secc;
        bob+=firs;
        if(now%2) turnal=1;
    }

}
cout<<alice<<' '<<bob<<endl;


  }
  }
  

