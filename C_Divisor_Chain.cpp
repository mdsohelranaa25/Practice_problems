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

 ll cnt=0;
 vector<ll>ans,div;
  ans.push_back(n);
  
map<ll,ll>mp;
ll last=0;
bitset<40>k=n;
 cnt=n;
for(int i=0;i<40;i++){
    if(k[i]){
        if(cnt==(1<<i)) { last=i;break;
        }
        else {
            cnt-=(1<<i);
            ans.push_back(cnt);
        }

    }
}
for(int i=last-1;i>0;i--){
    cnt-=(1<<i);
    ans.push_back(cnt);
}
ans.push_back(1);
cout<<ans.size()<<endl;
for(auto x:ans) cout<<x<<' ';
endd;

  }
  }
  

