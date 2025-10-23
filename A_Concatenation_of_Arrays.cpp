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
 vector<ll>all;
 vector<vector<ll>>v(n,vector<ll>(2));
 itr(i,n){
    ll x,y;
    cin>>x>>y;
    all.push_back(x);
    all.push_back(y);
    v[i][0]=x;
    v[i][1]=y;
 }
 srt(all);
 vector<pair<ll,ll>>pr;
 for(int i=0;i<n;i++){
    ll x=v[i][0];
    ll y=v[i][1];
    ll f_in=upper_bound(all.begin(),all.end(),x-1)-all.begin();
    ll s_in=upper_bound(all.begin(),all.end(),y-1)-all.begin();
   // if(x<y) s_in--;
    s_in=max(0LL,s_in);
    f_in=max(0LL,f_in);
    pr.push_back({f_in+s_in,i});
 }
sort(pr.begin(),pr.end(),[&](pair<ll,ll>a,pair<ll,ll>b){
if(a.f==b.f){
    ll x=a.sc;
    ll y=b.sc;
    if(v[x][0]==v[y][0]) return v[x][1]<v[y][1];
    return v[x][0]<v[y][0];
}
return a.f<b.f;
});
 vector<ll>ans;
 for(int i=0;i<n;i++){
    ll ind=pr[i].sc;
    ans.push_back(v[ind][0]);
    ans.push_back(v[ind][1]);
 }
 for(auto x:ans){
    cout<<x<<' ';

 }
 cout<<endl;

  }
  }
  

/*1 3 1 3 

1 3 1 4 

1 3 2 1 

1 3 2 2
*/