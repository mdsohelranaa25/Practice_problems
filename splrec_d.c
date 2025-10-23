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
#include<stdio.h>
#define MOD 1000000007
#define ll long long
#define yes printf("YES\n");
#define no printf("NO\n");
ll ex(ll i,ll sum,ll n,ll x,ll arr[]){
    if(i==n) return sum==x;
   
    return ex(i+1,sum+arr[i],n,x,arr)||ex(i+1,sum-arr[i],n,x,arr);
}

int main(){
    ll n,x;
    scanf("%lld%lld",&n,&x);
    ll arr[n];
    for(ll i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
if(ex(1,arr[0],n,x,arr)) yes
else no

}