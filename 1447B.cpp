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
            #define endd cout<<endl
            #define vc(v, n) vector<ll> v(n)  
            #define srt(v) sort(v.begin(), v.end())
            #define f first
            #define sc second
            int main(){
              ios::sync_with_stdio(false);
                cin.tie(nullptr);
            tt{
                ll n,m;
                cin>>n>>m;
                vc(v,n*m);
                ll ng=0;
                ll sm=0;
                for(int i=0;i<n*m;i++){
                    ll x;
                    cin>>x;
                    v[i]=abs(x);
                    sm+=v[i];
                    if(x<0) ng++;

                }
                srt(v);
                if(ng%2){
                    sm-=2*v[0];
                    cout<<sm<<endl;

                }
                else cout<<sm<<endl;

            
            }
            }