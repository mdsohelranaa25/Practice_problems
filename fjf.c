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
 ll n, x;
ll bagsize[50];
ll bags[50][100000];
ll rec(ll ind,ll mul){
	if(ind==n)
		return mul==x?1:0;
ll count=0;
for(int i=0;i<bagsize[ind];i++){
	if((mul<=x/bags[ind][i])&&(x%(mul*bags[ind][i])==0)) 
	count+=rec(ind+1,mul*bags[ind][i]);
}
return count;

	
}
int main(){
	scanf("%lld%lld",&n,&x);
	for(int i=0;i<n;i++){
		scanf("%lld",&bagsize[i]);
		for(int j=0;j<bagsize[i];j++){
			scanf("%lld",&bags[i][j]);
		}
	}
	ll len=rec(0,1);
	printf("%lld\n",len);
}