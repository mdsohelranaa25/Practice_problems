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
    
    
    ll n,q;
    cin>>n>>q;
    vc(v,n);
    itr(i,n) cin>>v[i];
    vc(legs,q);
    itr(i,q) cin>>legs[i];
    ll sum=v[0];
        ll last=v[0];
        ll ls=last;
    map<ll,ll>mp;
    mp[v[0]]=v[0];
    ittr(i,1,n){
        
        last=max(ls,v[i]);
        mp[last]=mp[ls]+v[i];
        ls=last;


    }
        itr(i,q){
           auto it=mp.upper_bound(legs[i]);
           if(it==mp.begin())cout<<0<<" ";
           else cout<<(--it)->second<<" ";

        } endd;
        

    }
    
    }
    
    
