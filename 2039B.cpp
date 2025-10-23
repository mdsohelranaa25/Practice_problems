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
            #define sc second
            
            int main() {
                ios::sync_with_stdio(false);
                cin.tie(nullptr);
            
                tt {
                    string s;
                    cin >> s;
                    bool found = false;
            
                    for (int i = 0; i < s.length() - 1; i++) {
                        if (s[i] == s[i + 1]) {
                            cout << s[i] << s[i + 1] << endl;
                            found = true;
                            break;
                        }
                        if ((s.length()>=3&&i <= s.length() - 3) && s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2]) {
                            cout << s[i] << s[i + 1] << s[i + 2] << endl;
                            found = true;
                            break;
                        }
                    }
            
                    if (!found) cout << -1 << endl;
                }
            }
            
            
