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
    ll n;
    cin>>n;
    ll v[n],vv[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>vv[i];
    }
    sort(v,v+n);
    sort(vv,vv+n);
    int c1=1,c2=1;
    for(int i=1;i<n;i++){
        if(v[i]!=v[i-1]) c1++;
        if(vv[i]!=vv[i-1]) c2++;
    }
    if(c1>=3||c2>=3) yes;
    else if(c1==2&&c2==2) yes;
    else no;
    

}
}