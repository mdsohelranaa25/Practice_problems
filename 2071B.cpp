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
                cin>>n;
                ll sum=n*(n+1);
                sum/=2;
                ll sq=sqrt(sum);
                if(sq*sq==sum) cout<<-1<<endl;
                else {
                    ll tot=0;
                    ll j=n;
                   ll i=1;
                   while(i<=j){
                    tot+=i;
                    ll sq=sqrt(tot);
                    if(sq*sq==tot) {
                        cout<<i+1<<" "<<i<<" ";
                        i++;
                        tot+=i;
                    }
                  
                    else cout<<i<<" ";
                    i++;
                   }
                   cout<<endl;
                  
                }
            
            }
            }