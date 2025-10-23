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
            #include<bits/stdc++.h>
            using namespace std;
            #define tt int t;cin>>t;while(t--)
            
            #define yes cout<<"YES"<<endl
            #define no cout<<"NO"<<endl
            #define ll long long
            #define end cout<<endl
            int main(){
              ios::sync_with_stdio(false);
                cin.tie(nullptr);
            tt{
                
            int n,k,p;
            cin>>n>>k>>p;
            int am=abs(k)/p;
            if(abs(k)%p!=0) am+=1;
            if(am>n) cout<<-1<<endl;
            else cout<<am<<endl;
            }
            }