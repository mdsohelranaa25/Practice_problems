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
            
                int ar[3][3]={1,1,1,1,1,1,1,1,1};
                int arr[3][3];
                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        cin>>arr[i][j];
                        if(arr[i][j]%2==1){
                            if(i>0) ar[i-1][j]=(ar[i-1][j]+1)%2;
                            if(i<3-1) ar[i+1][j]=(ar[i+1][j]+1)%2;
                            if(j>0) ar[i][j-1]=(ar[i][j-1]+1)%2;
                            if(j<2) ar[i][j+1]=(ar[i][j+1]+1)%2;
                            ar[i][j]=(ar[i][j]+1)%2;

                        }
                    }
                }
                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        cout<<ar[i][j];

                    }
                    cout<<endl;
                }
                
            
            }
            