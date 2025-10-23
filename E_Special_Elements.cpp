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
 vc(pre,n+1);
 for(int i=0;i<n;i++){
    pre[i+1]=pre[i]+v[i];
 }
 ll ans=0;
int max_val = *max_element(v.begin(), v.end());
vector<ll>mark(max_val+4,0);
vector<bool>found(max_val+5,0);
itr(i,n) mark[v[i]]=1;
for(int i=1;i<n;i++){
    for(int j=i+1;j<=n;j++){
      ll now=pre[j]-pre[i-1];
      if(now<=max_val&&mark[now]) found[now]=1;
        

    }

}
itr(i,n){
    if(found[v[i]]) ans++;
}

cout<<ans<<endl;
  }
  }
 