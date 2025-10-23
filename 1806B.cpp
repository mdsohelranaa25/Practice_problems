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
                
            int n;
            cin>>n;
            int arr[n];
            map<int,int>m;
            for(int i=0;i<n;i++){
                cin>>arr[i];
                m[arr[i]]++;
            }
            int zero=m[0];
            int one=m[1];
            if(zero>(n+1)/2){
                if(one==0) cout<<1<<endl;
                else if((zero+one)==n) cout<<2<<endl;
                else cout<<1<<endl;
            }
            else cout<<0<<endl;

            }
            }