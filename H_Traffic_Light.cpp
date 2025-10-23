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
 char c;
 cin>>n>>c;
 string s;
 cin>>s;
 ll first=0;
 if(c=='g') { cout<<0<<endl;
continue;}
 itr(i,n) {if(s[i]=='g') {first=i+1;
break;}
 }
ll ind=-1;
ll i=n-1;
//cerr<<"first "<<first <<" ";
while(i>=0&&s[i]!='g') {if(s[i]==c) ind=i;
     i--;
}

ll ans=0;
if(ind!=-1) ans+=(n-ind-1)+first;
//cerr<<"ind "<<ind<<' '<<ans<<' ';
 i=0;
bool f=0;ll last=-1;
while(i<n){
    if(s[i]=='g'){
        if(last==-1) {i++;continue;
        }
        else ans=max(ans,i-last);
        last=-1;
        i++;
    }
    if(s[i]==c){
        if(last==-1) last=i;
        i++;

    }
    else 
    i++;

}
cout<<ans<<endl;

  }
  }
  

