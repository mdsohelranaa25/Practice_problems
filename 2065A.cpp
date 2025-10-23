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
    
string s;
cin>>s;
int n=s.length()-1;
if(s[n-1]=='u'&&s[n]=='s'){
    for(int i=0;i<n-1;i++){
        cout<<s[i];
    }
    cout<<'i'<<endl;
}
else cout<<s<<endl;

}
}