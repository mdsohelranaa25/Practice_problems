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
 ll n,m,l;
 cin>>n>>m>>l;
 ll cur=1;
 ll pow=1;
 vector<pair<ll,ll>>parbona,extra;
 itr(i,n) {
    ll x,y;
    cin>>x>>y;
   parbona.push_back({x,y});
 }
 itr(i,m) {
    ll x,y;
    cin>>x>>y;
    extra.push_back({x,y});
 }
 bool f=0;
 ll needToTake=0;
 priority_queue<ll>pq;
 ll ext=0;
 itr(i,n){
    ll low=parbona[i].f;
    ll max=parbona[i].sc;
    ll dif=max-low+1;
   // cerr<<parbona[i].f<<" "<<parbona[i].sc<<endl;
    //cerr<<"dif "<<dif<<' ';
    while(ext<extra.size()&&extra[ext].f<low){
        pq.push(extra[ext].sc);
        ext++;
    }
   // cerr<<" ext "<<ext <<' ';
    while(ext<extra.size()&&extra[ext].f<=max) ext++;
    //cerr<<ext<<' '<<" pow "<<pow;
     dif++;
    while(dif>pow&&!pq.empty()){
        pow+=pq.top();
        pq.pop();
        needToTake++;
    }
   
    //cerr<<" dif  and pow "<<dif<<' '<<pow<<endl;
    if(dif>pow){
        f=1;
        break;
    }
 }
 if(f) cout<<-1<<endl;
 else cout<<needToTake<<endl;

  }
  }
  

