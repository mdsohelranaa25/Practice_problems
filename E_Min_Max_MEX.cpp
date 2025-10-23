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
    
    
    ll mex=0;
    itr(i,n) {cin>>v[i];
    }
    ll lo=0,hi=n;
    while(lo<=hi){
        ll mid=(lo+hi)/2;
       unordered_set<ll>st;
       ll cnt=0;
       for(int i=0;i<n;i++){
        if(v[i]<mid){
            st.insert(v[i]);
        }
        if(st.size()==mid){
            cnt++;
            st.clear();
        }

       }
       if(cnt>=k){
        mex=mid;
        lo=mid+1;
       }
       else hi=mid-1;
    }
    cout<<mex<<endl;
    
    
    
    }
    }
    
