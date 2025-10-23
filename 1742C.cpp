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
                char ch[8][8];
              

                for(int i=0;i<8;i++){
                    for(int j=0;j<8;j++){
                        cin>>ch[i][j];
                    }
                }
                bool Har=false;
                bool RR=true;
                int n=8;
                bool Hatr=false;
                for(int i=0;i<n;i++){
                    
                    if(ch[i][0]=='R'){
                   Har=true;
                   //Hatr=true;
                   RR=true;
                    for(int j=0;j<n;j++){
                        if(ch[i][j]!='R'&&ch[i][j]=='B'){
                            RR=false;
                            break;
                            
                        } 
                       

                        
                    } if(RR) break;
                }
                    
                }if(RR&&Har) cout<<"R"<<endl;
                else cout<<"B"<<endl;
            
            }
            }