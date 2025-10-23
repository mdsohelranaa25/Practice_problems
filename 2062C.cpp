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
    ll cnt=0;
    vc(v,n);
    ll sum=0;
    itr(i,n) {cin>>v[i];
        sum+=v[i];
    }
    ll a=0,b=0;
    
    bool f=1;
    while(f){
        if(v.size()==1) {
            f=0;
            break;
        }
        else{
        a=0,b=0;
        vector<ll>vv=v,ar,br;
        itr(i,v.size()-1){
            ar.push_back(v[i+1]-v[i]);
           
            

        }
        
        reverse(vv.begin(),vv.end());
        itr(i,vv.size()-1){
            br.push_back(vv[i+1]-vv[i]);
        }
        itr(i,ar.size()){
            a+=ar[i];
            b+=br[i];
        }
        sum=max({sum,a,b});
        v.clear();
        if(a>=b) v=ar;
        else v=br;
       if(v.size()==1){
        sum=max(sum,v[0]);
       }
    }
}
    
    
    
    cout<<sum<<endl;

    
    
    }
    }
    
