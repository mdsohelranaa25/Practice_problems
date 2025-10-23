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
  #define ll int
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
   ll ts=0;
  tt{
    ts++;
 ll n;
 cin>>n;
 vc(v,n);
 itr(i,n) cin>>v[i];
 map<ll,ll>mp;
 itr(i,n) mp[v[i]]++;
 ll gc=v[0];
 itr(i,n) {gc=__gcd(gc,v[i]);
  //  cout<<gc<<' ';
 }
 //endd;
 if(mp[gc]) cout<<n-mp[gc]<<endl;
 else {
  
  set<ll>st;
  for(auto a:v) st.insert(a);
  set<ll>news;
  ll cnt=0;
  for(cnt=0;!st.count(gc);cnt++){
    for(auto a:st){
      for(auto b:v){
        news.insert(__gcd(a,b));
      }
    }
    st=news;
  }
  cout<<n-1+cnt<<endl;
  }
 
}
  }