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
    int a,b,c,d,e,f,count=1,dif;
    cin>>a>>b>>c>>d>>e>>f;
    if((a>=c&&a>=e)||(a<=c&&a<=e)){
        count+=min(abs(a-c),abs(a-e));
    }
    if((b>=d&&b>=f)||(b<=d&&b<=f)){
        count+=min(abs(b-d),abs(b-f));
    }
cout<<count<<endl;
}
}