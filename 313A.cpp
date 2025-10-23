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
    string s;
    cin>>s;
    int n=s.length();
    if(s[0]!='-') cout<<s<<endl;
    else {
        if(n==3&&s[2]=='0'){
            cout<<0<<endl;
        }
        else{
        if(s[n-1]>=s[n-2]){
            for(int i=0;i<n-1;i++){
                cout<<s[i];
            }
        }
        else {
            s[n-2]=s[n-1];
            for(int i=0;i<n-1;i++){
                cout<<s[i];
            }
        }
    }
    }
}