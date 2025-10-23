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
            
                
             ll n;
             cin>>n;
             string s;
             cin>>s;
             set<char>st;
             map<char,int>hi,lo;
             lo[s[0]]=0;
             for(int i=1;i<n;i++){
                if(s[i]!=s[0]){
                    if(lo[s[i]]==0) lo[s[i]]=i;
                    
                }
                hi[s[i]]=max(i,hi[s[i]]);
             }
             int l=INT_MAX,h=-1;
             bool f=1;
            for(auto &it:s) {
                st.insert(it);
            }
            string alp;
            for(auto &it:st) alp+=it;
            for(int i=0;i<alp.length();i++){
                for(int j=i+1;j<alp.length();j++){
                    if(hi[alp[i]]>lo[alp[j]]){
                        cout<<"YES"<<endl;
                        cout<<lo[alp[j]]+1<<" "<<hi[alp[i]]+1<<endl;
                        f=0;
                        break;
                    }
                }
                if(f==0) break;
            }
            if(f) cout<<"NO"<<endl;
            
       
            // bool f=0;
            // int i=0,j=n-1;
            // while(i<j){
            //     if(s[i]>s[j]){
            //         cout<<"YES"<<endl;
            //         cout<<i+1<<" "<<j+1<<endl;
            //         f=1;
            //         break;

            //     }
            //     i++;
            // }
            // if(f==0) cout<<"NO"<<endl;
           
             


            }
            