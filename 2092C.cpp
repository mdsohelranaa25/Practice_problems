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
    ll sum=0;
    ll odd=0;
    itr(i,n){
        cin>>v[i];
        sum+=v[i];
        if(v[i]%2) odd++;
    }
    srt(v);
    if(n==odd) cout<<v[n-1]<<endl;
    else if(odd==0) cout<<v[n-1]<<endl;
    else {
        sum-=(odd-1);
        cout<<sum<<endl;
    }
    
    
    
    }
    }
    
