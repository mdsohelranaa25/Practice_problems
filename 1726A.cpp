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
                int n;
                cin>>n;
                int mind,maxd;
                int arr[n];
                int mapp=0;
                int maxx=0,minn=INT_MAX,ans1,ans2,ans3,ans4,ans5,ans6,ans7;
                for(int i=0;i<n;i++){
                    cin>>arr[i];
                    if(arr[i]>maxx) {maxx=arr[i]; maxd=i;}
                    if(arr[i]<minn) {minn=arr[i]; mind=i;}
                    if(i>0){
                        if(arr[i-1]-arr[i]>mapp) mapp=arr[i-1]-arr[i];
                    }
                 
                    ans1=arr[n-1]-arr[0];
                    ans2=arr[n-1]-arr[mind];
                    ans3=0;
                    //arr[0]-arr[mind];
                    //ans4=arr[n-1]-arr[maxd];
                    ans4=0;
                    //ans5=arr[0]-arr[maxd];
                    ans5=0;
                    ans6=arr[maxd]-arr[0];
                    //ans7=arr[maxd]-arr[n-1];
                    ans7=0;
                }
               int ans=max(mapp,max(ans1,max(ans2,max(ans3,max(ans4,max(ans5,max(ans6,ans7)))))));
                    //cout<<mapp<<" "<<ans1<<" "<<ans2<<" "<<ans3<<" "<<ans4<<" "<<ans5<<" "<<ans6<<" "<<ans7<<endl;
cout<<ans<<endl;
            
            }
            }