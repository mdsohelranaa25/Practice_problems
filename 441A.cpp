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
            
            ll n,hv;
            cin>>n>>hv;
            vector<vector<ll>> v(n);
            itr(i,n){
                ll x;
                cin>>x;
                itr(j,x) {
                    ll m;
                   cin>>m;
                   v[i].push_back(m);
                    
                }
            }
            vector<ll>vv; 
            itr(i,n){
                srt(v[i]);
                if(v[i][0]<hv) vv.push_back(i+1);
            }
			cout<<vv.size()<<endl;
            if(vv.size()!=0) for(auto &it:vv) cout<<it<<" ";
            if(vv.size()) endd;
			
			
            }
            
			
