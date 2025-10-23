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
 ll n,k;
 cin>>n>>k;
 vc(v,n);
 map<ll,ll>mp;
 bool f=0;
 itr(i,n) {
    cin>>v[i];
    mp[v[i]]++;
    if(mp[v[i]]>=2) f=1;
 }
 srt(v);
 if(k>=3) cout<<0<<endl;
 else if(f&&k)cout<<0<<endl;
 else if(k==0) cout<<v[0]<<endl;
else if(k==1){
    ll mn=v[0];
    for(int i=1;i<n;i++){
        mn=min(mn,v[i]-v[i-1]);

    }
    cout<<mn<<endl;
}
else{
    ll mn=v[0];
    ll now=0;
    f=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            now=v[j]-v[i];
            if(mp[now]) {f=1; break;}
            mn=min(mn,now);
            ll uind=upper_bound(v.begin(),v.end(),now)-v.begin();
            if(uind<n){
                mn=min(mn,v[uind]-now);
            }
            ll lind=lower_bound(v.begin(),v.end(),now)-v.begin();
            lind--;
            if(lind>=0) mn=min(mn,now-v[lind]);

        }
        
    }
    if(f) cout<<0<<endl;
    else
    cout<<mn<<endl;
}

  }
  }
  

