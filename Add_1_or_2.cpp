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
vector<bool>isprime(N,false);
vector<ll>primes;
ll cnt_div[N]={0};
vector<ll>divisor[N];
void divis(){
for(int i=1;i<=N;i++){
for(int j=i;j<=N;j+=i){
cnt_div[j]++;
divisor[j].push_back(i);
//if(i/j!=i) divisor[j].push_back(i/j);
}
}

}
void sieve(){
isprime[1]=false;
isprime[2]=true;
pb(primes,2);
for(int i=3;i*i<=N;i+=2) isprime[i]=true;
for(int i=3;i<=N;i+=2){
if(isprime[i]){
pb(primes,i);
for(int j=i*i;j<=N;j+=i){
isprime[j]=false;
}
}
}
}

  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  tt{
 ll n,m;
 cin>>n;
 ll mx=0;
 vc(v,n);
 vc(vv,n);
 itr(i,n) {cin>>v[i]; mx=max(mx,v[i]);
 }
 itr(i,n) cin>>vv[i];
 ll can_take=0;



    ll lo=0,hi=INT_MAX;
    ll ans=LLONG_MAX;
    mx=0;
   
    while(lo<=hi){
        ll mid=(lo+hi)/2;
        mx=0;
        can_take=0;
       // cerr<<"mid "<<mid<<' ';
        itr(i,n){
            if(v[i]>mid) {
                can_take=-100;
                break;
            }
           else if(v[i]<=mid){
                ll dif=mid-v[i];
                ll have=vv[i];
                if(have>=dif) {can_take-=(have-dif);
                    mx=max(mx,mid);
                }
                else{
                    dif-=vv[i];
                    can_take+=dif/2;
                     mx=max(mx,v[i]+(dif/2)*2);
                }
            }
        }

      //  cerr<<can_take<<' '<<mid<<' '<<mx<<endl;
       //if(mid==1000000000) cerr<<"can take "<<can_take<<endl;
       // if(mid==2000000000) cerr<<"can take "<<can_take<<endl;
        if(can_take>=0){
            ans=min(ans,mid);
            hi=mid-1;

        }
        else lo=mid+1;

    }
    cout<<ans<<endl;
 }

  }
  
  

