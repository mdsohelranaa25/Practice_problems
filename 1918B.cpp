#   /*       
		           
				     
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
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     for(int i=0;i<n;i++){
        cin>>b[i];
    }
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[a[i]]=b[i];
    }
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    } cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<m[i]<<" ";
    } cout<<endl;


}
}