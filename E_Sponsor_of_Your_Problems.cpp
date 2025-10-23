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
 string s,ss;
 cin>>s>>ss;
 ll boro=-1,choto=-1;
 ll n=s.length();
 ll cnt=0;
 bool done=0;
 itr(i,n){
    if(boro!=-1&&choto!=-1) break;
   else if(boro==-1&&choto==-1&&abs(s[i]-ss[i])>=2){
        break;
    }
    if(boro==-1){
        if(s[i]==ss[i]) cnt+=2;
        else {
            cnt++;
            if(s[i]>ss[i]) boro=1;
            else boro=2;
        }
    }
    else {
        if(boro==1){
            if(s[i]=='0'){
                cnt++;

            }
            else if(s[i]>'1'){
                choto=1;

            }
            else {
                if(ss[i]=='0')
                cnt++;
                choto=1;
              
            }
        }
        else{
            if(ss[i]=='0'){
                cnt++;

            }
            else if(ss[i]>'1'){
                choto=1;

            }
            else {
                 if(s[i]=='0')
                cnt++;
                choto=1;
              
            }

        }
    }
}
 //cerr<<cnt<<endl;
 ll ans=cnt;
 cnt=0;
done=0;
choto=-1,boro=-1;
 itr(i,n){
    if(boro!=-1&&choto!=-1) break;
    else if(boro==-1&&choto==-1&&abs(s[i]-ss[i])>=2){
        break;
    }
    if(choto==-1){
        if(s[i]==ss[i]) cnt+=2;
        else {
            cnt++;
            if(s[i]>ss[i]) choto=2;
            else choto=1;
        }
    }
    else {
        if(choto==1){
            if(s[i]=='9') cnt++;
            else if(s[i]<'8'){
                boro=1;

            }
            else {
                if(ss[i]=='9') cnt++;
                boro=1;
            }
        }
        else{
            if(ss[i]=='9') cnt++;
            else if(ss[i]<'8'){
                boro=1;

            }
            else {
                if(s[i]=='9') cnt++;
                boro=1;
            }

        }
    }
}

 ans=min(ans,cnt);
cout<<ans<<endl;

  }
  }
  

