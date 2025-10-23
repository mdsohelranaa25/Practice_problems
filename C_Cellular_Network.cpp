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

    
    ll n,m;
    cin>>n>>m;
    vc(v,n);
    vc(vv,m);
    itr(i,n) cin>>v[i];
    itr(i,m) cin>>vv[i];
    srt(v);
    srt(vv);
    ll l=0;
    ll i=0;
    
    ll lo=0,hi=LONG_LONG_MAX;
    ll rng=hi;
    while(lo<=hi){
        ll mid=(lo+hi)/2;
        ll r=mid;
        bool f=1;
        for(int i=0;i<n;i++){
            auto lind=lower_bound(vv.begin(),vv.end(),v[i]);
            ll up=*lind;
            if(lind!=v.begin())lind--;
            ll dwn=*lind;
            if(abs(up-v[i])>r&&abs(dwn-v[i])>r) {
                f=0;
                break;
            }

        }
        if(f) {
            rng=min(rng,mid);
            hi=mid-1;
        } else lo=mid+1;

    }
    cout<<rng<<endl;
    
    
    }
    
    
