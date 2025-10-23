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
 ll n,m,k;
 cin>>n>>m>>k;
 vector<ll>pre(m+5);
 vc(v,m+1);
 vc(vv,m+1);
 for(int i=1;i<=m;i++) cin>>v[i];
  for(int i=1;i<=m;i++) cin>>vv[i];
  while(k--){
    ll x;
    cin>>x;
ll ind=upper_bound(v.begin(),v.end(),x)-v.begin();
ind--;
ll extra=x-v[ind];
//cerr<<ind<<' '<<v[ind]<<' '<<vv[ind]<<endl;
if(v[ind]==x) cout<<vv[ind]<<' ';

else{
    ll pr=v[ind+1]-v[ind];
    ll time=(vv[ind+1]-vv[ind]);
   //cerr<<"pr "<<pr<<' '<<time<<' ';
    time=(extra*time)/pr;
   // cerr<<time<<' ';
 
   
    cout << vv[ind]+time<<' ';

}
  }
  endd;
  }
  }
  

