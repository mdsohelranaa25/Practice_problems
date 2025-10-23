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
    vector<vector<ll>>vp(k+1);
        
    itr(i,n){cin>>v[i];
        
        vp[v[i]].push_back(i+1);
    }
    vector<vector<ll>>dif(k+1);

    for(int i=1;i<=k;i++){
        if(vp[i].empty()) continue;
        dif[i].push_back(vp[i][0]-1);
        itr(j,vp[i].size()-1){
            dif[i].push_back((vp[i][j+1]-vp[i][j]-1));

        }dif[i].push_back(n-vp[i][vp[i].size()-1]);
    }
   
    ll mm,nn;
    ll ans=INT_MAX;
    for(int i=1;i<=k;i++){
        srt(dif[i]);
        if(dif[i].size()>1){
        ll ln=dif[i].size();
        mm=dif[i][ln-1];
        nn=dif[i][ln-2];
        ans=min(ans,max((mm/2),nn));
        }



    }
    // for(int i=1;i<=k;i++){
    //     itr(j,dif[i].size())
    //     cout<<dif[i][j]<<" ";
    //     endd;
    // }
    cout<<ans<<endl;


    

    
    }
    }
    
