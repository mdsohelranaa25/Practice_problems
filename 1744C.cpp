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
    char c;
   

    cin>>n;
    cin>>c;
    string s;
    cin>>s;
    ll cnt=0,ans=0;
    bool f=0;
    if(c=='g') cout<<0<<endl;
    else {
    itr(i,n){
        if(s[i]=='g'&&f==1){
           
            ans=max(ans,cnt);
            cnt=0;
            f=0;
        }
        else if(s[i]==c&&f==0){
            f=1;
            cnt=1;
            
        }
        else if(f) cnt++;

    }
    if(f==1){
    itr(i,n){
        if(s[i]=='g'){
            
            ans=max(ans,cnt);
            break;
        }
        else cnt++;
    }
}
    cout<<ans<<endl;
}
    }

    
    
    
    }
    
    
