
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
            map<int,int>mp;
            itr(i,n) {cin>>v[i]; mp[v[i]]++;
            }
            
			if(mp[0]==0) {
                cout<<1<<endl;
                cout<<1<<" "<<n<<endl;
            }
            else if(v[0]!=0){
                cout<<2<<endl;
                cout<<2<<" "<<n<<endl;
                cout<<1<<" "<<2<<endl;
            }
            else if(v[n-1]!=0){
                cout<<2<<endl;
                cout<<1<<" "<<n-1<<endl;
                cout<<1<<" "<<2<<endl;
            }
            else {
                cout<<3<<endl;
                ll i=0;
                while(v[i]==0&&i<n-1) i++;
            if(i==n-1){
                cout<<3<<" "<<n<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<1<<" "<<2<<endl;

                }
                else {
                    if(i==1){
                    cout<<i+2<<" "<<n<<endl;
                    cout<<1<<" "<<2<<endl;
                    }
                    else {cout<<i+1<<" "<<n<<endl;
                    cout<<1<<" "<<i<<endl;
                    }
                    cout<<1<<" "<<2<<endl;



                }
                
            }
            }
            }
			
