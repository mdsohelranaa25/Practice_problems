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

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define endd cout << endl

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> m(n);

    for (int i = 0; i < n; i++) {
        cin >> m[i].first >> m[i].second;
    }

    sort(m.begin(), m.end());

    while (!m.empty()) {
        int mind = -1, mmx = -1;

        for (int i = 0; i < m.size(); i++) {
            if (m[i].first < s && m[i].second > mmx) {
                mmx = m[i].second;
                mind = i;
            }
        }

        if (mind == -1) {  
            no;
            return 0;
        }

        s += m[mind].second; 
        m.erase(m.begin() + mind); 
    }

    yes;
    return 0;
}
