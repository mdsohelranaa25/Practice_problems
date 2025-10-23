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
            int n,k;
            cin>>n>>k;
            vector<ll>v(n);
            for(auto &it:v) cin>>it;
            int mx=INT_MAX,cnt=0;
            for(int  i=0;i<k;i++){
                cnt+=v[i];

            }
            int pos=0;
            mx=min(mx,cnt);
        
            for(int i=1;i<n-k+1;i++){
                cnt+=(v[i+k-1]-v[i-1]);
                if(cnt<mx) {
                    mx=cnt;
                    pos=i;
                }
                
                
            }
            cout<<pos+1<<endl;
            }