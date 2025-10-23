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
 const ll N=1e6+5;
 ll spf[N];
  vector<bool>isprime(N,false);
  vector<ll>primes;
  ll cnt_div[N]={0};
  void sp(){
    for(int i=2;i<=N;i++){
        spf[i]=i;
    }
    for(ll i=2;i<=N;i++){
        if(spf[i]==i){
            for(ll j=i*i;j<=N;j+=i){
                spf[j]=min(i,spf[j]);
            }
        }
    }

  }
  vector<ll>divisor[N];
  void divis(){
 
    for(int i=2;i<=N;i++){

    }
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
        // sp();
       sieve();
     // divis();
    tt{
   
ll n;
cin>>n;
   string s;
   cin>>s;
   
//    for(int i=0;i<n;i++) cout<<primes[i]<<' ';
//    endd;

ll i=0;
set<ll>stt;


ll cnt=0;
ll m=1;
map<ll,ll>mp;
set<ll>st;
ll mn=LLONG_MAX;
ll mx=0;
ll mm;

ll pm=0;
while(n>1){
  while(n%primes[pm]!=0) pm++;
  mm=primes[pm];
  st.insert(mm);
  mn=min(mn,mm);
  mx=max(mx,mm);
  while(n%mm==0){
    n/=mm;
    mp[mm]++;
    cnt++;

  }
}

//cout<<st.size()<<endl;
if(st.size()>2) cout<<"tie"<<endl;
else{
    
    if(abs(mp[mn]-mp[mx])>1) cout<<"tie"<<endl;
    else{
        if(cnt%2==0){
            (s[0]=='A')?cout<<"Bob"<<endl:cout<<"Alice"<<endl;
        }
        else{
            (s[0]=='A')?cout<<"Alice"<<endl:cout<<"Bob"<<endl;
        }
    }
}



  
    }
    }
    
  
  