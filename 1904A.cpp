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
#define tt int t; cin >> t; while(t--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt {
        int a, b, c, d, x, y;
        cin >> a >> b >> c >> d >> x >> y;

        vector<pair<int, int>> arr, ar;
        
        if (a != b) {
            arr = {
                {c - b, d + a}, {c + b, d + a}, {c - b, d - a}, {c + b, d - a},
                {c + a, d + b}, {c + a, d - b}, {c - a, d + b}, {c - a, d - b}
            };
            ar = {
                {x - b, y + a}, {x + b, y + a}, {x - b, y - a}, {x + b, y - a},
                {x + a, y + b}, {x + a, y - b}, {x - a, y + b}, {x - a, y - b}
            };
        } else {
            arr = {
                {c - b, d + a}, {c + b, d + a}, {c - b, d - a}, {c + a, d - b}
            };
            ar = {
                {x - b, y + a}, {x + b, y + a}, {x - b, y - a}, {x + a, y - b}
            };
        }

        int count = 0;
        for (auto &p1 : arr) {
            for (auto &p2 : ar) {
                if (p1 == p2) count++;
            }
        }

        cout << count << endl;
    }
}
