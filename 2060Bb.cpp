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
                int n,m;
                cin>>n>>m;
                map<int,int>mp;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    int x;
                    cin>>x;
                    mp[x]=i;

                }
            }
            bool flag=true;
            for(int i=0;i<n*m;i++){
                if(mp[i]!=mp[i%n]) {
                    flag=false;
                    break;
                }
            }
            if(flag) {
                for(int i=0;i<n;i++){
                    cout<<mp[i]+1<<" ";
                }
                end;

            }
            else cout<<-1<<endl;
            }
            }