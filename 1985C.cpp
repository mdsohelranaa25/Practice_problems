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
                ll sum=0;
                ll max=-1;
                ll v[n];
                for(auto &it:v) cin>>it;
                ll count=0;
                int i=0;
                while(v[i]==0){ count++;
                i++;
            }
                for(i;i<n;i++){
                    sum+=v[i];
                    if(max<v[i]) max=v[i];
                    if(sum-max==max) count++;


                }
                cout<<count<<endl;
                
            
            }
            }