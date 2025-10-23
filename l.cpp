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
      #define pb(x) push_back(x)
      #define endd cout<<endl
      #define vc(v, n) vector<ll> v(n)  
      #define srt(v) sort(v.begin(), v.end())
      #define rsrt(v) sort(v.rbegin(), v.rend())
      #define f first
      #define sc second
      int main(){
        ios::sync_with_stdio(false);
          cin.tie(nullptr);
     ll n;
     cin>>n;
     vector<ll>ps;
     vector<ll>ng;
     ll x;
     for(int i=0;i<n;i++){
      cin>>x;
      if(x>=0) ps.pb(x);
      else ng.pb(x);
     }
     srt(ps);
     rsrt(ng);
     ll m=INT_MAX;
     ll mm=INT_MAX;
     if (!ps.empty()) mm = abs(ps[0]);
     if (!ng.empty()) m = abs(ng[0]);
     cout<<min(mm,m)<<endl;
      }