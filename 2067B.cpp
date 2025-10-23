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
            map<ll,ll>mp;
            itr(i,n) cin>>v[i];
            set<ll>st;
            itr(i,n){
                mp[v[i]]++;
                st.insert(v[i]);
            }
            bool f=0;
           vector<ll>un;
            for(auto &it:st){
                un.push_back(it);
            }
            rsrt(un);
            // itr(i,un.size()) cout<<un[i]<<" ";
            // endd;
            ll need=0;
            ll lg=0;
            itr(i,un.size()){
               if(need==0){
                if(mp[un[i]]%2!=0){
                    need=un[i];
                    lg=1;
                }
               }
               else{
                ll nd;
                nd=(need-un[i])*2;
                nd+=lg;
                if(mp[un[i]]>=nd){
                    lg=(mp[un[i]]-nd)%2;
                    if(lg!=0) need=un[i];
                    else need=0;
                }
                else {
                    lg=nd-mp[un[i]];
                    need=un[i];
                }
               }
            }
            // itr(i,un.size()) cout<<mp[un[i]]<<" ";
            // endd;
            // cout<<lg<<endl;
            if(lg!=0) no;
            else yes;
            }
            }
			
