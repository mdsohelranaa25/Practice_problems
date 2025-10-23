/*
			//! In The Name Of Allah
				
					~Sohel~
				
				
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
    ll n,k;
    cin>>n>>k;
    vc(v,n);
    ll sum=0;
    ll mx=0;
    itr(i,n){
        
        cin>>v[i];
        sum+=v[i];
        mx=max(mx,v[i]);
        
    }
    srt(v);
    sum=n*mx-sum;
    if(k>=sum){
        k-=sum;
        cout<<mx+k/n<<endl;
    }
    else {
        ll ans=v[0];
       ll l=0,r=INT_MAX;
       ll kk=-1,ind=-1;
       while(l<=r){
        ll mid=(l+r)/2;
        ll cnt=0;
        
        for(int i=0;i<n;i++){
            if(v[i]>=mid) break;
            cnt+=mid-v[i];
            
        }
        if(cnt>k){
            r=mid-1;
        }
        else {
            l=mid+1;
            ans=mid;
        }
    }
    cout<<ans<<endl;
   
    }
}
}