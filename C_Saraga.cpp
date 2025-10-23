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
#define pb(a,x) a.push_back(x)
#define MOD 1000000007
  #define f first
  #define sc second
#define endl '\n'
const int N=1e6+1;
ll cnt_div[N]={0};
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
 string s,ss;
 cin>>s>>ss;
 map<char,ll>mp;
 for(int i=ss.length()-2;i>=0;i--){
    if(mp[ss[i]]==0){
        mp[ss[i]]=i+1;
    }
 }
ll stop=-1;
ll mn=INT_MAX;
for(int i=1;i<s.length();i++){
    if(mp[s[i]]!=0){
        ll here=i+1;
        here+=ss.length()-mp[s[i]];
       // cerr<<here<<' '<<mn<<endl;
        if(here<mn) {
            mn=here;
            stop=mp[s[i]];
            stop=i;
        }
    }
}
if(stop==-1) cout<<stop<<endl;
else {
    for(int i=0;i<stop;i++){
        cout<<s[i];
    }
    for(int i=mp[s[stop]]-1;i<ss.length();i++) cout<<ss[i];
    endd;
}
  }
  

