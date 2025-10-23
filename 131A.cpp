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
#define end cout << endl

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
   
        string s;
        cin>>s;
       
      
        if (s.length() == 1) {
            if (islower(s[0])) cout << char(toupper(s[0])) << endl;
            else cout << char(tolower(s[0])) << endl;
        } 
        else {
            bool flag = true;

          
            for (int i = 1; i < s.length(); i++) {
                if (!isupper(s[i])) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                if(islower(s[0])) cout<<char(toupper(s[0]));
                else cout<<char(tolower(s[0]));
                for(int i=1;i<s.length();i++) cout << char(tolower(s[i]));
                cout << endl;
            } 
            else cout << s << endl;
        }
    
}
