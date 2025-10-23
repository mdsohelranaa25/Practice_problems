		/*
			//! In The Name Of Allah
				
			
				
				
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
    #define endl '\n'
    int main(){
      ios::sync_with_stdio(false);
        cin.tie(nullptr);
    tt{
    
    ll n;
    cin>>n;
    map<char,ll>mp;
    string s;
    cin>>s;
    itr(i,n) {
        mp[s[i]]++;
    }
     bool f=0;
    for(char ch='a';ch<='z';ch++){
        if(mp[ch]==0) {
            cout<<ch<<endl;
            f=1;
            break;

        }
    }
    if(f==0){
     
    set<string>st;
    itr(i,n-1){
        string a;
        a+=s[i];
        a+=s[i+1];
        st.insert(a);
        if(i<n-2){
            a+=s[i+2];
            st.insert(a);
        }
    }
    
   string aa="aa";
   for(int j=0;j<26;j++){
    aa[0]=char('a'+j);
   for(int i=0;i<26;i++){
    string ab=aa;
    ab[1]=char(ab[1]+i);
    if(st.find(ab)==st.end()){
        cout<<ab<<endl;
        f=1;
        break;
    }
   }
   if(f) break;
   }
   if(!f){
    string aa="aaa";
    for(int k=0;k<26;k++){
        aa[0]=char('a'+k);
   for(int j=0;j<26;j++){
    aa[1]=char('a'+j);
   for(int i=0;i<26;i++){
    aa[2]=char('a'+i);
    
    if(st.find(aa)==st.end()){
        cout<<aa<<endl;
        f=1;
        break;
    }
   }
   if(f) break;
   }
   if(f) break;
}

   }
    
    }
    }
}
    
