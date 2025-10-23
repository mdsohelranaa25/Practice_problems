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
    
    
    ll n,m,k;
    cin>>n>>m>>k;
    vc(v,n);
    itr(i,n) cin>>v[i];
    vc(vv,m);
    itr(i,m) cin>>vv[i];
    set<ll>st1,st2,stt;

    itr(i,n){
        if(v[i]<=k) { stt.insert(v[i]);
            st1.insert(v[i]);
        }
    }
    itr(i,m) {
        if(vv[i]<=k) { stt.insert(vv[i]);
            st2.insert(vv[i]);
        }
    }
    if(st1.size()<k/2||st2.size()<k/2||stt.size()<k) no;
    else yes;
    
    
    }
    }
    
