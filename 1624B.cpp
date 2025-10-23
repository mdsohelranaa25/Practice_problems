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
                int a,b,c;
                cin>>a>>b>>c;
                int arr[3];
                arr[0]=a;
                bool flag=1;
                arr[1]=b;
                arr[2]=c;
                sort(arr,arr+3);
                
                    int mm=(a+c);
                    int m=mm/2;

                    if(mm%2==0&&m%b==0) {yes; flag=0;
                        
                    }
              
                    else {
                        
                            
                         
                          //if(b!=arr[0]){
                            int m=(b-a);
                            int mm=abs(b-c);
                            if((((b+m)%c==0)||(((b+mm)%a==0&&(b+mm)>b)))||((((b-m)%c==0)||(b-mm)%a==0)))
                            {yes; flag=0;
                              
                            }
                         //}
                         else {
                            if(a==b){
                                if(b%c==0) {yes; flag=0;
                                }
                            }
                            else if(b==c) {
                                if(b%a==0) {yes; flag=0;
                                }
                            }
                            else if(a==c) {
                                if(a%b==0){yes; flag=0;
                                }
                            }
                           
                         }
                    }
                
            
                if(flag) no;
            
            }
            }