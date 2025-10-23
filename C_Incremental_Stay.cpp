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
n=2*n;
vc(v,n);
itr(i,n)cin>>v[i];
ll ans=0;
ll i=1;


vc(lasttheke,n+5);
vc(firsttheke,n+5);
i=n-1;
while(i>=0){
    lasttheke[i]=lasttheke[i+1]+v[i];
    i--;
}
i=1;
firsttheke[0]=v[0];
while(i<n){

    firsttheke[i]=firsttheke[i-1]+v[i];
    i++;
}

vc(ev,n+5);
vc(od,n+5);
if(n>=2) ev[n-2]=v[n-1]-v[n-2];
 i=n-4;
while(i>=0){
    ev[i]=ev[i+2]+(v[i+1]-v[i]);
   // cerr<<ev[i]<<endl;
    i-=2;

}
if(n>=3){
i=n-3;
od[i]=v[i+1]-v[i];
//cerr<<od[i]<<' ';
i=n-5;
while(i>=0){
    od[i]=od[i+2]+(v[i+1]-v[i]);
   // cerr<<od[i]<<' ';
    i-=2;
}
}
//cerr<<endl;
cout<<ev[0]<<' ';

for( i=1;i<n/2;i++){
    ll anss=lasttheke[n-i]-firsttheke[i-1];
    //cerr<<anss<<endl;
    if(i%2){
        ll left=(i<(ll)od.size()?od[i]:0);
        ll right=((n-i)<(ll)od.size()?od[n-i]:0);
        anss+=(left-right);
    }
    else{
        ll left=(i<(ll)ev.size()?ev[i]:0);
        ll right=((n-i)<(ll)ev.size()?ev[n-i]:0);
        anss+=(left-right);
    }
    cout<<anss<<' ';


}



endd;
  }
  }
