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
#define tt int t;cin>>t;while(t--)

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long
 ll f(ll n){
    if(n==1||n==0) return 1;
    return n*f(n-1);

}
int main(){
ll n;
scanf("%lld",&n);
printf("%lld",f(n));


}