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
            #define yes cout << "YES\n"
            #define no cout << "NO\n"
            
            int main() {
                ios::sync_with_stdio(false);
                cin.tie(nullptr);
            
                tt {
                    int n, k;
                    cin >> n >> k;
                    int lst = INT_MAX, hst = 0;
                    int arr[n][2];
                    map<int, int> m;
            
                    for (int i = 0; i < n; i++) {
                        cin >> arr[i][0] >> arr[i][1];
                        lst = min(lst, arr[i][0]);
                        hst = max(hst, arr[i][1]);
                        //if(k>=arr[i][0]&&k<=arr[i][1])
                        for (int j = arr[i][0]; j <= arr[i][1]; j++) {
                            m[j]++;
                        }
                    }
            
                    if (k < lst || k > hst) {
                        no;
                        continue;
                    }
                    int ncount=0;
                    int max_freq = 0;
                    for (auto it = m.begin(); it != m.end(); it++) {
                       if(it->second>max_freq){
                        max_freq=it->second;
                        ncount=1;

                       }
                       else if(it->second==max_freq){
                        ncount++;

                       }
                    }
            
                    if (m[k] == max_freq&&ncount==1) {
                        yes;
                        continue;
                    }
            
                    bool possible = false;
                    for (int i = 0; i < n; i++) {
                       // if (arr[i][0] <= k && arr[i][1] >= k) {
                            for (int j = arr[i][0]; j <= arr[i][1]; j++) {
                                m[j]--;
                            }
            
                            int new_max = 0,nncount=0;
                            for (auto it = m.begin(); it != m.end(); it++) {
                                if(it->second>new_max){
                                    new_max=it->second;
                                    nncount=1;
            
                                   }
                                   else if(it->second==new_max){
                                    nncount++;
            
                                   }
                            }
                            
            
                            if (m[k] == new_max&&nncount==1) {
                                possible = true;
                               
                                continue;
                                
                            }
                            
                            else {
                                if(arr[i][0]<=k&&arr[i][1]>=k)
                            for (int j = arr[i][0]; j <= arr[i][1]; j++) {
                                m[j]++;
                            }
                        }
                    }
                    //}
            
                    if (possible) yes;
                    else no;
                    
                }
            
                return 0;
            }
            