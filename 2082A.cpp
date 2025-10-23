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
            #define itr(i,a) for(int i=0;i<a;i++)
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
            
			ll n,m;
            cin>>n>>m;
            char arr[n][m];
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cin>>arr[i][j];
                }
            }
            ll row=0,col=0;
            for(int i=0;i<n;i++){
               ll r=0;
                for(int j=0;j<m;j++){
                    if(arr[i][j]=='1') r++;
                   
                }
                if(r%2!=0) row++;
                
            }

            for(int i=0;i<m;i++){
                ll c=0;
                 for(int j=0;j<n;j++){
                     if(arr[j][i]=='1') c++;
                    
                 }
                 if(c%2!=0) col++;
                
                 
             }
            cout<<max(row,col)<<endl;
            
			
			
            }
            }
			
