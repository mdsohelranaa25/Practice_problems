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
vector<pair<ll,ll>>a,b,c;

itr(i,n){
    ll x;
    cin>>x;
    a.push_back({x,i});
}
itr(i,n){
    ll x;
    cin>>x;
    b.push_back({x,i});
}
itr(i,n){
    ll x;
    cin>>x;
    c.push_back({x,i});
}
rsrt(a);
rsrt(b);
rsrt(c);
ll sum=0,ans=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
              int idx1 =a[i].second;
                    int idx2 = b[j].second;
                    int idx3 = c[k].second;
                     if (idx1 != idx2 && idx1 != idx3 && idx2 != idx3) {
                         sum = a[i].first + b[j].first + c[k].first;
                        ans = max(ans, sum);
                    }

        }
    }

}
cout<<ans<<endl;

}
  }
  
  

