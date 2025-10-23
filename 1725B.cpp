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
           ll n,k;
           cin>>n>>k;
           vector<ll>v(n);
           for(auto &it:v) cin>>it;
           sort(v.begin(),v.end());
           ll cnt=0;
           ll tot=n;
           for(ll i=n-1;i>=0;i--){
            if(tot<=0) break;
            ll amn=k/v[i];
            amn++;
            tot-=amn;
            if(tot>=0) cnt++;
            

           }
           cout<<cnt<<endl;

            }