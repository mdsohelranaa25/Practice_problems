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
 ll n,k;
 cin>>n>>k;
 vc(v,n);
 itr(i,n) cin>>v[i];
 vc(vv,n);
 itr(i,n) cin>>vv[i];
 vector<pair<ll,ll>>pr,prr;
 itr(i,n){
    ll a=min(v[i],vv[i]);
    ll b=max(v[i],vv[i]);
    pr.push_back({a,b});
    prr.push_back({a,b});
 }
 srt(prr);
 
    sort(pr.begin(), pr.end(), [](pair<ll, ll> a, pair<ll, ll> b) {
        if (a.first != b.first) return a.first < b.first;
        return a.second > b.second;
    });
    ll mx=pr[0].sc;
    bool f=0;
   // cerr<<"mx "<<mx<<endl;
    for(int i=1;i<n;i++){
      //  cerr<<pr[i].f<<' '<<pr[i].sc<<' ';
        if(pr[i].sc<=mx) {f=1;
        break;}
    }
    if(f){
        ll ans=0;
        itr(i,n){
            ans+=abs(pr[i].f-pr[i].sc);
        }
        cout<<ans<<endl;
    }
    else{
        vector<ll>final;
        ll dif=INT_MAX;
        itr(i,n-1){
            final.clear();
           
             final.push_back(prr[i].f);
              final.push_back(prr[i].sc);
              final.push_back(prr[i+1].f);
              final.push_back(prr[i+1].sc);
              srt(final);
              ll purbe=abs(prr[i].f-prr[i].sc)+abs(prr[i+1].f-prr[i+1].sc);
              ll now=final[3]-final[0]+final[2]-final[1];
              dif=min(dif,now-purbe);
              //cerr<<dif<<endl;
             // cerr<<purbe<<' '<<now<<endl;
              
        }
         ll ans=0;
        itr(i,n){
            ans+=abs(prr[i].f-prr[i].sc);
        }
        ans+=dif;
        cout<<ans<<endl;


    }

  }
  }
  

