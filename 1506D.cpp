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
    int main(){
      ios::sync_with_stdio(false);
        cin.tie(nullptr);
    tt{
    ll n;
    cin>>n;
  set<ll>st;
    map<ll,ll>mp;
    itr(i,n){
        ll x;
        cin>>x;
        st.insert(x);
        mp[x]++;
    }
   ll mx=0;
   for(auto &it:st){
    if(mp[it]>mx) mx=mp[it];   }
   ll ans=0;
   
    if(mx>(n-mx)) ans=2*mx-n;
    else if(n%2) ans++;
    cout<<ans<<endl;
  
    
    
    
   }
    
    }
    
    
