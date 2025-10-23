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
 vector<vector<ll>>v(n,vector<ll>(m));
 itr(i,n){
    itr(j,m){
    char x;
    cin>>x;
    if(x=='B') v[i][j]=1;
    else v[i][j]=2;
    }
 }
 if(v[0][0]==v[n-1][m-1]||v[0][m-1]==v[n-1][0]) yes;
 else{
    bool f=0;
ll a=v[0][0],b=v[0][m-1],c=v[n-1][0],d=v[n-1][m-1];
if(a==b){
int i=n-1;
for(int j=0;j<m;j++){
    if(v[i][j]==a){
        f=1;
        break;
    }

}


}
 if(a==c){
    ll j=m-1;
    for(int i=0;i<n;i++){
        if(v[i][j]==a){
            f=1;
            break;
        }
    }
  
}
 if(b==d){
    ll j=0;
    for(int i=0;i<n;i++){
        if(v[i][j]==b){
            f=1;
            break;
        }
    }
}
if(c==d){
    ll i=0;
    for(int j=0;j<m;j++){
        if(v[i][j]==c){
            f=1;
            break;
        }
    }
}
if(f) yes;
else no;

 }

  }
  }
  

