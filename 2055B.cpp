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
            #define in(v) for(auto &it:v) cin>>it
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
            vc(have,n);
            vc(need,n);
            in(have);
            in(need);
            ll less=0;
            ll rem=0;
            ll ind;
            itr(i,n){
                if(have[i]<need[i]){
                    if(less>0) break;
                    less++;
                    ind=i;
                    rem=need[i]-have[i];
                }


            }
            bool f=0;
            if(less>1) no;
            else {
                itr(i,n){
                    if(i==ind) continue;
                    else {
                        if(have[i]-need[i]<rem) { f=1;break;}
                    }

                }
                if(f) no;
                else yes;
            }
			
            }
            }
			
