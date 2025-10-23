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
ll k;
ll counts;
 ll x,y,z;
void rec(ll k){
    if(y==0) {
        cout<<counts<<endl;
        return;
    }
    else if(y>=x){
    while(k<=y){
        k*=10;

    }

    k/=10;
   int m=y/k;
   counts+=m;
   y-=k*m;
    }
    else {
        counts+=y;
        y-=y;

    }

    rec(k);

    
}
int main(){
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
tt{
cin>>x>>y;
 k=0;
 
counts=1;
y-=x;
k=x;
rec(k);

}
}