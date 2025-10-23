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
 ll n,m;
 cin>>n>>m;
 ll tot=n*(n+1);
 vector<ll>v;
 tot/=2;
 ll mn=n;
 map<ll,ll>mp;
 if(m<mn||m>tot) cout<<-1<<endl;
 else {
    ll lst=n;
    ll rem=n-1;
    ll need=m;
    while(need&&lst>0){
      
    ll  now=lst;
    now=min(now,need-rem);
    mp[now]=1;
    v.push_back(now);
    //cerr<<now<<' '<<lst<<' '<<need<<' '<<rem<<endl;
   lst=now-1;
    rem--;
    need-=(now);



    }
    cout<<v[0]<<endl;
    for(int i=1;i<v.size();i++){
      cout<<v[i-1]<<' '<<v[i]<<endl;
    }
    ll last=v[v.size()-1];
    for(int i=1;i<=n;i++){
      if(mp[i]==0) {
        cout<<last<<' '<<i<<endl;
        last=i;
      }
    }
 
  }
  }
  }
  

