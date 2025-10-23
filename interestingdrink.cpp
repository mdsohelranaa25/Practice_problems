   /*       
		           
				     
 	   *********     .**.     |       |  |---------|  |                                                                          
	 /              /    \    |       |  |            |                                                         
        *              /      \   |       |  |            |                                            	 
         *            |        |  |       |  |	          |
	   *  *       |        |  |-------|  |------|	  |    		       *      
                *     |        |  |       |  |            |                                            
	         *     \      /   |	  |  |            |
		 *      \    /    |       |  |            |                                                     
	        /        '**'     |       |  |---------|  |___________|                                                                                                                                                    
     ********** 
						                                                                                               
				         
				*/                                                                                                                                                  
            #include<bits/stdc++.h>
            using namespace std;
            #define tt int t;cin>>t;while(t--)
            
            #define yes cout<<"YES"<<endl
            #define no cout<<"NO"<<endl
            #define ll long long
            #define endd cout<<endl
            ll rec(ll x,vector<ll>v,ll low,ll high){
                ll ans=0;
                while(low<high){
                    ll mid=(low+high)/2;
                    if(v[mid]==x) {
                        ans=mid+1;
                        return ans;
                    }
                    else if(x<v[mid]) high=mid-1;
                    else low=mid+1;
                }
                return 0;

            }
            int main(){
              ios::sync_with_stdio(false);
                cin.tie(nullptr);
            int sp;
            cin>>sp;
            vector<ll>v(sp);
            for(auto &it:v) cin>>it;
            ll m;
            cin>>m;
            vector<ll>prc(m);
            for(auto &it:prc) cin>>it;
            sort(v.begin(),v.end());
                for(ll i=0;i<m;i++){
                    ll ans=rec(prc[i],v,0,sp-1);
                    cout<<ans<<endl;

                }
            

            }