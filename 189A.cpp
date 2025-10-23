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
            #define rsrt(v) sort(v.rbegin(),v.rend())
            #define f first
            #define sc second
            int main(){
              ios::sync_with_stdio(false);
                cin.tie(nullptr);
            ll n;
            ll a,b,c;
            ll ar[3];
            for(auto &it:ar) cin>>it;
            sort(a,a+3);
            ar[2]=a;
            ll cnt=0;
            ar[1]=b;
            ar[0]=c;
            vector<ll>v;
            if(n%a==0){
                cout<<n/a;

            }
           
            else {
                ll r1=n%a;
                cnt=n/a;
                if(r1%b==0||r1%c==0){
                    ll m=(r1%b==0)?r1/b:r1/c;
                    cout<<cnt+m<<endl;
                }
                else {
                    ll rr=n%a;
                    bool f=1;
                    while(rr>0){
                        rr-=a;
                        if(rr%b==0) {v.push_back(rr/b); break;
                        }

                    }
                    rr=n%a;
                    while(rr>0){
                        rr-=a;
                        if(rr%c==0) {v.push_back(rr/c); break;
                        }

                    }
                    rr=n%a;
                    bool f=1;
                    while(f){
                       ll rm1=rr-a;
                       while(f){
                        if(rm1)
                       }

                    }
                    
                    rsrt(v);
                    cout<<v[0]<<endl;
                    
                }

                
            }
            }
			
