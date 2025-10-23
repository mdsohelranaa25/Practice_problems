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
#define f first 
#define se second
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
int main(){

tt{
    int arr[3];
    for(auto &it:arr){
        cin>>it;
    }
    sort(arr,arr+3);
    int tot=0;
    tot=(arr[1]-arr[0])+(arr[2]-arr[0]);
    if(((tot%arr[0]==0)&&(tot/arr[0]<=3))&&((arr[1]%arr[0]==0)&&arr[2]%arr[0]==0))yes;
    else no;
}
}