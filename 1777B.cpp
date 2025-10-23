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
            #define MOD 1000000007
            ll fact(ll n){
                if(n==0||n==1) return 1;
                return (n*fact(n-1)%MOD);
            }
            int main(){
              ios::sync_with_stdio(false);
                cin.tie(nullptr);
            tt{
                
            ll n;
            ll freq;
            cin>>n;
            ll count=n*(n-1);
            count%=MOD;
                freq=fact(n);
                freq%=MOD;
                cout<<(freq*count)%MOD<<endl;

            }
            }