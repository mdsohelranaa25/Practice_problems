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
                    int n, a, b;
                    cin >> n >> a >> b;
                    n--;
                  int sum=a+b;
                  if(a==0&&b==0) cout<<-1<<endl;
                  else if(n%sum!=0) cout<<-1<<endl; 
                  else if(a!=0&&b!=0) cout<<-1<<endl;
                  else {
                       int  m=sum;
                        int grp=n/m;
                        int mm=0;
                        for(int i=0;i<grp;i++){
                            int ans=i*m+2;
                            for(int j=0;j<m;j++){
                                cout<<ans<<" ";
                            }
                        }
                        cout<<endl;


                  }
            }
            }