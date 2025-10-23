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
    int n;
    cin>>n;
    int arr[n];
    map<int,int>m;
    map<int,int>p;
    for(int i=0;i<n;i++){
        cin>>arr[i];
       
    }
  
    int maxc=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            int dif=abs(arr[i]-i-1);
            maxc=__gcd(maxc,dif);
        }
    }
    cout<<maxc<<endl;

}
}