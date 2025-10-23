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
    
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v;
    itr(i,n){
        ll a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    srt(v);
   
        ll cnt=0;
    vector<pair<ll,ll>>vv;
        ll i=0;while(i<n){
            cnt++;
            ll fs=v[i].sc;
        while(i<n&&v[i].f<=fs) {
            if(v[i].sc<fs) vv.push_back(make_pair(v[i].f,v[i].sc));
            i++;

        }

    }
    vector<pair<ll,ll>>vvv;
    n=vv.size();
 i=0;while(i<n){
        cnt++;
        ll fs=v[i].sc;
    while(i<n&&v[i].f<=fs) {
        if(v[i].sc<fs) vvv.push_back(make_pair(v[i].f,v[i].sc));
        i++;

    }


}
cnt+=vvv.size();

    cout<<cnt<<endl;

    }

    
    
    
    }
    
