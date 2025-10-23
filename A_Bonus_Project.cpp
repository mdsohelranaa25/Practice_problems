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
  ll n,k;
  cin>>n>>k;
  vc(v,n);
  itr(i,n )cin>>v[i];
  vc(vv,n);
  itr(i,n) cin>>vv[i];
  vc(ans,n);
  ll cnt=0;
 for(int i=n-1;i>=0;i--){
    ans[i]= v[i]/vv[i];
    //cerr<<cnt<<' ';
    cnt+=ans[i];
    //cerr<<cnt<<' '<<ans[i]<<endl;
    if(cnt>=k){
        ll beshi=cnt-k;
        ans[i]-=beshi;
        break;
    }
  }
  if(cnt<k) itr(i,n) cout<<0<<' ';
  else for(auto x:ans) cout<<x<<' ';
  endd;
  }
  

