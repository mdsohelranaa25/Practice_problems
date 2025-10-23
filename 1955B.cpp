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
    
    ll n,c,d;
    cin>>n>>c>>d;
    vc(v,n*n);
    itr(i,n*n) cin>>v[i];
    vc(vv,n*n);
    ll b=-1,bb=-1;
    srt(v);
    b=v[0];
    map<ll,ll>mp,mpp;
    itr(i,n){
        bb=b;
        itr(j,n){
            mp[bb]++;
            bb+=d;
            
            

        }
        b+=c;
    }
    set<ll>st;
    itr(i,n*n){
        mpp[v[i]]++;
        st.insert(v[i]);
    }
    bool flag=true;
    for(auto &it:st){
        if(mp[it]!=mpp[it]){
            flag=false;
            break;

        }

    }
    if(flag) yes;
    else no;
    
    
    
    }
    }
    
