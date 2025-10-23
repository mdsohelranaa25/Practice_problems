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

 priority_queue<ll>pq;
 ll n;
 cin>>n;
map<ll,ll>mp;

for(int i=0;i<n;i++){
    ll x,y;
    cin>>x>>y;
    if(x==1){
    mp[y]++;
    
    }
    else{
   ll temp[32];
   bool f=0;
   for(int j=0;j<=30;j++) temp[j]=mp[j];

   for(ll j=0;j<=30;j++){
    x=y;
    if((1ll<<j)&y){
        if(temp[j]==0){
            f=1;
            break;

        }
        else{
            //cerr<<j<<' '<<temp[j]<<' '<<mp[j]<<endl;
            temp[j]--;
            temp[j+1]+=temp[j]/2;
        }
    }
    else temp[j+1]+=temp[j]/2;
   }
    if(f) no;
   else yes;
  
    }
    
}


  }
  
  

