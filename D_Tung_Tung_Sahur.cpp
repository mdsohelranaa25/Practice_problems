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
    ll m=0,n=0;
    ll l1=s.length();
    ll l2=ss.length();
    ll i=0,j=0;
  
    bool f=0;
    while(i<l1||j<l2){
        char c=s[i];
        m=0,n=0;
        
        while(s[i]==c) {  m++;i++;}
        char ch=ss[j];
        while(ss[j]==ch){ n++; j++;}
        if(c!=ch||m>n||n>2*m){
            f=1;
            break;
        }
        // i++;
        // j++;

    }
    if(f) no;
    else yes;
    
    
    
    }
    }
    
