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
    
    string s,ss;
    cin>>s>>ss;
    ll n,nn;
    n=s.length();
    nn=ss.length();
    if(n>nn){
        string tm=s;
        s=ss;
        ss=tm;
        swap(n,nn);
    }
    
    ll cnt=0,mx=0;
    ll stp=0;
    ll mm=0;
    while(mm<n){
        stp=0;
    itr(i,nn){
        cnt=0;
      
        if(s[mm]==ss[i]){
            cnt=0;
            ll j=i;
            while(j<nn&&ss[j]==s[j-i+mm]&&(j-i+mm<n)){ cnt++; j++;
            }
            stp=max(stp,cnt);
        }
        
    }
    mm++;
    mx=max(mx,stp);
}
cout<<(n+nn-mx*2)<<endl;
    
    
    }
    }
    
