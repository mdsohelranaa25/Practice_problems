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
               ll m;
               cin>>m;
               vector<string>s;
               itr(i,m) {
                string ss;
                cin>>ss;
                s.push_back(ss);
               }
               itr(i,m){
                ll mm=s[i].length();
                if(mm!=n) no;
                else {
                    ll f=1;
                    map<int,char>mp;
                    map<char,int>mpp;
                    itr(j,n){
                        if((mp.find(v[j])==mp.end())&&(mpp.find(s[i][j])==mpp.end())){
                            mpp[s[i][j]]=v[j];
                            mp[v[j]]=s[i][j];
                        }
                        
                        else if(mp[v[j]]!=s[i][j]){
                            no;
                            f=0;
                            break;
                        }
                    }
                    if(f) yes;
                }
               }

            
            }
            }
			
