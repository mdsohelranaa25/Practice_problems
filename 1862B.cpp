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
            #define pb(x) push_back(x)
            #define endd cout<<endl
            #define vc(v, n) vector<ll> v(n)  
            #define srt(v) sort(v.begin(), v.end())
            #define f first
            #define sc second
            int main(){
              ios::sync_with_stdio(false);
                cin.tie(nullptr);
            tt{
                
            ll n;
            cin>>n;
             int arr[n];
             for(auto &it:arr) cin>>it;
             vector<int>v;
             v.push_back(arr[0]);
             for(int i=1;i<n;i++){
                if(arr[i]<arr[i-1]){
                    ll x=arr[i]-1;
                    if(x==0) x=1;
                    v.pb(x);
                    v.pb(arr[i]);

                    
                }
                else v.pb(arr[i]);

             }
             cout<<v.size()<<endl;
             for(auto it:v) cout<<it<<" ";
             cout<<endl;
            }
            }