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
            string s;
            cin>>s;
			ll i=0,j=n-1;
            bool f=1;
            bool k=1;
            while(i<j){
                if(s[i]>s[j]){
                    if(m){
                    yes;
                    f=0;
                    break;
                    }
                    else {
                        k=0;
                        break;
                    }
                }
                else if(s[i]<s[j]){
                    f=0;
                    yes;
                    break;
                }
                else {
                    i++;
                    j--;
                }


            }
            if(f==1&&k==0){ no;

            }
            else if(f==1&&k==1){
                if(m>0){
                i=0;
                while(i<n-1){
                    if(s[i+1]<s[i]){
                        k=0;
                        yes;
                        break;
                    }
                    i++;
                }
                if(k) no;

            }
            else no;
        }
			
            }
            }
			
