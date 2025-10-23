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
    #define endl '\n'
    int main(){
      ios::sync_with_stdio(false);
        cin.tie(nullptr);
    
    ll n,q;

    cin>>n>>q;
    vc(v,n);
    ll sum=0;
    itr(i,n) { cin>>v[i]; sum+=v[i];
    }
    set<ll>st;
    map<ll,ll>mp;
    bool f=0;
    ll al=-1;
    while(q--){
        ll x,y,z;
        cin>>x;
        
     
      
        if(x==1) {
            cin>>y>>z;
            if(f){
              //  cout<<al<<' ';
                if(mp[y-1]==0){
            ll ad=z-al;
            sum+=ad;
            mp[y-1]=z;
            cout<<sum<<endl;
                }
                else {
                    ll ad=z-mp[y-1];
                    sum+=ad;
                    mp[y-1]=z;
                    cout<<sum<<endl;
                }
            }
            else {
                ll ad=z-v[y-1];
                sum+=ad;
                v[y-1]=z;
                cout<<sum<<endl;
            }

        }
        else {
            
            mp.clear();
            cin>>y;
            sum=n*y;
            f=1;
            al=y;
            cout<<sum<<endl;
        }
       
    }
   // cout<<sum<<endl;

    
    
    
    }
    
    
