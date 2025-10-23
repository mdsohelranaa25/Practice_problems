		/*
			//! In The Name Of Allah
				
					~~Sohel~~
				
				
		*/                                                                                                                                                  
    #include<bits/stdc++.h>
    using namespace std;
    #define tt int t;cin>>t;while(t--)
    #define itr(i,a) for(int i=1;i<a;i++)
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
    vc(v,n+1);
    itr(i,n+1) cin>>v[i];
    vc(vv,n+1);
    itr(i,n+1)cin>>vv[i];
    map<ll,ll>mp;
    ll cnt=0;
    vector<ll>ans;
    itr(i,n+1){
        ll j=vv[i];
        if(mp[j]==1)
        ans.push_back(cnt); 
        else {
        while(v[j]!=vv[i]){
            j=v[j];
            if(mp[j]!=1) { mp[j]=1;cnt++;
            }
            
        }
        cnt++;
        ans.push_back(cnt);
    }
    }
    for(auto it:ans) cout<<it<<" ";
    endd;
    
    
    }
    }
    
