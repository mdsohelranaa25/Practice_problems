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
            #define vc(v, n) vector<ll> v(n)  
            #define srt(v) sort(v.begin(), v.end())
            #define f first
            #define sc second
            int main(){
              ios::sync_with_stdio(false);
                cin.tie(nullptr);
           ll hall,query;
           cin>>hall>>query;
                vc(v,hall+1);
                ll tot=0;
                vector<pair<ll,ll>>pr;
                pr.push_back({0,0});
                for(int i=1;i<=hall;i++){
                    cin>>v[i];
                    tot+=v[i];
                    pr.push_back({tot,i});
                
                }
               
                vc(qry,query);
                for(auto &it:qry) cin>>it;
                for(auto x:qry){
                    ll lo=0;
                    ll ans;
                    ll hi=hall;
                    while(lo<=hi){
                        ll mid=(lo+hi)/2;
                        if(pr[mid].f>= x){
                            ans = mid;
                            hi = mid - 1;
                        } else {
                            lo = mid + 1;
                        }
                    }
                    cout<<ans<<" "<<x-pr[ans-1].f<<endl;
                }

            }