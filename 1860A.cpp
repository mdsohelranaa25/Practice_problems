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
#define end cout << endl

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt {
        
        string s;
        cin >> s;
        int n = s.size();

        string a = "", b = "";
        for (int i = 0; i < 2 * n; i++) {
            a += (i % 2 == 0) ? '(' : ')';
        }

        for (int i = 0; i < n; i++) b += '(';
        for (int i = 0; i < n; i++) b += ')';

        if (a.find(s) == string::npos) {
            yes<< a << '\n';
        } else if (b.find(s) == string::npos) {
            yes<< b << '\n';
        } else {
           no;
        }
    }
}
    
