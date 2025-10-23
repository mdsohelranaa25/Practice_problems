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
int main(){

tt{
    ll a,b,n;
    cin>>a>>b>>n;
    ll count=0;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 count=b;
 for(int i=0;i<n;i++){
    count+=min(a,arr[i]);
    if(arr[i]>=a) count--;
 }
 cout<<count<<endl;
}
}