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
            ll n,m;
            cin>>n>>m;
            vector<vector<ll>>v(n,vector<ll>(m));
            itr(i,n){
                itr(j,m){
                    cin>>v[i][j];
                }
            }
            itr(i,n){
                itr(j,m){
                    ll a=-1,b=-1,c=-1,d=-1,e=v[i][j];
                    if(i>0) a=v[i-1][j];
                    if(j>0) b=v[i][j-1];
                    if(i<n-1) c=v[i+1][j];
                    if(j<m-1) d=v[i][j+1];
                    if(e>a&&e>b&&e>c&&e>d){
                        v[i][j]=max(a,max(b,max(c,d)));
                    }

                    

                }
            }
            // itr(i,n){
            //     itr(j,m){
            //         ll a=-1,b=-1,c=-1,d=-1,e=v[i][j];
            //         if(i>0) a=v[i-1][j];
            //         if(j>0) b=v[i][j-1];
            //         if(i<n-1) c=v[i+1][j];
            //         if(j<m-1) d=v[i][j+1];
            //         if(e>a&&e>b&&e>c&&e>d){
            //             v[i][j]=max(a,max(b,max(c,d)));
            //         }

                    

            //     }
            // }
            itr(i,n){
                itr(j,m){
                    cout<<v[i][j]<<" ";
                }
                endd;
            }
            endd;
            
			
			
			
            }
            }
			
