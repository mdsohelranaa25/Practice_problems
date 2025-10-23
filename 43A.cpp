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
            
                int n;
            string s;
            cin>>n;
         set<string>ss;
            map<string,int>mp;
            for(int i=0;i<n;i++){
                cin>>s;
                mp[s]++;
                ss.insert(s);

            }
            int mm=n/2;
            for(auto as:ss){
                if(mp[as]>mm) {
                    cout<<as<<endl;
                    return 0;
                }
                
            }
            

            }
            