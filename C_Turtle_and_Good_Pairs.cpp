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
    unordered_set<char>st;
    map<char,ll>mp;
    ll mx=0;
    itr(i,n) {
        mp[s[i]]++;
        mx=max(mx,mp[s[i]]);

    }

    vector<pair<char,ll>>vec(mp.begin(),mp.end());
    sort(vec.begin(),vec.end(),[](auto&a,auto&b){
        return a.second>b.second;
    });

    
  //  for(auto &x:vec){
  //   ll m=x.sc;
  //   char c=x.f;
  //   m=(m+1)/2;
  //   mp[c]-=m;
  //   while(m--) cout<<c;
  //  }
  while(mx--){
   for(auto &x:vec){
    if(mp[x.f]>0){
    char c=x.f;
    mp[c]--;
     cout<<c;
   }
  }

  }

    endd;
    
    }
    }
    
