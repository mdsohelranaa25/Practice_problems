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
    
    ll n,l;
    cin>>n>>l;
    vc(v,n);
    itr(i,n) cin>>v[i];
    ll  mx=0;
    ll cnt=0;
    srt(v);
    ll ccnt=v[0]-0;
        mx=cnt;
        itr(i,n-1){
            cnt=v[i+1]-v[i];
            mx=max(mx,cnt);
            
        }
        ll cntt=l-v[n-1];
        long double dd=mx/(double)2;
         cntt=max(ccnt,cntt);
         if(dd>cntt) cout<<fixed<<setprecision(10)<<dd<<endl;
         else cout<<cntt<<endl;

    


    
    
    }
    
    
