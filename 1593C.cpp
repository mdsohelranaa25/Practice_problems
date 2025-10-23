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
                tt{
                    ll hl, k;
                    cin >> hl >> k;
                    vc(v, k);
                    unordered_map<ll, ll> mp; 
                    for (auto &it : v) {
                        cin >> it;
                        mp[it]++;
                    }
                    ll pos = 0;
                    ll save = 0;
                    for (ll i = hl - 1; i > 0; i--) {
                        ll total = mp[i] * (hl - i);
                        if (i <= pos) break;
                        if ((i - pos) >= total) {
                            pos += total;
                            save += total / (hl - i);
                        }
                        else {
                            ll need = i - pos;
                            ll steps = (need + (hl - i) - 1) / (hl - i);
                            save += steps;
                            pos += steps * (hl - i);
                            break;
                        }
                    }
                    cout << save << endl;
                }
            }
            