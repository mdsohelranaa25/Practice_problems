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
    int arr[n];
    int l=(n-1)*2;
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=l){
            m[arr[i]]=i;
        }

    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(arr[i]<=l){
            int rem=i*2;
            int rem2=n-1-i;
            rem2*=2;
            if(rem>=arr[i]||rem2>=arr[i]) {
                no;
                flag=false;
                break;
            }
            

        }
       
    } if(flag) yes;
    
    
}
}