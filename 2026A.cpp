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
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
tt{
    int x,y,k;
    cin>>x>>y>>k;
    int l= min(x,y);
    cout << "0 0 " << min(l,k)<<" " << min(l,k)<<"\n";

        
        cout << "0 " <<min(l,k)<<" "<< min(l,k) << " 0\n";

}
}