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
        string s;
        cin>>s;
        ll sev=0,four=0;
    ll n=s.length();
    itr(i,n) {
        if(s[i]=='4') four++;
        else sev++;
    }
    if(n%2){
        ll m=(n+1)/2;
        itr(i,m) cout<<4;
        for(int i=m;i<=n;i++) cout<<7<<endl;
    }
    ll cnt=0;
    if(four==sev&&(four+sev)==n) cout<<s<<endl;
   if(sev==n/2){
    itr(i,n){
        if(s[i]=='7') cnt++;
        if(s[i]!=7&&s[i]!=4){
            if(s[i]<'4') s[i]='4';
            else {
                s[i]='7';
                for(i+1;i<(n-cnt);i++){
                    s[i]='4';
                }
                for(i;i<n;i++) s[i]='7';
                break;
            }
        }
    }
    cout<<s<<endl;

   }
   else {
    


   }
  
        
    
   
  
    }
    }
    
  
  