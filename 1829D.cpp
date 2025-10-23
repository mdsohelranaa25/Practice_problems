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
    ll rec(ll n,ll m){
        if(m==n) {
            return 1;
        
        }
        
         if(m%2&&3*m<=n){
            ll c= rec(n,3*m);
            if(c==1) return 1;
            }
         
        else if(m%2==0&&3*m<=n) {
            ll a=rec(n,3*m);
            ll b=rec(n,m+m/2);
            if(a==1||b==1) return 1;
        }
        else if(m%2==0&&3*m>n) { ll b= rec(n,m+m/2);
            if(b==1) return 1;
        }
        else return 2;
        
    }
    int main(){
      ios::sync_with_stdio(false);
        cin.tie(nullptr);
    tt{
    
    
    ll n,m;
    cin>>n>>m;
        ll ans=rec(n,m);
        if(ans==1) yes;
        else no;
    
    }
    }
    
