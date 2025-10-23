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
            int n;
            cin>>n;
            map<int,int>mp;
            vector<int>v(n);
            for(int i=0;i<n;i++){
                cin>>v[i];
               mp[v[i]]++;
            }
            int m;
            cin>>m;
            vector<int>pc(m);
            for(int i=0;i<m;i++){
                cin>>pc[i];
            }
            sort(v.begin(),v.end());
            for(int i=1;i<=v[n-1];i++){
                mp[i]=mp[i]+mp[i-1];

            }
            int mx=v[n-1];
            for(int i=0;i<m;i++){
                if(pc[i]>mx) cout<<mp[v[n-1]]<<endl;
                else 
                cout<<mp[pc[i]]<<endl;
            }


            }