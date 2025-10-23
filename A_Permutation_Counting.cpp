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
 ll n,k;
 cin>>n>>k;
 vc(v,n);
 itr(i,n) cin>>v[i];
 ll lo=1,hi=*max_element(v.begin(),v.end())+k;
 ll ans=0;ll rem=0;
 while(lo<=hi){
ll mid=(lo+hi)/2;
bool f=0;
ll cnt=k;

itr(i,n){
    if(v[i]<mid){
        ll dif=mid-v[i];
        if(cnt<dif) {f=1;
        break;}
        else {
cnt-=dif;
        }
    }
}
if(f) hi=mid-1;
else {
    ans=mid;
    lo=mid+1;
    rem=cnt;
}
 }
 itr(i,n) if(v[i]>ans) rem++;
 cout<<(ans-1)*n+1+rem<<endl;


  }
  }
  

