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
            #define endd cout << endl
            #define vc(v, n) vector<ll> v(n)
            #define srt(v) sort(v.begin(), v.end())
            #define f first
            #define scc second
            
            int main() {
                ios::sync_with_stdio(false);
                cin.tie(nullptr);
            
                tt {
                    ll n;
                    cin >> n;
                    vc(fs, n);
                    vc(sc, n);
                    unordered_map<ll, ll> m1, m2;
            
                    for (auto &it : fs) cin >> it;
                    for (auto &it : sc) cin >> it;
            
                    ll cnt = 1;
                    for (int i = 0; i < n; i++) {
                        if (i > 0 && fs[i] == fs[i - 1]) cnt++;
                        else cnt = 1;
                        m1[fs[i]] = max(m1[fs[i]], cnt);
                    }
            
                    cnt = 1;
                    for (int i = 0; i < n; i++) {
                        if (i > 0 && sc[i] == sc[i - 1]) cnt++;
                        else cnt = 1;
                        m2[sc[i]] = max(m2[sc[i]], cnt);
                    }
            
                    ll ans = 0;
                    for (auto &it : m1) ans = max(ans, it.second + m2[it.first]);
                    for (auto &it : m2) ans = max(ans, it.second + m1[it.first]);
            
                    cout << ans << endl;
                }
            }
            