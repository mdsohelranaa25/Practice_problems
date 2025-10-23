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
long long rec(long long n,long long m,int i){
 if(i==m) return 1;
 else 
    return n*rec(n,m,i+1);
 }
int main(){
long long n,m;
scanf("%lld%lld",&n,&m);
int mm=1;
long long ans=rec(n,m,0);
printf("%lld",ans);

}