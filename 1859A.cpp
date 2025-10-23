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
                ll n;
                cin>>n;
                vc(v,n);
                for(auto &it:v) cin>>it;
                srt(v);
                if(n==2){ if(v[0]!=v[1]){ cout<<"1 1"<<endl<<v[0]<<endl<<v[1]<<endl;}
                    else cout<<-1<<endl;
                }
                else {
                    int i=0;
                    bool f=1;
                    while(i<n-1){
                        if(v[i]!=v[i+1]) { f=0;break;
                        }
                        i++;

                    }
                    if(f) {
                        cout<<-1<<endl;
                        continue;
                    }
                    
                    ll rng=i;
                    cout<<rng+1<<" "<<n-i-1<<endl;
                    for(int i=0;i<=rng;i++){
                        cout<<v[i]<<" ";
                    }
                    cout<<endl;
                    for(int i=rng+1;i<n;i++){
                        cout<<v[i]<<" ";

                    }
                    cout<<endl;

                }

            
            }
            }