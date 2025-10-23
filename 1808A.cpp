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
                ll n;
                
                ll m;
                int ovmax=0;
                int mxnum;
                cin>>n>>m;
                int dif=abs(n-m);
                if(dif>=109){
                    m-=((m%100)+10);
                    cout<<m<<endl;

                } else {
                    for(int i=n;i<=m;i++){
                        int mm=i;
                        int low=9,maax=0;
                        while(mm!=0){
                            int f=mm%10;
                            mm/=10;
                            low = min(low, f);
                    maax = max(maax, f);


                        }
                        int lll = maax-low;
                        if(lll>=ovmax){
                            ovmax=lll;
                            mxnum=i;
                        }

                    }
                    cout<<mxnum<<endl;
                }
            
            }
            }