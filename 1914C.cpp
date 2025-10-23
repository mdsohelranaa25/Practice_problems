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
                    int n, k;
                    cin >> n >> k;
                    
                    vector<int> arr(n), b(n), bmax(n);
                    
                    for (int i = 0; i < n; i++) cin >> arr[i];
                    for (int i = 0; i < n; i++) cin >> b[i];
                    
                   
                    vector<ll> sum(n, 0);
                    sum[0] = arr[0];
                    for (int i = 1; i < min(k, n); i++) {
                        sum[i] = sum[i - 1] + arr[i];
                    }
            
                   
                    bmax[0] = b[0];
                    for (int i = 1; i < n; i++) {
                        bmax[i] = max(bmax[i - 1], b[i]);
                    }
            
                    ll maxsum = 0;
                    for (int i = 0; i < min(k, n); i++) {
                        ll extra = (k - i - 1) *  bmax[i];
                        maxsum = max(sum[i] + extra, maxsum);
                    }
                    
                    cout << maxsum << endl;
                }
            }
            