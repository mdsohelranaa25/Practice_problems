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
    #define MOD 1000003
    #define mod 1000000000000000007
    #define f first
    #define sc second
    int main(){
      ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll cc=1;
    tt{
    ll n,k;
    cin>>n>>k;
    ll ans=1;
   
    ll div=1;
    for(int i=1;i<=(n-k);i++) {
        div*=i;
        div%=MOD;
    }
    ll f=0;
    for(int i=n;i>k;i--){
        ans*=i;
         if(ans>div&&f==0) {
            ans/=div;
            f=1;
         } 
         else if(ans>div&&f==1)
         ans%=MOD;
       
    }
    if(f==0) ans/=div;
    //cout<<div<<' ';
    ans%=MOD;
    cout<<"Case "<<cc++<<": "<<ans<<endl;
    
    
    
    
    }
    }
    
