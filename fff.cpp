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
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int div = n / k;
        if(k==n){
               
            int m = 1;
            bool flag = true;

            for (int j = div; j < n; j += div * 2) {
                int ii = j;
                
                for (; ii < j + div && ii < n; ii++) {
                    if (arr[ii] != m) {
                        cout << m << endl;
                        flag = false;
                        break;
                    }
                    m++;
                }
                
                if (!flag) break;
            }
if (flag) cout << m << endl;
        }
        else {
            int dd=n-k;

            int m=1;
            bool flag=true;
            for(int i=1;i<=dd+1;i++){
                if(arr[i]!=m) {
                    cout<<1<<endl;
                    flag=false;
                    break;
                }
                if(!flag) break;
            }
            if(flag) cout<<2<<endl;
        }
    }
}
