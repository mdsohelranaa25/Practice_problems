
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
            #define endd cout<<endl
            #define vc(v, n) vector<ll> v(n)  
            #define srt(v) sort(v.begin(), v.end())
            #define f first
            #define sc second
            int main(){
              ios::sync_with_stdio(false);
                cin.tie(nullptr);
            tt{
                int n,k;
                cin>>n>>k;
                vc(v,n);
                if(n==1) cout<<0<<endl;
               
                else if(k%2==0) {
                    
                    for(int i=0;i<n;i++) v[i]=n-1;
                    v[n-2]=n;
                    
                }
                else {
                    for(int i=0;i<n;i++) v[i]=n;
                    v[n-1]=n-1;

                }
                for(auto &it:v) cout<<it<<" ";
                cout<<endl;

                

                
                
            
            }
            }