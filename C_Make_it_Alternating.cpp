                                                                                                                                                
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
#define MOD 998244353
  #define f first
  #define sc second
#define endl '\n'
const int N=1e5+5;

vector<ll> fact_ar(1e6);

void goo(){
fact_ar[0]=1;
    ll cnt=1;
    for(ll i=1;i<=2e5+9;i++){
        cnt*=i;
        cnt%=MOD;
        fact_ar[i]=cnt;
    }
}
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
   goo();
   //precomp();
  tt{
  string s;
 cin>>s;
 ll n=s.length();
 bool f=0;
 ll rmv=0;
 ll ans=1;
 ll cnt=0;
 
 for(int i=1;i<n;i++){
    
    if(s[i]!=s[i-1]){
        cerr<<cnt<<' '<<i<<endl;
        if(cnt>0){
        
       
          ans*=(cnt+1);
          ans%=MOD;
        rmv+=cnt;
        cnt=0;
        }
        cnt=0;
    }
    else cnt++;

 }
 if(cnt>0){
rmv+=(cnt);
ans*=(cnt+1);
ans%=MOD;

 }
 cout<<rmv<<' ';
 ans*=fact_ar[rmv];
 ans%=MOD;

 cout<<ans<<endl;
  }
  }

  

  
  
  

