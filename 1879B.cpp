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
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        ll count1 = 0, count2 = 0;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            count1 += a[i];
        }

        for (ll i = 0; i < n; i++) {
            cin >> b[i];
            count2 += b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        cout << min(count1 + n*b[0], count2 + n*a[0]) << endl;
    }
}
