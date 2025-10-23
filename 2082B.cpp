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
            #define itr(i,a) for(int i=0;i<a;i++)
            #define yes cout<<"YES"<<endl
            #define no cout<<"NO"<<endl
            #define ll long long
            #define endd cout<<endl
            #define vc(v, n) vector<ll> v(n)  
            #define srt(v) sort(v.begin(), v.end())
            #define f first
            #define sc second
            int main(){
              ios::sync_with_stdio(false);
                cin.tie(nullptr);
            tt{
            ll x,m,n;
            cin>>x>>m>>n;
            ll mx,mn;
            ll nn=1;
            ll cnt=1;
           
                //for max
               
                ll mi=m,pl=n;
                ll aa=x;
                while(m&&aa>0){
                    aa/=2;
                    m--;
                }
                while((n)&&aa>1){
                    
                       aa=(aa+1)/2;
                       n--;
                    }
                  
           
                mx=aa;

                //for min
                 m=mi,n=pl;
                ll aaa=x;
                while((n)&&aaa>1){
                    
                       aaa=(aaa+1)/2;
                       n--;
                    }
                    while(m&&aaa>0){
                        aaa/=2;
                        m--;
                    }
            mn=aaa;

            cout<<mn<<" "<<mx<<endl;

			
			
			
            }
            }
			
