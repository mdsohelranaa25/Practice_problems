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
ll cnt_div[N]={0};
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
 ll n;
 cin>>n;
 vector<string>v(n);
 itr(i,n) cin>>v[i];
 vector<pair<ll,string>>vs;
 itr(i,n){
    vs.push_back({v[i].size(),v[i]});
 }
 srt(vs);

 v.clear();
 itr(i,n){
    v.push_back(vs[i].sc);
 }
 ll ans=0;
vector<map<ll,ll>>mp(6);
for(auto s:v){
    ll a=0,b=0;
    ll tot=0;
    for(auto x:s) tot+=x-'0';
    for(int len=s.size()+2-s.size()%2;len<=10;len+=2){
        if(len>2*s.size()) break;
        a=0,b=0;
        for(int i=0;i<s.size()-len/2;i++){
            a+=s[i]-'0';
            b+=s[s.size()-i-1]-'0';
        }
        ans+=mp[len-s.size()][tot-2*a];
      //  cerr<<len-s.size()<<' '<<tot-2*a<<' '<<mp[len-s.size()][tot-2*a]<<' '<<len-2*b<<' '<<"len "<<len<<' '<<mp[len-s.size()][tot-2*b]<<endl<<endl;
        ans+=mp[len-s.size()][tot-2*b];

    
        
    }
    ans++;
    //cerr<<s.size()<<' '<<tot<<endl;
    mp[s.size()][tot]++;
}
cout<<ans<<endl;
  }
  

