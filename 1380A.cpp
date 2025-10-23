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
                int nn;
                for(int i=0;i<n;i++){
                    cin>>nn;
                    arr[i]=nn;
                   
                }
                bool f=0;
                int a,b,c;
                for(int i=1;i<n-1;i++){
                   int m=arr[i];
                    bool flag1=0,flag2=0;
                    if(f==1) break;
                    int ii=i-1,j=i+1;
                    while(ii>=0&&j<n){
                       if(arr[ii]<m){
                        flag1=1;
                        a=ii+1;
                       }
                          if(arr[j]<m) {flag2=1; c=j+1;
                        }
                        if(flag1==1&&flag2==1) { b=i+1;
                            yes;
                            cout<<a<<" "<<b<<" "<<c<<endl;
                            f=1;
                            break;
                            
                        }
                        ii--;
                        j++;
                    

                }


            
            } if(!f) no;
            }
        }