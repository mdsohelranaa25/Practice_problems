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
    
 ll n,k;
 cin>>n>>k;
 ll arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 sort(arr,arr+n);
 int count=1,max=1;
 for(int i=1;i<n;i++){
    if(arr[i]-arr[i-1]>k){
        if(max<count) max=count;
        count=1;
    }
    else {count++; 
    if(max<count) max=count;
 }
 }
 //cout<<max<<endl;
 cout<<n-max<<endl;
}
}