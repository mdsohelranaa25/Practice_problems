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
     ll tc=1;
    tt{
   string s;
   cin>>s;
   ll nn;
   cin>>nn;
   ll n=s.length();
   ll pre[n+5]={0};
   ll suf[n+5]={0};
   pre[0]=0;
   for(int i=1;i<=s.length();i++){
    if(s[i]==s[i-1]){
        pre[i]=pre[i-1];
    }
    else {
        pre[i]=i;
    }
    
   }
  
   n--;
   suf[n]=n;
   for(int i=n-1;i>=0;i--){
    if(s[i]==s[i+1]) suf[i]=suf[i+1];

   
   else suf[i]=i;
   }
   cout<<"Case "<<tc++<<":"<<endl;
   set<ll>st;
   while(nn--){
    ll a,b;

    cin>>a>>b;
    ll cnt=0;
    if(a==2) {
        s[b]='#';
        st.insert(b);

    }
    else {
        ll i=b;
       ll aa=pre[b];
       ll bb=suf[b];
       for(auto x:st){
        if(x==b){
            cout<<1<<endl;
            break;
        }
        if(x>=aa&&x<b){
            aa=x+1;
        }
        if(x>b&&x<=bb){
            bb=x-1;
        }
        
       }
       ll len=bb-aa+1;
       cout<<len<<endl;
    }
   }
  
    }
    }
    
  
  