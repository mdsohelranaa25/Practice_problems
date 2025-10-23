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
            #define in(ch) for(auto &it:ch) cin>>it
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
        
            
			ll n;
            cin>>n;
         char ch[n][n];
         itr(i,n){
            string s;
            cin>>s;
            itr(j,n){
                ch[i][j]=s[j];
            }
         }
            char c;
           c= ch[0][0];
           char cc=ch[0][1];
           bool b=1;
           if(c==cc) {
            no;
           return 0;
           }
           itr(i,n){
            itr(j,n){
                if(i==j||(i+j==n-1)){
                    if(ch[i][j]!=c){
                        b=0;
                        break;
                    }
                }
                else {
                    if(ch[i][j]!=cc){
                        b=0;
                        break;

                    }
                }
                
            }
            if(b==0) break;
            
            
           }
           if(b==0) no;
           else yes;
			
			
            }
            
			
