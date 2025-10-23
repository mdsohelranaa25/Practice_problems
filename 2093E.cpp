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
    vc(v,n);
    vector<vector<ll>>vp;
    map<ll,ll>mp;
    itr(i,n){
        cin>>v[i];
        mp[v[i]]++;
        vp[v[i]].push_back(i+1);
    }
    if(mp[0]==0||mp[0]<k) cout<<0<<endl;
    else {  
        if(k==1){
            srt(v);
            itr(i,n){
                if(mp[i]==0){
                    cout<<i<<endl;
                    break;
                }
            }
        }

        ll i=0;
        while(mp[i]>=k) i++;
        ll mx=i;
        



    }
    
    
    }
    }
    
