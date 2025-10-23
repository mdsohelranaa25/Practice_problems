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
    ll cc=k;
    vc(v,n);
    itr(i,n) cin>>v[i];
    vc(vv,n);
    itr(i,n) cin>>vv[i];
    ll sum=-1;
    itr(i,n){
        if(vv[i]>=0&&v[i]>=0){
            sum=v[i]+vv[i];
            break;
        }
    }
    if(sum==-1){
        srt(v);
        ll m=v[n-1];
        ll mm=v[0];
        ll mx=v[0]+k;
        cout<<mx-m+1<<endl;
     

    } else {
    
    bool f=0;
    itr(i,n){
        if(vv[i]>=0&&(v[i]+vv[i])!=sum){
            f=1;
            break;
        }
        if(vv[i]<0&&v[i]>sum){
            f=1;
            break;
        }
    }
    srt(v);
    ll lo=v[0];
    if(sum>(k+v[0])) f=1;
    //cout<<sum<<endl;
    if(f) cout<<0<<endl;
    else cout<<1<<endl;
    
}
    }
    }
    
