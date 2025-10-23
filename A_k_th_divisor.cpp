		/*
			//! In The Name Of Allah
				
					~~Sohel~~
				
				
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
  
        ll n,k;
        cin>>n>>k;
        vector<ll>divisor;
        for(ll i=1;i*i<=n;i++){
            if(n%i==0){divisor.push_back(i);
                if(n/i!=i) divisor.push_back(n/i);
            }
                
        }

   // for(auto x:divisor) cout<<x<<' ';
   srt(divisor);
    //for(auto x:divisor[n]) cout<<x<<' ';
    if(divisor.size()<k) cout<<-1<<endl;
    else cout<<divisor[k-1]<<endl;
}
    
