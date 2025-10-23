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
    ll k=0;
    //cerr<<(n&(n-1))<<endl;
   vector<ll>ans;
    if(n==1) {
        cout<<0<<endl;
         cout<<1<<endl;
    continue;}
    else {
        //cout<<ans<<endl;
        k&=2;
        k|=1;
        ans.push_back(2);
        ans.push_back(1);

    }
    if((n&(n-1))==0){
    //cerr<<"y";

        
        for(int i=3;i<=n;i++){
            if(i%2) k&=i;
            else k|=i;
           ans.push_back(i);

        }
        
    }
   else if(n%2==0){
    ll lind=-1;
    ll i=0;
    while((1<<i)<n) i++;
    i--;
    ll cnt=1;
    lind=(1<<i)-1;
    for(int i=3;i<=n;i++){
        if(i==lind) continue;
        if(cnt%2) k&=i;
        else k|=i;
        cnt++;
ans.push_back(i);
    }
ans.push_back(lind);
k|=lind;

   }
else{

    for(int i=3;i<=n;i++) { if(i%2) k&=i;
        else k|=i;
       ans.push_back(i);
    }
}

 cout<<k<<endl;
  for(auto x:ans) cout<<x<<' ';
  endd;
  
   

 

  }
  }
  

