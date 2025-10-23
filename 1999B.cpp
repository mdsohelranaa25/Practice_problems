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
            ll a,b,c,d;
            cin>>a>>b>>c>>d;
            ll cnt=0;
            // if((a>c&&a>d)&&(b>=c||b>=d)) {cnt+=2; 
            //     if(b==c&&b==d) cnt+=2;
            // }
            // if((b>c&&b>d)&&(a>=c||a>=d)) {cnt+=2; if(a==c&&a==d) cnt+=2;
            // }
            if(a==c){
                if(b>d) cnt++;
            }
            if(a==d) {
                if(b>c) cnt++;
            }
            if(a>c){
                if(b>=d) cnt++;
            }
            if(a>d){
                if(b>=c)cnt++;
            }
            if(b==c){
                if(a>d) cnt++;
            }
            if(b==d){
                if(a>c) cnt++;
            }
            if(b>c) if(a>=d) cnt++;
            if(b>d) if(a>=c) cnt++;

            cout<<cnt<<endl;
			
			
			
            }
            }
			
