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
            #define itr(i,a) for(ll i=0;i<a;i++)
            #define ittr(i,bg,a) for(ll i=bg;i<a;i++)
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
            vc(v,m);
            ll cnt=0;
            for(auto &it:v) cin>>it;
            srt(v);
                itr(i,m){
                    ittr(j,i+1,m){
                         ll mm;
                         if(v[i]==v[i-1]&&i!=0) continue;
                        mm=(((v[j]+v[i])-n)+1)*2;
                        if(mm>0)
                        cnt+=mm;

                    }
                }
                cout<<cnt<<endl;
			
            }
            }
			
