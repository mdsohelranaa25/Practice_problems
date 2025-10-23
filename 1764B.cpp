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
//#define end cout << endl

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt {
        int n;
        cin >> n;
        set<int> s;
        vector<int> v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
            s.insert(v[i]);
        }

      for(int i=0;i<s.size();i++){
        for(int j=0;j<i;j++){
            s.insert((s[i]-s[j]));
        }
      }
      cout<<s.size()<<endl;
    }
}
