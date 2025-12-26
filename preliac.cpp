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
const int N=1e5+5;
vector<ll>fact_ar(N,1),modinv(N,1);
ll power(ll x,ll mod){
    if(mod<0) return 0;
    ll ans=1;
    while(mod){
        if(mod%2==0){
            x=(x*x)%MOD;
            mod/=2;
        }
        else{
            ans=(ans*x)%MOD;
            mod--;
        }
    }
    return ans;
}

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll cnt_1=0;
    itr(i,n){
        if(s[i]=='1') cnt_1++;

    }
    ll rem=n-cnt_1;
    ll baki=cnt_1-1;
    ll ans=0;
    ll md=998244353;
    for(ll i=1;i<=rem;i++){
        ans+=i;
        ans%=md;
        ll now=i;
        now*=now;
        now%=md;
        now*=(baki-1);
        now%=md;
        ans+=now;
        ans%=md;
        ll sor=i-1;
        //cerr<<sor<<' ';
        ll edike=sor*(sor+1);
        
        edike/=2;

        edike%=md;
        ans+=edike;
        ans%=md;
        //cerr<<ans<<' '<<sor<<endl;


    }
    cout<<ans<<endl;

}

  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
   //precomp();
  tt{
  solve();
 

  }
  }
  