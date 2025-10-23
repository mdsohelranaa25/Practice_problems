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
    ll sum=0;
    itr(i,n) { cin>>v[i];sum+=v[i];
    }
    srt(v);
    ll subs=0;
    itr(i,2*k){
        subs+=v[i];
    }
    sum-=subs;
    ll sm=sum;
    ll count=0;
    ll j=n-1;
    ll i=2*k-1;
    while(k>0){
        sm+=(v[i]+v[i-1]);
        sm-=v[j];
        i-=2;
        j-=1;
        k--;
        sum=max(sum,sm);
        

    }



    cout<<sum<<endl;
    
    
    
    
    }
    }
    
