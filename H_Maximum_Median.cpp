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
    vc(v,n);
    itr(i,n) cin>>v[i];
    srt(v);
    vector<ll>vv;
    for(int i=n/2;i<n;i++){
        vv.push_back(v[i]);
    }
    ll mx=0;
    n=vv.size();
    ll lo=vv[0],hi=vv[n-1]+k;
    while(lo<=hi){
        ll mid=(lo+hi)/2;
        ll f=1;
        ll cnt=k;
        itr(i,n){
            if(mid<=vv[i]) break;
            else cnt-=(mid-vv[i]);
            if(cnt<0) break;

        }
        if(cnt>=0){
            lo=mid+1;
            mx=max(mx,mid);
        } else hi=mid-1;

    }
    cout<<mx<<endl;
    
    }
    
    
