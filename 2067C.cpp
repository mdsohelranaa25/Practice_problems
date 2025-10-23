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

ll minn = 1e7;

ll rec(ll cc, ll countt) {
    if (countt > 10) return 1e7;
    
    ll mm = cc;
    while (mm) {
        if (mm % 10 == 7) return countt;
        mm /= 10;
    }

    minn = min(minn, rec(cc + 9, countt + 1));
    minn = min(minn, rec(cc + 99, countt + 1));
    minn = min(minn, rec(cc + 999, countt + 1));
    minn = min(minn, rec(cc + 9999, countt + 1));
    minn = min(minn, rec(cc + 99999, countt + 1));
    minn = min(minn, rec(cc + 999999, countt + 1));
    minn = min(minn, rec(cc + 9999999, countt + 1));
    minn = min(minn, rec(cc + 99999999, countt + 1));

    return minn;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    tt {
        ll n;
        cin >> n;
        
        minn = 1e7;
        ll result = rec(n, 0);
        
        cout << result << endl;
    }
}
