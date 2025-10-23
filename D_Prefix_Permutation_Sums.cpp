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
  tt{
 ll n;
 cin>>n;
 n--;
 vc(v,n);
 itr(i,n) cin>>v[i];
 vc(ans,n);
 ans[0]=v[0];
 bool done=true;
 for(int i=1;i<n;i++) ans[i]=v[i]-v[i-1];
 srt(ans);

    vector<ll>nai;
    n++;
    ll c=0;
    ll i=1;
    ll j=0;
    map<ll,ll>cntt;
    vector<ll>anss;
    for(auto x:ans){
        if(cntt[x]==1) continue;
        else {
            anss.push_back(x);
            cntt[x]++;
        }
    }
    

    while(i<=n){
       if(j>=anss.size()){
        nai.push_back(i);
        j++;
        i++;
        continue;
       }
        if(anss[j]!=i) {
            nai.push_back(i);
            i++;
        }
        else {
            i++;
            j++;
        }
    }
    //cerr<<nai.size()<<endl;

    map<ll,ll>mp;
    if(nai.size()>2) done=false;
    ll doub=-1;
    for(auto x:ans) {mp[x]++;
        if(mp[x]>=2) doub=x;
    }
    if(nai.size()==1){
        if(nai[0]<=n) ;
        else done=false;
    } else{
        ll a=nai[0];
        ll b=nai[1];
        //cerr<<a<<' '<<b<<endl;
        if(doub==-1){
            if(ans[n-2]<=n) {done=false;
            }
            else doub=ans[n-2];
        }
      // cerr<<a+b<<' '<<doub<<endl;
        if(a+b!=doub) done=false;
        
    }
    if(done) yes;
    else no;





  }
  }
  

