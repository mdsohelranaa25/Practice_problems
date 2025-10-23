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
            int main(){
              ios::sync_with_stdio(false);
                cin.tie(nullptr);
            tt{
                
            int n;
            cin>>n;
            vector<int>v(n);
            for(auto &it:v) cin>>it;
            sort(v.begin(),v.end());
            int minn=v[0]*2-1;
            int count=0;
            for(int i=0;i<n;i++){
                if(v[i]/minn>0){
                    count+=v[i]/minn-1;
                    if(v[i]%minn!=0)  count++;
                }
            }
            cout<<count<<endl;
            }
            }