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
    vc(v,n);
    itr(i,n) cin>>v[i];
    
    map<ll,ll>mini,maxi;
    ll mn=LONG_LONG_MAX;
    ll mx=-1;
    vector<ll>vcc;
    ll lmx=0;
    // if(n==3){
    //     if(v[0]<=v[1]&&v[1]<=v[2]) cout<<0<<endl;
    //     else cout<<-1<<endl;
    //     continue;
    // }
    for(int i=n-1;i>0;i--){
        if(v[i]<=mn){
            mini[i]=i;
            mn=v[i];
            if(mx!=-1) maxi[i]=mx;
            else mx=i;
           // cout<<mini[i]<<' '<<maxi[i]<<endl;

        }
        else if(v[i]>v[mx]){
            mx=i;
            maxi[i]=maxi[i+1];
            mini[i]=mini[i+1];
            //lmx=v[i];
        }
        else{
            maxi[i]=maxi[i+1];
            mini[i]=mini[i+1];
        }
        

    }
   // for(int i=1;i<n;i++) cout<<mini[i]<<' '<<maxi[i]<<endl;
    itr(i,n-2){
        ll x=(v[mini[i+1]]-v[maxi[i+1]]);
        if(x<v[i]){
            v[i]=x;
        
        vcc.push_back(i);
        vcc.push_back(mini[i+1]);
        vcc.push_back(maxi[i+1]);
        //cout<<i<<' '<<mini[i+1]<<' '<<maxi[i+1]<<endl;
        }
    }
    bool f=0;
    mn=-INT_MAX;
    itr(i,n){
        if(v[i]<mn) {
            f=1;
            break;
        }
        else mn=v[i];
        
    }
    if(f) cout<<-1<<endl;
    else {
cout<<vcc.size()/3<<endl;
ll cnt=0;
itr(i,vcc.size()){
    cnt++;
    cout<<vcc[i]+1<<' ';
    if(cnt%3==0) cout<<endl;
}
}
    
    }
    }
    
