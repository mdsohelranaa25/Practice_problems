		/*
			//! In The Name Of Allah
				
					~~Sohel~~
				
				
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
#define MOD 1000000007
  #define f first
  #define sc second
  ll n;
  vector<ll>mp(100,0);
  ll rec(ll u){
    vector<ll>mp2=mp;
    bitset<40>bt=u;
    ll rm=0;
    for(int i=0;i<=30;i++){
      if(bt[i]==1){
        mp2[i]=n-mp[i];
      }
      rm+=mp2[i]*(1LL<<i);
    }
    return rm;

  }
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
  tt{
  
  cin>>n;
  vc(v,n);
  for(int i=0;i<40;i++) mp[i]=0;
  itr(i,n)cin>>v[i];
  for(auto &it:v){
    bitset<40>bit=it;
    for(ll i=0;i<=30;i++){
      if(bit[i]==1) mp[i]++;
    }
  }
  ll ans=0;
  for(auto &it:v){
    ans=max(ans,rec(it));
  }
cout<<ans<<endl;



  }
  }

