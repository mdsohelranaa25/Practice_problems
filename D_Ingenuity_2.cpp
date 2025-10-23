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
string s;
cin>>s;
map<char,ll>mp;
itr(i,n){
    mp[s[i]]++;
}
if(abs(mp['W']-mp['E'])%2||(mp['N']-mp['S'])%2) no;
else if(n==2&&mp[s[0]]!=2) no;
else {
    bool fh=0;
    ll mn=min(mp['S'],mp['N']);
    ll cs=0,cn=0,cw=0,ce=0;
if(abs(mp['S']-mp['N'])){
    ll abso=abs(mp['S']-mp['N']);
        abso/=2;
    if(mp['S']>mp['N']){

        fh=1;
        itr(i,n){
            if(abso==0) break;
            else if(s[i]=='S'){
                s[i]='H';
                abso--;
            }
        }


    }
    else {

         fh=1;
        itr(i,n){
            if(abso==0) break;
            else if(s[i]=='N'){
                s[i]='H';
                abso--;
            }
        }
    }


}
else if(mp['N']>1){
   bool fn=0,fs=0;
    itr(i,n){
    if(s[i]=='S'&&fs==0)
    {
        fh=1;
        s[i]='H';
        fs=1;
    }
    if(s[i]=='N'&&fn==0){
         fh=1;
        s[i]='H';
        fn=1;
    }

    }
}


//---------------------
if(abs(mp['W']-mp['E'])){
    ll abso=abs(mp['W']-mp['E']);
        abso/=2;
    if(mp['W']>mp['E']){

        fh=1;
        itr(i,n){
            if(abso==0) break;
            else if(s[i]=='W'){
                s[i]='H';
                abso--;
            }
        }


    }
    else {

         fh=1;
        itr(i,n){
            if(abso==0) break;
            else if(s[i]=='E'){
                s[i]='H';
                abso--;
            }
        }
    }


}
else if(fh==0){
   bool fw=0,fe=0;
    itr(i,n){
    if(s[i]=='W'&&fw==0)
    {
        fh=1;
        s[i]='H';
        fw=1;
    }
    if(s[i]=='E'&&fe==0){
         fh=1;
        s[i]='H';
        fe=1;
    }

    }
}

itr(i,n){
    if(s[i]!='H') s[i]='R';
}
cout<<s<<endl;


}


  }
  }
  

