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
    tt{
    ll n,k;
    cin>>n>>k;
    ll ans=0;
        vc(v,n);
        itr(i,n) cin>>v[i];
        srt(v);
        ll rm=n-k;
        if(rm%2==1&&k>0) {rm++;
            k--;
        }
        ll dv=rm/2;
        dv--;
        
        if(k==0&&n%2==1) {
            cout<<1<<endl;
            continue;
        }
        ll mx=0;
        for(int i=dv;i<(n-dv);i++){
            ll j=i+k+1;
            if(j<(n-dv)) {
                mx=v[j]-v[i]+1;
                ans=max(ans,mx);
            }
        }
        cout<<ans<<endl;



        
    
    
    
    }
    }
    
