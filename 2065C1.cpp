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
            void solve(){
                int n,m;
                cin>>n>>m;
                int arr[n],b;
                for(int i=0;i<n;i++){
                    cin>>arr[i];
                }
                cin>>b;
            bool flag=true;
             arr[0]=min(arr[0],b-arr[0]);
            for(int i=1;i<n;i++){
            // if(((b-arr[i])>=arr[i-1])&&(b-arr[i])<=arr[i]){
            //     arr[i]=b-arr[i];
            // }
            int cc=b-arr[i];
            int nm=INT_MAX;
            if(cc>=arr[i-1]){
                nm=cc;

            }
            if(arr[i]>=arr[i-1]){
                nm=min(nm,arr[i]);
            }
            if(nm>=arr[i-1]&&nm!=INT_MAX){
                arr[i]=nm;
            }
            //else if((arr[i]<arr[i-1])&&(b-arr[i])<arr[i-1])
            else {
                no;
                return;
            }
            }
           yes;
           return;
            }
            int main(){
              ios::sync_with_stdio(false);
                cin.tie(nullptr);
            tt{
                solve();
            
            }
            } 