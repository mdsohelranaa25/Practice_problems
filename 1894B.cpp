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
    set<ll>st;
    map<ll,ll>mp;
    vc(v,n);
    itr(i,n) {cin>>v[i];
        mp[v[i]]++;
        st.insert(v[i]);
    }
    ll cnt=0;
    ll a=-1,b=-1;
   for(auto &it:st) {
    if(cnt==2){
        break;
    }
    if(mp[it]>=2) {cnt++;
        if(cnt==1) a=it;
        else if(cnt==2) b=it;
    }

    
    }
    if(cnt<2) cout<<-1<<endl;
    else{
    ll f=1,s=1;
    itr(i,n){
        if(v[i]==a&&f<=3){ 
            cout<<f<<" ";
            f+=2;

        }
        else if(v[i]==b&&s<3){
            cout<<s<<" ";
            s++;
        }
        else cout<<1<<" ";
    }
    endd;
}
   }
    
    }
    
    
