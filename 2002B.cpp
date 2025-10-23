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
			#define ittr(i,bg,a) for(int i=bg;i<a;i++)
            #define yes cout<<"YES"<<endl
            #define no cout<<"NO"<<endl
            #define ll long long
            #define endd cout<<endl
            #define vc(v, n) vector<ll> v(n)  
            #define srt(v) sort(v.begin(), v.end())
			#define rsrt(v) sort(v.rbegin(), v.rend())
			#define MOD 1000000007
            #define f first
            #define sc second
            int main(){
              ios::sync_with_stdio(false);
                cin.tie(nullptr);
            tt{
            ll n;
            cin>>n;
            vc(v,n);
            vc(vv,n);
            itr(i,n) cin>>v[i];
            itr(i,n) cin>>vv[i];
            
            bool f=0;
           if(v[0]==vv[0]){
            itr(i,n){
                if(v[i]!=vv[i]) {
                    f=1;
                    break;
                }
            }
           }
           else {
            itr(i,n){
                if(v[i]!=vv[n-i-1]){
                    f=1;
                    break;
                }
            }
           }
            
      
        
            if(!f) cout<<"Bob"<<endl;

            else cout<<"Alice"<<endl;
        }

			
			
			
            }
            
			
