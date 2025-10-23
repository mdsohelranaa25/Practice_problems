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
    string s;
    cin>>s;
    
   ll i=0;
   int cnt=0;
   itr(i,n) s[i]=tolower(s[i]);
   while(i<n){
if(cnt==0) {
    if(s[i]=='m') {
        cnt++;
        i++;
        while(s[i]=='m') i++;
    }
    else break;
}
else if(cnt==1){
    if(s[i]=='e') {
        cnt++;
        i++;
        while(s[i]=='e') i++;
    }
    else break;
}
else if(cnt==2){
    if(s[i]=='o') {
        cnt++;
        i++;
        while(s[i]=='o') i++;
    }
    else break;
}
else if(cnt==3){
    if(s[i]=='w') {
        cnt++;
        i++;
       while(i<n&&s[i]=='w')i++;
    }
    else break;
}
else break;


   }
   if(cnt==4&&i==n) yes;
   else no;
    
    
    
    }
    }
    
