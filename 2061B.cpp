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
            int main(){
              ios::sync_with_stdio(false);
                cin.tie(nullptr);
            tt{
                ll n;
                cin>>n;
                vector<ll>v(n);
                map<int,int>mp;
                set<int>st;
                for(auto &it:v){
                cin>>it;
                mp[it]++;
                st.insert(it);
                }
                sort(v.begin(),v.end());
                vector<int>sng;
                vector<ll>dbl;
               for(auto it:st){
                if(mp[it]>=2) {dbl.push_back(it);
                    while(mp[it]-->2) sng.push_back(it); 
                }
                else sng.push_back(it);

               }
               sort(dbl.rbegin(),dbl.rend());
bool flag=true;
               for(int j=0;j<dbl.size();j++){
               for(int i=1;i<sng.size();i++){
                if((sng[i]-sng[i-1])<2*dbl[j]){
                cout<<dbl[j]<<" "<<dbl[j]<<" "<<sng[i-1]<<" "<<sng[i]<<endl;
                flag=false;
                break;
                }
               }
               if(!flag) break;
            }
            if(flag){
            if(dbl.size()>=2) {
                int i=0;
                    cout<<dbl[i]<<" "<<dbl[i]<<" "<<dbl[1]<<" "<<dbl[1]<<endl;
                    flag=false;
                
            }
            else cout<<-1<<endl;
            
        }

           



               




                
            
            }
            }