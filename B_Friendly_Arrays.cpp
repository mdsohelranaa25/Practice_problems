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
    
    vc(a,n);
  
    vc(b,m+1);

    itr(i,n) cin>>a[i];
itr(i,m) cin>>b[i];
m++;
map<ll,ll>mp;
for(auto x:a){
    bitset<40>k=x;
    itr(i,40){
        mp[i]+=k[i];
    }
}
map<ll,ll>mpb;
itr(i,m){
 ll x=b[i];
 bitset<40>bitb=x;
 itr(j,40) mpb[j]+=bitb[j];
}
//cerr<<n<<' '<<m<<endl;
//map<ll,ll>res;
ll mn=LLONG_MAX,mx=0;
for(auto x:b){

bitset<40>kk=x;
ll sm=0;
ll smm=0;
itr(i,40){
    if(kk[i]==1){
        if(n%2) {sm+=1<<i;
            smm+=1<<i;
        }

    }
    else{
        if(mp[i]%2) {
            
            smm+=1<<i;
            if(mpb[i]==0||n%2!=0) sm+=1<<i;
            
        }
        else{
            if(mpb[i]>0&&n%2) smm+=1<<i;
        }
    }
   // cerr<<sm<<' '<<mp[i]<<endl;
}
//cerr<<sm<<endl;
mn=min(sm,mn);
mx=max(mx,smm);

}
cout<<mn<<' '<<mx<<endl;

  }
  }
  

