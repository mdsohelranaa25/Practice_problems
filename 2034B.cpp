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
            ll n,m,k;
            cin>>n>>m>>k;
            string s;
            cin>>s;
            ll cnt=0;
            ll i=0;
            while(i<n-m+1){
                ll one=0;
                if(s[i]=='0'){
                one=count(s.begin()+i,s.begin()+(i+m),'1');
                if(one==0){
                    ittr(j,i+m-1,min(i+m+k-1,n))
                    s[j]='1';
                    cnt++;
                    i=min(i+m+k-1,n);
                }
                else{
                    i=i+m-1;
                    while(s[i]=='0'){
                        i--;

                    }
                }


            }
            else i++;
			
			
			
            }
            cout<<cnt<<endl;
        }
            }
			
