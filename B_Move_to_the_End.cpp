		/*
			//! In The Name Of Allah
				
			
				
				
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
    #define endl '\n'
    int main(){
      ios::sync_with_stdio(false);
        cin.tie(nullptr);
    tt{
    
    
    ll n;
    cin>>n;
    vc(v,n) ;
    itr(i,n) cin>>v[i];
    ll mx[n];
    ll mxx=0;
    for(int i=0;i<n;i++){
        mxx=max(mxx,v[i]);
        mx[i]=mxx;
        
    }
    ll suf[n+5];
    suf[n]=0;
    for(int i=n-1;i>=0;i--){
        suf[i]=suf[i+1]+v[i];

    }
    itr(i,n){
        cout<<suf[n-i]+mx[n-i-1]<<' ';
    }
    endd;
    
    }
    }
    
