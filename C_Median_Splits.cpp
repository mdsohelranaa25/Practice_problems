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
    ll sm=0;
    ll mx=0,cnt=0;
    itr(i,n){
        cin>>v[i];
      
    }
    cnt=0;
    ll bg=0;
    ll pos=n+1;
    bool f=0;
   sm=0;
    itr(i,n){
        if(v[i]<=k) sm++;
        else bg++;
        if(sm>=bg){
            if(sm>bg&&v[i+1]>k) i++;
            sm=0,bg=0,cnt++;
            if(!f) {pos=i; f=1;
            }
            
        }
        if(cnt>=2) break;

    }
    if(cnt>=2) yes;
   
    else {
        // cout<<pos<<' ';
        // cout<<cnt<<' ';
       // bool ff=0;
        cnt=0;
        sm=0,bg=0;
        for(ll i=n-1;i>=0;i--){
            if(v[i]<=k) sm++;
            else bg++;
            if(sm>=bg){
                
                if(i>pos) {
                    cnt+=2;
                    break;
                }
                else if(sm>bg&&v[i-1]>k)i--;
            
                sm=0,bg=0,cnt++;

            }
            
            if(cnt>=2) break;
        
    
        }
       // cout<<cnt<<endl;
        if(cnt>=2) yes;
        else no;


    }
    
    
    }
    }
    
