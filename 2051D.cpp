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
            #define itr(i, a) for (ll i = 0; i < a; i++)
            #define ll long long
            #define vc(v, n) vector<ll> v(n)
            #define srt(v) sort(v.begin(), v.end())
            
            int main() {
                ios::sync_with_stdio(false);
                cin.tie(nullptr);
                
                tt {
                    ll n, x, y;
                    cin >> n >> x >> y;
                    vc(v, n);
                    ll sum = 0;
                    
                    itr(i, n) {
                        cin >> v[i];
                        sum += v[i];
                    }
                    
                    srt(v);
                    ll cnt = 0;
                    
                    itr(i, n) {
                        ll fs = v[i];
                        ll ehm = sum-y-fs;//min bad dte hbe
                        ll ohm = sum-x-fs;//max bad dte parbo
            
                        auto a = lower_bound(v.begin() + i + 1, v.end(), ehm);
                        auto b = upper_bound(v.begin() + i + 1, v.end(), ohm);
            
                        ll ind1 = a - v.begin();
                        ll ind2 = b - v.begin()-1;
                        
                        if (ind1 <= ind2) {  
                            cnt += (ind2 - ind1 + 1);
                        }
                    }
                    
                    cout << cnt << endl;
                }
            }
            