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
                int n;
                cin>>n;
                int arr[n];
                for(int i=0;i<n;i++){
                    cin>>arr[i];
                }
                if(arr[0]==1) arr[0]++;
            for(int i=1;i<n;i++){
                if(arr[i]==1) arr[i]++;
                if(arr[i]%arr[i-1]==0) arr[i]++;
            }
            for(int i=0;i<n;i++) cout<<arr[i]<<" ";
            end;
            }

            }