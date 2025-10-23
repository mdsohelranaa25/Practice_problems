		/*
			//! In The Name Of Allah
				
			
				
				
		*/                                                                                                                                                  
  #include<bits/stdc++.h>
  using namespace std;
  #define tt int t;cin>>t;while(t--)
  #define itr(i,a) for(int i=0;i<a;i++)
#define ittr(i,bg,a) for(int i=bg;i<a;i++)
   #define yes cc++
#define no cc = cc
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
ll cc=0;

  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  
 ll n=3;
 ll x;

for(int i=0;i<10;i++){
    for(int j=i;j<=9;j++){
        for(int k=j;k<=9;k++){
             map<ll,ll>mp;
            mp[i]++;
            mp[j]++;
            mp[k]++;


 bool f=0;

 if(mp[0]){
    f=1;

    if(mp[0]>=2&&mp[3]) yes;
    else if(mp[4]&&mp[9]) yes;
    else if(mp[5]&&mp[8]) yes;
    else if(mp[6]&&mp[7]) yes;
    else if(mp[1]&&mp[2]) yes;
    else f=0;
}
 if(mp[1]&&f==0){
    f=1;
    if(mp[1]>=3) yes;
//else if(mp[2]&&mp[0]) yes;
    else if(mp[3]&&mp[9]) yes;
    else if(mp[4]&&mp[8]) yes;
    else if(mp[5]&&mp[7]) yes;
    else if(mp[6]>=2) yes;
    else f=0;

}
 if(mp[2]&&f==0){
    f=1;
    
    if(mp[3]&&mp[8]) yes;
    else if(mp[2]>1&&mp[9]) yes;

    else if(mp[4]&&mp[7]) yes;
    else if(mp[5]&&mp[6]) yes;
    else f=0;
}
 if(mp[3]&&f==0){
    f=1;
    if(mp[3]>=2&&mp[7]) yes;
    else if(mp[5]>=2) yes;
    else if(mp[4]&&mp[6]) yes;
   // else if(mp[2]&&mp[8]) yes;
    else f=0;
   // cerr<<f<<endl;
    
}
 if(mp[4]&&f==0){
    f=1;
    if(mp[4]>=2&&mp[5]) yes;
  //  else if(mp[0]&&mp[9]) yes;

    else f=0;


}
 if(f==0&&mp[5]){
    f=1;
    if(mp[9]>=2) yes;
    else f=0;
}
 if(f==0&&mp[6]){
    f=1;
    if(mp[8]&&mp[9]) yes;
    else f=0;

}
 if(f==0&&mp[7]){
    f=1;
    if(mp[7]>=2&&mp[9]) yes;
    else if(mp[8]>=2) yes;
    else f=0;
}
 if(!f) no;
        }
    }
} cout<<cc;


}
  
  

