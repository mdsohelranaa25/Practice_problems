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

ll rec(ll ind, ll mult) {
    if (ind == n) return mult == x ? 1 : 0;
    ll count = 0;
    for (ll i = 0; i < bagsize[ind]; i++) {
        if (mult <= x / bags[ind][i] && (x/mult)%bags[ind][i]==0) {
            count += rec(ind + 1, mult * bags[ind][i]);
        }
    }
    return count;
}

int main() {
    scanf("%lld %lld", &n, &x);
    for (ll i = 0; i < n; i++) {
        scanf("%lld", &bagsize[i]);
        for (ll j = 0; j < bagsize[i]; j++) {
            scanf("%lld", &bags[i][j]);
        }
    }
    if (x == 0) {
        printf("0\n");
        return 0;
    }
    ll ans = rec(0, 1);
    printf("%lld\n", ans);
    return 0;
}
