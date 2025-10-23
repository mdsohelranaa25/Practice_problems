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
                map<int,int>m;
                for(auto &it:arr){ cin>>it;
                    
                }
                bool flag=true;
                m[arr[0]]=1;
                for(int i=1;i<n;i++){
                    
                  //  int a=1;
                   
                        if(m[arr[i]-1]!=1&&m[arr[i]+1]!=1) {
                            flag=false;
                            break;
                        }
                        else m[arr[i]]=1;
                        

                        // if(flag) yes;
                        // else no;
                   

                }
                if(flag) yes;
                else no;
            }
        
            }