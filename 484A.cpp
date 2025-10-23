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
        ll rec(ll n,ll m){
                ll i=1;
                while(i*2-1<=m){
                    i*=2;
 
                }
             if(n==m) return n;
             
             else if(i-1>=n) return i-1;
          
 
             else {
               return i+rec(n-i,m-i);
            }
        }
            int main(){
              ios::sync_with_stdio(false);
                cin.tie(nullptr);
            tt{
              
                ll n,m;
                cin>>n>>m;
                ll i=1;
                
                while(i*2-1<=m){
                    i*=2;
 
                }
             if(n==m) cout<<n<<endl;
             a
             else if(i-1>=n) cout<<i-1<<endl;
          
 
             else {
              ll an=rec(n-i,m-i);cout<<i+an<<endl;
            

             }
 
            }
            }
		