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
            ll n,m,k;
            cin>>n>>m>>k;
            ll ans=0;
            ll inr;
            inr=k/n;
            if(k%n!=0) inr++;
            if(inr==1) cout<<1<<endl;
            else {
                ll sp=m-inr;
                sp++;
                ans=inr/sp;
                if(inr%sp!=0) ans++;
                cout<<ans<<endl;
            }



            }
            }


