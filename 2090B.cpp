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
            
			ll n,m;
            cin>>n>>m;
            set<ll>str,stc;
            vector<vector<char>>v(n,vector<char>(m));
            itr(i,n){
                itr(j,m){
                    cin>>v[i][j];
                }
            }
			itr(i,n){
                bool z=0;
                itr(j,m){
                    if(v[i][j]=='0') z=1;
                    if(v[i][j]=='1'&&z==1) stc.insert(j);
                }
            }
            bool f=0;
            for(auto j:stc){
                bool on=1,zr=0;
            
                if(f) break;
                // itr(i,n){
                //     if(v[i][j]=='1'&&zr==1){
                //         f=1;
                //         break;
                //     }
                //     if(v[i][j]=='1'&&on==1) on=0;
                //     if(v[i][j]=='0'&&on==0) {
                //         f=1;
                //         break;
                //     }
                //     if(v[i][j]=='0'&&on==1){

                //         zr=0;
                //     }
                  
                // }
                itr(i,n-1){
                    if(v[i][j]=='0'&&v[i+1][j]=='1'){
                        f=1;
                        break;
                    }
                }

            }
            if(f) no;
            else yes;
			
            }
            }
			
