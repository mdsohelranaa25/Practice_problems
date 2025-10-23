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
    vc(v,n);
    vector<ll>vv;
    map<ll,ll>mp;
    itr(i,n) {
        cin>>v[i];
        mp[v[i]]++;
       if(mp[v[i]]==1) vv.push_back(v[i]);    }
    ll m=vv.size();
   for(auto &it:vv){
    cout<<it<<" ";

   }
   ll l=1;
   ll i=0;
   m=n-m;
   while(i<m){
    while(mp[l]>0)l++;
    cout<<l<<" ";
    l++;
    i++;
   }
   endd;
    
    
    }
    }
    
