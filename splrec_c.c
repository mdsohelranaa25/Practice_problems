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
long long power(ll  n,ll m,ll mod){
    if(m==0) return 1;
    long long hf=power(n,m/2,mod);
    hf=(hf*hf)%mod;
    if(m%2==1) hf=(hf*n)%mod;
    return hf;
}
int main(){
    long long n,m;
    scanf("%lld%lld",&n,&m);
    n%=MOD;
    printf("%lld\n",power(n,m,MOD));
}
