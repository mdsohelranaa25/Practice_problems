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
            #define rsrt(v) sort(v.rbegin(), v.rend())
            #define f first
            #define sc second
            int main(){
              ios::sync_with_stdio(false);
                cin.tie(nullptr);
            tt{
            ll n,k;
            cin>>n>>k;
            vc(v,n);
            for(auto &it:v) cin>>it;
            if (k == 1) {
                if(n==2) {
                    cout<<v[0]+v[1]<<endl;
                    continue;
                }
                if (n > 2) sort(v.begin() + 1, v.begin() + (n - 1));
                ll m = (v[0] > v[n - 1]) ? v[0] : v[n - 1];
                if (n > 1) m+=v[n-2];
                if((v[0]+v[n-1])>m) cout<<v[0]+v[n-1]<<endl;
                else cout<<m<<endl;
            }
            else {
                rsrt(v); ll cnt=0;
                itr(i, min(k + 1, n)){ cnt+=v[i];


                }
                cout<<cnt<<endl;
            }

			
			
			
            }
            }
			
