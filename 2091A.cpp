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
            itr(i,n) cin>>v[i];
            ll cnt=0;
            ll ind=-1;
            ll on=1,zr=3,tw=2,fv=1,tr=1;
            itr(i,n){
                if(cnt==8){
                    ind=i;
                    break;
                }
                if(v[i]==1&&on>0) {on--; cnt++;
                }
                else if(v[i]==0&&zr>0){
                    zr--;
                    cnt++;
                    
                }
                else if(v[i]==3&&tr>0){
                    tr--;
                    cnt++;
                }
                else if(v[i]==2&&tw>0) {
                    tw--;
                    cnt++;
                }
                else if(v[i]==5&&fv>0) {
                    fv--;
                    cnt++;
                }
                
            }
            if(cnt<8) cout<<0<<endl;
            else {
                if(ind!=-1) cout<<ind<<endl;
                else cout<<n<<endl;
            }
			
			
			
            }
            }
			
