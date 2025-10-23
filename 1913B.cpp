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
                string s;
                cin>>s;
                int one=0,zr=0;
                for(char a:s){
                    if(a=='0')  zr++;
                    else one++;
                    
                }
                bool flag=true;
                int cnt=0;
                for(int i=0;i<s.length();i++){
                    if(s[i]=='0'){
                        if(one>0) {one--; cnt=i+1;
                        }
                        else break;
                    }
                    else {
                        if(zr>0) {zr--; cnt=i+1;
                        }
                        else break;
                    }
                    

                }
                cout<<s.length()-cnt<<endl;
            
            }
            }