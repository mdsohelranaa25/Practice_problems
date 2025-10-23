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
int n,m;
cin>>n>>m;
int max=0;
int count=0;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
sort(arr,arr+n);
for(int i=0;i<m;i++){
    if(arr[i]<=0){
        max+=abs(arr[i]);
    }
    else break;
}
cout<<max;
}