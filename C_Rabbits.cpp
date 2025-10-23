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
 cin >>n;
 string s;
 cin>>s;
 ll i=0,j=0;
 ll cnt0=0,cnt1=0,cntdblzero=0,cnttot0=0;
 bool sesh=0;
 bool f=0;
 if(s[0]=='1') j=1;
 while(i<n){
   // cerr<<i<<' '<<cnt1<<endl;
    if(s[i]=='0'){
        cnt1=0;
        cnt0++;
        if(cnt0==1) cnttot0++;
        if(cnt0==2) cntdblzero++;
       // cerr<<i<<' '<<cnt0<<endl;
    }
    else{
        cnt1++;
        cnt0=0;
        if(cnt1==2){
           // cerr<<i<<' '<<"I "<<endl;
            while(i<n&&s[i]=='1') i++;
            i--;
            sesh=true;
        }
       // cerr<<cnt1<<' '<<i<<endl;
    }
    if(sesh){
        if(cntdblzero){
            j=i;
            cnt1=0,cnt0=0,cnttot0=0,cntdblzero=0,sesh=false;
        }
        else {
            if(cnttot0%2) { 
               // cerr<<j<<endl;
                if(j==0){
                    j=i;
            cnt1=0,cnt0=0,cnttot0=0,cntdblzero=0,sesh=false;
                }
                else{


              //  cerr<<cnttot0<<' '<<i<<endl;
                f=1;
            break;}
                }
        else {
            j=i;
            cnt1=0,cnt0=0,cnttot0=0,cntdblzero=0,sesh=false;
        }
        
        }

    }
    else if(i==n-1){
        if(s[i]=='1'){
             if(cntdblzero){
                j=i;
            cnt1=0,cnt0=0,cnttot0=0,cntdblzero=0,sesh=false;
        }
        else {
            if(cnttot0%2) { 
                if(j==0){
                    j=i;
                    
                     cnt1=0,cnt0=0,cnttot0=0,cntdblzero=0,sesh=false;
                     continue;

                }
                else{
              //  cerr<<cnttot0<<' '<<i<<endl;
                f=1;
            break;}
                }
        else {
            j=i;
            cnt1=0,cnt0=0,cnttot0=0,cntdblzero=0,sesh=false;
        }
        
        }

        }
   



  }
   i++;
}
   if(f) no;
  else yes;

 
  }
}
  

