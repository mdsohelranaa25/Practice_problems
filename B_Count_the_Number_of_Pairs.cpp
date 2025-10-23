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
    string s;
    cin>>s;
    map<char,ll>mp;
    ll cnt=0;

    itr(i,n) mp[s[i]]++;

    
    srt(s);
    int i=0;
    
    while(s[i]<'a') i++;
    set<char>st;
    int cc=i;
    map<char,ll>mpp;
    while(i<n) {
        mpp[s[i]]++;
        st.insert(s[i]);
        i++;
    }
    set<char>ss;
    for(int i=0;i<cc;i++){
       if(mpp[tolower(s[i])]==0) ss.insert(s[i]);

    }
    for(auto c:st){
        int a=mp[c];
        int b=mp[c-32];
        ll dif=abs(a-b);
        cnt+=min(a,b);

        cnt+=min(k,dif/2);
        k-=min(k,dif/2);
    }
    for(auto x:ss){
        cnt+=min(k,mp[x]/2);
        k-=min(k,mp[x]/2);
    }
    cout<<cnt<<endl;
    
    }
    }
    
