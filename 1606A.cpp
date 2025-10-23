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
    
    
    string s;
    cin>>s;
    ll ab=0,ba=0;
    itr(i,s.length()-1){
        if(s[i]=='a'&&s[i+1]=='b') ab++;
        if(s[i]=='b'&&s[i+1]=='a') ba++;

    }
    if(ab==ba) cout<<s<<endl;
    else if(ab>ba){
        int i=0;
        // while(i<s.length()){
        //     if(s[i]=='a'&&s[i+1]=='b') {s[i]='b'; break;}
        //     i++;
        // }
        s[i]='b';
        cout<<s<<endl;
    }
    else {
        int i=s.length()-1;
        // while(i>=0) {
        //     if(s[i]=='a'&&s[i-1]=='b') {
        //         s[i]='b';
        //         break;
        //     }
       
        s[i]='b';
        i--;
        
        cout<<s<<endl;
    }
    
    }
   }
    
