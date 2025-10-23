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
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(2));
       for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> v[i][j];
        }
    }
    sort(v.begin(), v.end(), greater<vector<int>>());
    int max=INT_MAX;
    for(int i=0;i<n;i++){
        int cc=v[i][0]+(v[i][1]-1)/2;
        if(cc<max) max=cc;
    }
    cout<<max<<endl;
}
}