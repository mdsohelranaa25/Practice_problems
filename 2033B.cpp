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

 int chk(vector<vector<int>>& v, int i, int j, int n,int minNeg) {
   
   if(v[i][j]<0){
    minNeg=min(minNeg,v[i][j]);
   }
   if(i>=n||j>=n) return minNeg;
 return chk(v,i+1,j+1,n,minNeg);
  
 }
int main(){
 ios::sync_with_stdio(false);
    cin.tie(nullptr);
tt{
    int n;
     cin>>n;
 vector<vector<int>>v(n,vector<int>(n,0));
   
   int minNeg = 0;
    //int maxel=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int m=chk(v,i,0,n-1,minNeg);
       ans+=abs(m);
    }
 for(int i=1;i<n;i++){
        int m=chk(v,0,i,n-1,minNeg);
       ans+=abs(m);
    }
   
    cout<<ans<<endl;
}
}