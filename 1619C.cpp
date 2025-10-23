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
                ll a,s;
                string b;
                cin>>a>>s;
                while(s!=0){
                    ll n=10;
                    ll ss,aa;
                    ss=s%10;
                    aa=a%10;
                    if(aa>ss){
                        
                        n=100;
                        ss=s%n;
                        aa=a%10;
                    }
                ll dif=ss-aa;
                    if(dif>9) {
                        break;
                    }
                    else if(aa>ss){
                        break;
                    }
                    b+=char(dif+'0');
                    
                    a/=10;
                    s/=n;

                }
                if(a!=0) cout<<-1<<endl;
                else {
                    int mm=b.length()-1;
                    while(b[mm]=='0') mm--;
                    for(int i=mm;i>=0;i--){
                        cout<<b[i];
                    }
                    cout<<endl;
                }
                
            
            }
            }