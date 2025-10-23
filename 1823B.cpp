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
#define f p[l].first
#define s p[l].second
#define end cout<<endl
int main(){
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
tt{
    int n,k;
    cin>>n>>k;
    int count=0;
    int a,a1,b,b1;
    int arr[n];
    map<int,int>m;
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        arr[i]=l;
        m[l]=i+1;
        
        
    }
    for(int i=0;i<n;i++){
        int dif=abs(arr[i]-i-1);
        if(dif%k!=0){
            count++;
            if(count>2) {
                cout<<-1<<endl;
                break;
                return 1;
            }
            else {
                if(count==1) {
                    a=arr[i];
                    a1=i+1;
                }
                if(count==2){
                    b=arr[i];
                    b1=i+1;
                }
            }
        }
        
    }
    if(count==0) cout<<0<<endl;
    else if(count==2){
    int dd=abs(a-b1);
    int ee=abs(b-a1);
    if(dd%k==0&&ee%k==0) cout<<1<<endl;
    else cout<<-1<<endl;
    }
    else if(count==1) cout<<-1<<endl;


}
}