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
            #include <bits/stdc++.h>
            using namespace std;
            #define tt int t; cin >> t; while (t--)
            #define yes cout << "YES" << endl
            #define no cout << "NO" << endl
            #define ll long long
            #define end cout << endl
            
            int main() {
                ios::sync_with_stdio(false);
                cin.tie(nullptr);
                
                tt {
                    ll n, q;
                    cin >> n >> q;
            
                    vector<ll> arr(n+1,0);
                    vector<ll>tots(n+1,0);

            
                    for(int i=1;i<=n;i++){
                        cin>>arr[i];
                        tots[i]=tots[i-1]+arr[i];

                    }
                    int totsum=tots[n];
            
                    while (q--) {
                        ll a, b, c;
                        cin >> a >> b >> c;
                        
                     
            
                       ll rangs=totsum-(tots[b]-tots[a-1])+(b-a+1)*c;
            
                        //cout << ss << endl;
                        if (rangs % 2) yes;
                        else no;
                    }
                }
            }
            