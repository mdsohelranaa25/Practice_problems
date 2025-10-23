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
vc(v,n);
itr(i,n){
    cin>>v[i];
}
vector<ll>ans;
ll ind=0;
ll i=1,j=n-2;
string s="";
ll boro=0,choto=0;
i=1;
if(v[0]>v[n-1]){
    ans.push_back(v[0]);
    ans.push_back(v[n-1]);
    ind=1;
    s+="LR";
}
else {
    ans.push_back(v[n-1]);
    ind=1;
    s+="RL";
     ans.push_back(v[0]);

}
while(i<j){
if(v[i]>ans[ind]&&v[j]>ans[ind]){
    if(v[j]>v[i]){
        ans.push_back(v[j]);
        ans.push_back(v[i]);
        ind+=2;
    s+="RL";
    }
    else {s+="LR";
         ans.push_back(v[i]);
        ans.push_back(v[j]);
        ind+=2;
    }
    i++;
    j--;
}
else if(v[i]<ans[ind]&&v[j]<ans[ind]){
    if(v[j]>v[i])
   {s+="LR";
         ans.push_back(v[i]);
        ans.push_back(v[j]);
        ind+=2;
    }
    else {
        ans.push_back(v[j]);
        ans.push_back(v[i]);
        ind+=2;
    s+="RL";
    }
    i++;
    j--;
}
else {
     if(v[j]>v[i])
   {
        ans.push_back(v[j]);
        ans.push_back(v[i]);
        ind+=2;
    s+="RL";
    }
    else {s+="LR";
         ans.push_back(v[i]);
        ans.push_back(v[j]);
        ind+=2;
    }
    i++;
    j--;

}


}

if(i==j) {s+="L"; ans.push_back(v[i]);
}
for(auto x:ans) cerr<<x<<' ';
cerr<<endl;

cout<<s<<endl;

  }
  }
  

