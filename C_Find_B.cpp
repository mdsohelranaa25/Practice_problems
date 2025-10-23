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
   ll st=0;
  tt{

 
ll n,k;
cin>>n>>k;
vc(v,n);
itr(i,n)cin>>v[i];

vector<ll>pre(n+5),ones(n+5);
for(int i=0;i<n;i++){
    
    ones[i+1]+=ones[i];
    if(v[i]==1) ones[i+1]++;
    pre[i+1]=pre[i]+v[i];
}
pre[0]=0;
while(k--){
   
   
    ll x,y;
    cin>>x>>y;
    
    ll now=pre[y]-pre[x-1];
    if(x==y){ no;
    continue;}
    ll cur=y-x+1;
    ll r=y,l=x;
    ll on=ones[r]-ones[l-1];
    ll rem=cur-on;
    if(now>=(on*2+rem)) yes;
    else no;
    //ll need=(cur-1)*2+1;
   
}
  }
  }
  

