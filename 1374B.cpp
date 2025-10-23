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
ll countc;
void rec(ll n){
    if(n==1){ cout<<countc<<endl;
    return;
    }
    else if(n%6==0){
     while(n%6==0){
        countc++;
        n/=6;

     }
    }
    else {
        if(n%3!=0) {cout<<-1<<endl;
        return ;
        }
        else{
        n*=2;
        countc++;
        }
    }
    rec(n);
    
    }

int main(){
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
tt{
    ll n;
    cin>>n;
    rec(n);
   countc=0;


}
}