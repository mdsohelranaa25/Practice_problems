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
 set<ll>st;
 map<ll,ll>mp,mpp;
 itr(i,n){
    mp[v[i]]++;
    st.insert(v[i]);
 }
 ll l=-1,h=-1;
 ll a,b;
ll mx=1;
ll cnt=0;
ll i=0;
bool  f=0;
while(i<n){
    if(mp[v[i]]==1){
        cnt++;
        if(f==0){
            a=i+1;
            f=1;
        }
        if(cnt>=mx){
            b=i+1;
        }
        
    }
    else {
        if(f){
            f=0;
        if(cnt>=mx){
            mx=cnt;
            l=a;
            h=b;
        }
        cnt=0;
    }
    else f=0;
    }
    i++;

}   if(cnt>=mx){
    l=a;
    h=b;

}
if(n==1) cout<<"1 1"<<endl;
else if(l==-1&&h==-1) cout<<0<<endl;
else if(st.size()==1) cout<<0<<endl;
else cout<<l<<" "<<h<<endl;
    
    }
    }
    
