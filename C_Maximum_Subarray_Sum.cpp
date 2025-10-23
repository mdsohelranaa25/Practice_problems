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
  #define LLONG_MAX 1000000000000000000
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
 
ll n,k;
cin>>n>>k;
ll nn=n;
string s;
cin>>s;
vc(v,n);
vc(vv,n);
itr(i,n){
  cin>>v[i];
  vv[i]=v[i];
  
}
string ss=s;
ll low=0,hi=nn-1;
ll i=0;
while(i<n&&v[i]<0){
  i++;
  low++;
} 
n=v.size()-1;
while(n>low&&v[n]<0){
 
  n--;
  hi--;

}
//cerr<<low<<' ';

 i=low;
ll sum=0;
ll lind=-1;
ll mxx=0;
ll lll=0;
ll submax=0,subsmm=0;
s=ss;
for(int i=low;i<=hi;i++){
  if(s[i]=='0'){
    submax=max(submax,subsmm);
    lind=i;
    subsmm=0;
  }
  subsmm=max(subsmm+v[i],v[i]);
  submax=max(submax,subsmm);
}
 //cerr<<"submax subsum lind"<<submax<<' '<<subsmm<<' '<<lind<<' '<<low<<' '<<hi<<endl;
if(submax>k||(submax!=k&&lind==-1)){
  cout<<"No"<<endl;
  continue;
}
else{
i=low;

n=hi+1;

ll mx=0;
sum=0;
ll cnt=0,cn=0;
mxx=0;

cn=0;

cnt=0;
if(lind!=-1){
bool f=0;
for(int i=lind;i<=hi;i++){
  cnt+=v[i];
  cn=max(cn,cnt);

}
// cerr<<"cn"<<cn<<endl;
cnt=0;
ll psum=0;

for(int i=lind-1;i>=low;i--){
  if(s[i]=='0') break;
  cnt+=v[i];
  psum=max(psum,cnt);

}
cn+=psum;
// cerr<<"cn "<<cn<<' '<<psum<<endl;
psum=k-cn;
vv[lind]=psum;
// cerr<<lind<<endl;
// cerr<<"lind psum "<<lind<<' '<<psum<<endl;
for(i=low;i<=hi;i++){
  if(s[i]=='0') {
    
     if(i==lind){
      continue;
      
     }
     else vv[i]=-LLONG_MAX;
     
  }


}
}

//cerr<<"rem= "<<t<<' '<<rem<<' '<<low<<' '<<hi<<' '<<"i "<<i<<endl;

cout<<"Yes"<<endl;
itr(i,nn) cout<<vv[i]<<' ';
endd;
}

}

  }



