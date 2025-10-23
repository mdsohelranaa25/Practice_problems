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
    ll arr[n][2];
    map<ll,ll>mp;
    
    vector<ll>unq;
    itr(i,n){
        ll a,b;
        
        cin>>a>>b;
        arr[i][0]=a;
        arr[i][1]=b;
        if(a==b) { 
            mp[a]++;
            if(mp[a]==1) unq.push_back(a);
        }
    }
   
    srt(unq);
    itr(i,n){
        ll a=arr[i][0];
        ll b=arr[i][1];
       
        if(a==b){
            if(mp[a]==1){ 
           cout<<1;
           
            }
            else cout<<0;
        }
        else if(b-a+1>unq.size()) {cout<<1; 
        }
        else if(unq.size()>=(b-a+1)){
            ll mm=unq.size();
            if(mm==(b-a+1)){
                if((a==unq[0])&&(b==unq[mm-1])) cout<<0;
                else cout<<1;
            }

            else {
                if(a<unq[0]||a>=unq[unq.size()-1]||b<=unq[0]||b>unq[unq.size()-1]){
                            cout<<1;
                        }
                        else {
                auto mn=lower_bound(unq.begin(),unq.end(),a);
                auto nn=lower_bound(unq.begin(),unq.end(),b);
                ll dif=nn-mn;
                if(dif<(b-a)) cout<<1;
                else cout<<0;
            }
        }
        }
  
    }
    cout<<endl;
}
    }
    
