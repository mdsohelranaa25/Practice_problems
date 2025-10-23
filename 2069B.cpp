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
            #define ll long long
            
            int main() {
                ios::sync_with_stdio(false);
                cin.tie(nullptr);
            
                tt {
                    int n, m;
                    cin >> n >> m;
                    set<int> s;
                    int arr[n][m];
                    map<int, int> mp;
            
                    for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                            cin >> arr[i][j];
                            s.insert(arr[i][j]);
                        }
                    }
            
                    set<int> ss;
                    int total = 0;
                    int mx = 0;
                    map<int, int> mm;
            
                    for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                            bool is_unique = true;
            
                            if (i > 0 && arr[i][j] == arr[i-1][j]) is_unique = false;
                            if (i < n-1 && arr[i][j] == arr[i+1][j]) is_unique = false;
                            if (j > 0 && arr[i][j] == arr[i][j-1]) is_unique = false;
                            if (j < m-1 && arr[i][j] == arr[i][j+1]) is_unique = false;
            
                            if (is_unique) {
                                mp[arr[i][j]]++;
                                total++;
                                mx = max(mx, mp[arr[i][j]]);
                            } else {
                                ss.insert(arr[i][j]);
                                mm[arr[i][j]]++;
                            }
                        }
                    }
            
                    int need = mp.size()-1;
                    int mmm = 0;
                    int ab = n * m - total;
                    int aa = -1;  
            
                    for (auto val : ss) { 
                        if (mm[val] > mmm) {
                            mmm = mm[val];
                            aa = val;
                        }
                    }
            
                    if (mmm > 1) {
                        need = (need + ab - mmm);
                        if(mp[aa]==0) need++;
                    }
                    
            
                    cout << need << endl;
                }
            }
            