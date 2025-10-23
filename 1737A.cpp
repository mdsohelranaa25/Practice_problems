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
            int k;
            cin>>k;
            int grp=n/k;
           int  freq[27]={0};
           for(int i=0;i<n;i++){
            char ch;
            cin>>ch;
            freq[ch-97]++;
           }
           for(int i=0;i<k;i++){
            int m=0;
            for(int j=0;j<27;j++){
                if(m==grp) {cout<<char(j+97); break;
                }
                else {
                    if(freq[j]>0){
                        freq[j]--;
                        m++;
                    }
                    else {cout<<char(j+97); break;
                    }
                }
            }
            

           }end;


            }
            }