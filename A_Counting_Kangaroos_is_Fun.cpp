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
    
    
    ll n;
    cin>>n;
    vc(v,n);
    itr(i,n) cin>>v[i];
    ll i=n/2,j=n-1;
    ll cnt=0;
    srt(v);
    map<ll,ll>mp;
    // for(auto x:v) cout<<x<<" ";
    // endd;
    map<ll,ll>mpp;
    vector<ll>vv;
    while(i>=0){
        if(v[j]>=2*v[i]){
           
            cnt++;
            mp[v[i]]=1;
            i--;
            j--;
           // mp[v[j]]=1;
            
            }

        
        else {
            
            mpp[v[i]]=i;
            i--;
        }
    }
// ll c=0;
// for(auto x:mpp){
//     ll val=x.f;
//     ll ind=x.sc;
//     for(int i=ind+1;i<n;i++){
        
//         if(mp[v[i]]==0) continue;
//         if(v[i]>=2*val){
//             mp[v[i]]=0;
//             c++;
            
//             break;

//         }
        
//     }
// }
// cnt+=c/2;
// cout<<max(n/2,n-cnt)<<endl;
    
cout<<max((n+1)/2,n-cnt)<<endl;
        
        
    }
    
    
    
    
    
