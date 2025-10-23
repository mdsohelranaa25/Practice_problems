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
 ll now=1;
 ll n,m,d;
 cin>>n>>m>>d;
 vc(v,n);
 map<ll,ll>mp,taken;

 map<ll,vector<ll>>value;
 for(auto &a:v) cin>>a;
  itr(i,n) mp[v[i]]++;
 vector<ll>vv(n);
 vv=v;
 srt(vv);
 now=1;
 for(int i=0;i<n;i++){
    if(value[vv[i]].size()<mp[vv[i]]){
        ll noww=vv[i];
        value[noww].push_back(now);
      //  cout<<now<<' '<<noww<<' '<<value[now][0]<<endl;
        while(noww+d<m){
       //cerr<<noww+d<<' ';
            ll ind=upper_bound(vv.begin()+i,vv.end(),noww+d)-vv.begin();
           // cerr<<ind<<endl;
           while(ind<n&&value[vv[ind]].size()>=mp[vv[ind]]) ind++;
           if(ind<n&&value[vv[ind]].size()<mp[vv[ind]]){
            noww=vv[ind];
            value[noww].push_back(now);

           }
           else{
            break;
           }

        }
        now++;

    }

 }
 cout<<now-1<<endl;
 map<ll,ll>used;
 for(auto x:v){

    //cerr<<x<<' '<<value[x].size()<<endl;
    ll i=used[x];
    used[x]++;
    cout<<value[x][i]<<' ';
   //cerr<<endl;
 }



  }
  

