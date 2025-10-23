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
  tt{
 ll n;
 cin>>n;
 vc(v,n);
 itr(i,n) cin>>v[i];
 ll sum=0;
 itr(i,n) sum+=v[i];
 vector<ll>final;
priority_queue<ll>pq;
 map<ll,ll>mp;
 itr(i,n){
    mp[v[i]]++;
    if(mp[v[i]]>=2) pq.push(v[i]);
    if(!pq.empty()) final.push_back(pq.top());
 }
 n=final.size();
cerr<<sum<<' ';
 mp.clear();
 bool f=0;
 vector<ll>last;
 cerr<< " nn "<<n<<endl;
 for(int i=0;i<n;i++){
   sum+=final[i];
   if(f){
    if(final[i]==final[i-1]) last.push_back(final[i]);
    else last.push_back(last.back());
   }
   else if(i>0&&final[i]==final[i-1]){

        f=1;
        last.push_back(final[i]);
    }
   // sum+=pre[i+1];
 }
 cerr<<sum<<' ';
 n=last.size();
 vector<ll>pre(n+5);
 cerr<<" n "<<n<<endl;
 itr(i,n){
    cerr<<last[i]<<' ';
    pre[i+1]=pre[i]+last[i];
    sum+=pre[i+1];
 }
 cout<<sum<<endl;

  }
  }
  

