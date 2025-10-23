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
#define INT_MAX LLONG_MAX
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
 
ll n;
cin>>n;
vector<pair<ll,ll>>a,b;
ll x,y;
itr(i,n){
    cin>>x>>y;
    a.push_back({x,y});
    b.push_back({y,x});
}

srt(a);
srt(b);
ll ans=INT_MAX;
ll cnt=0;
ll xx=a[0].f,yy=a[0].sc;
ll aa,bb,cc,dd;
aa=a[min(1LL,n-1)].f;
bb=a[n-1].f;
ll i=0;
ll j=n-1;
if(b[0].f==yy&&b[0].sc==xx) i=1;
if(b[j].f==yy&&b[j].sc==xx) j--;
i=min(i,n-1);
j=max(0LL,j);
//cerr<<i<<' '<<j<<" i j"<<endl;
cc=b[i].f,dd=b[j].f;
ll dx=(abs(aa-bb)+1);
ll dy=abs(cc-dd)+1;
cnt=dx*dy;
if(cnt==n-1){
    cnt+=min(dx,dy);
}
//cerr<<dx<<' '<<dy<<' '<<cnt<<endl;
ans=min(ans,cnt);
cnt=0;
 xx=a[n-1].f,yy=a[n-1].sc;
aa=0,bb=0,cc=0,dd=0;
aa=a[0].f;
bb=a[max(0LL,n-2)].f;
 i=0;
 j=n-1;
 //cerr<<b[0].f<<' '<<b[0].sc<<' '<<b[j].f<<' '<<b[j].sc<<' '<<xx<<' '<<yy<<endl;
if(b[0].f==yy&&b[0].sc==xx) i=1;
if(b[j].f==yy&&b[j].sc==xx) j--;
i=min(i,n-1);
j=max(0LL,j);
cc=b[i].f,dd=b[j].f;
dx=(abs(aa-bb))+1;
 dy=abs(cc-dd)+1;
cnt=dx*dy;
if(cnt==n-1){
    cnt+=min(dx,dy);
}
//cerr<<dx<<' '<<dy<<' '<<cnt<<endl;
ans=min(ans,cnt);
cnt=0;
 xx=b[n-1].f,yy=b[n-1].sc;
aa=0,bb=0,cc=0,dd=0;
aa=b[0].f;
bb=b[max(0LL,n-2)].f;
 i=0;
 j=n-1;
if(a[0].f==yy&&a[0].sc==xx) i=1;
if(a[j].f==yy&&a[j].sc==xx) j--;
i=min(i,n-1);
j=max(0LL,j);
cc=a[i].f,dd=a[j].f;
dx=(abs(aa-bb))+1;
 dy=abs(cc-dd)+1;
cnt=dx*dy;
if(cnt==n-1){
    cnt+=min(dx,dy);
}
//cerr<<dx<<' '<<dy<<' '<<cnt<<endl;
ans=min(ans,cnt);
cnt=0;
xx=b[0].f,yy=b[0].sc;
 aa=0,bb=0,cc=0,dd=0;
aa=b[min(1LL,n-1)].f;
bb=b[n-1].f;
i=0;
 j=n-1;
if(a[0].f==yy&&a[0].sc==xx) i=1;
if(a[j].f==yy&&a[j].sc==xx) j--;
i=min(i,n-1);
j=max(0LL,j);
cc=a[i].f,dd=a[j].f;
 dx=(abs(aa-bb))+1;
 dy=abs(cc-dd)+1;
cnt=dx*dy;
if(cnt==n-1){
    cnt+=min(dx,dy);
}
//cerr<<dx<<' '<<dy<<' '<<cnt<<endl;
ans=min(ans,cnt);
cout<<ans<<endl;

  }
  }
  

