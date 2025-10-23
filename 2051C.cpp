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
                ll n,m,k;
                cin>>n>>m>>k;
                vc(nai,m);
                for(auto &it:nai) cin>>it;
                map<ll,ll>jani;

                itr(i,k){
                    ll x;
                    cin>>x;
                    jani[x]++;
                }
                if(n==k) itr(i,m) cout<<1;
                
                else if(n-k>=2) itr(i,m) cout<<0;
                else {

                string s;
                itr(i,m){
                    if(jani[nai[i]]==1) s+='0';
                    else s+='1';
                    

                }
                cout<<s;
            }
            cout<<endl;

            
            }
            }