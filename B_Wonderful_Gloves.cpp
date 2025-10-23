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
    
    ll n,k;
    cin>>n>>k;
    vc(v,n);
    ll sum=0,smm=0;
    vc(vv,n);
    itr(i,n) {cin>>v[i]; 
    }
    itr(i,n) {cin>>vv[i];
         
    }
    vector<ll>vcc;
    
   for(int i=0;i<n;i++){
    sum+=max(v[i],vv[i]);
    vcc.push_back(min(v[i],vv[i]));
   }
   rsrt(vcc);
   for(int i=0;i<k-1;i++){
    sum+=vcc[i];
   }
    
   sum++;
   cout<<sum<<endl;
    
    }
    }
    
