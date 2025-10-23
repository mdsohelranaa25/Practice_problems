                                                                                                                                            
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
 set<ll>st;
 vector<vector<ll>>g(n+5);
 map<ll,vector<ll>>mp;
 for(int i=1;i<=n;i++){
    cout<<"?"<<' '<<i<<' '<<n<<' ';
    for(int j=1;j<=n;j++) cout<<j<<' ';
     cout<<endl;
 cout.flush();
 ll cnt;
 cin>>cnt;
 cerr<<cnt<<' ';
 st.insert(cnt);
 mp[cnt].push_back(i);
 }
 vector<ll>final;
 vector<ll>v;
 for(auto x:st) v.push_back(x);
rsrt(v);
ll now=mp[v[0]][0];
final.push_back(now);
for(int j=1;j<v.size();j++){
     now=v[j];
     ll pre=final[final.size()-1];
     for(auto x:mp[now]){
     cout<<'?'<<' '<<pre<<' '<<2<<' '<<pre<<' '<<x<<endl;
     cout.flush();
     ll cnt;
     cin>>cnt;
     cerr<<cnt<<' ';
     if(cnt==2) {
        final.push_back(x);
        break;
     }



     }

}
cout<<'!'<<' '<<final.size()<<' ';
for(auto x:final) cout<<x<<' ';
endd;
cerr<<endl;



  }
  }
  
