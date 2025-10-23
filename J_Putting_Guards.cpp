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
   ll cs=0;
  tt{
    cs++;
    cout<<"Case "<<cs<<": ";
 ll n,m;
 cin>>n>>m;
 vector<vector<char>>v(n,vector<char>(m));
 itr(i,n){
    itr(j,m) cin>>v[i][j];
 }
 ll count=0;
 itr(i,n){
    itr(j,m){
        int ff=0;
        if(v[i][j]=='1'){
            
            ll cc=0;
            if(((i<n-1&&v[i+1][j]!='1')||i==n-1)&&(j==0||v[i][j-1]=='0')) cc++;
          //  cerr<<cc<<' ';
             if(((i<n-1&&v[i+1][j]!='1')||i==n-1)&&((j<m-1&&v[i][j+1]!='1')||j==m-1)) cc++;
        // cerr<<"cc ";
          // cerr<<cc<<' '<<i<<' '<<j<<' '<<v[i+1][j]<<' '<<v[i][j+1];
            if(((i==0||j==0)||(v[i-1][j-1]!='1'))&&((i>0&&v[i-1][j]!='1')||i==0)&&((j>0&&v[i][j-1]!='1')||j==0)) cc++;
          //  cerr<<cc<<' ';
             if(((i==0||j==m-1)||(v[i-1][j+1]!='1'))&&((i>0&&v[i-1][j]!='1')||i==0)&&((j<m-1&&v[i][j+1]!='1')||j==m-1)) cc++;
        //  cerr<<endl;
            count+=cc;
        
           
                
                if((j>0&&v[i][j-1]=='1')&&(i>0&&v[i-1][j-1]=='0')&&(i>0&&v[i-1][j]=='1')) ff++;
               // cerr<<ff<<' ';
                if((j<m-1&&v[i][j+1]=='1')&&(i>0&&v[i-1][j+1]=='0')&&(i>0&&v[i-1][j]=='1'))ff++;
               // cerr<<ff<<' ';
                 if((j>0&&v[i][j-1]=='1')&&(i<n-1&&v[i+1][j-1]=='0')&&(i<n-1&&v[i+1][j]=='1')) ff++;
                // cerr<<ff<<' ';
                 if((j<m-1&&v[i][j+1]=='1')&&(i<n-1&&v[i+1][j+1]=='0')&&(i<n-1&&v[i+1][j]=='1')) ff++;
                count+=ff;
               // cerr<<endl;
                
            
          //  cerr<<cc<<' '<<ff<<endl;

        }
    
    }
}
 cout<<count<<endl;
    

  }
  }
  

