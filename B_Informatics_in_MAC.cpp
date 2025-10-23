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
 map<ll,ll>mp;
 vc(v,n);
 itr(i,n){
    cin>>v[i];
    mp[v[i]]++;
 }
 if(mp[0]==0){
    cout<<n<<endl;
    for(int i=1;i<=n;i++){
        cout<<i<<' '<<i<<endl;
    }
 }
 
 else{
    bool f=0;
  //  ll mn=INT_MAX;
    ll val=0;
    // kotodur porjonto contigious vabe ache ..kintu kono element single thakle sekhane false sure
    for(int i=0;i<=n;i++){
        if(mp[i]==0) {
            val=i-1;
            //val=i;
            break;
        }
        else if(mp[i]==1) {
            f=1;
            break;
        }   
    }
    if(f) {cout<<-1<<endl;
    }
   else{
  ll i=0;
  set<ll>st;
  // pos vector nilam position gulo serial e rakhte..shuru ebong sesh position

  vector<ll>pos;
 // cerr<<val<<' '<<t<<' '<<mn<<endl;
 // tokhon e ekta segment hobe jokhn ami contingious je last value paichilam zero seta porjonto  sob pabo
 // tai set er size zero theke value.mane value+1 r set er majhe just value er soman ba choto element gulo nibo
  while(i<n){
    st.clear();
    pos.push_back(i+1);
    for(i;i<n;i++){
        if(v[i]<=val) st.insert(v[i]);
if(st.size()==(val+1)) break;

    }
    if(st.size()==(val+1)){
       pos.push_back(i+1);
        i++;
    }
    
  }
// check krtechi pos er size vag 2 mane koita segments..seta oi value(mex er soman..cause mex 7 hoile ) er soman porjont paichi kina..
  if(pos.size()/2<2){
    cout<<-1<<endl;
  }
  else{
    cout<<pos.size()/2<<endl;
   ll m;
   
m=pos.size()-1;
//cerr<<m<<endl;
if(m%2==0){
    pos.pop_back();
    m--;
    pos[m]=n;
}
   //cerr<<pos[m]<<endl;
    for(int i=0;i<pos.size();i+=2){
        cout<<pos[i]<<' '<<pos[i+1]<<endl;
    }
  }

}

 }

  }
  }
  

