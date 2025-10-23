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
vc(v,n);
for(auto &a:v) cin>>a;
vc(vv,n);
vv=v;
srt(v);
map<ll,ll>suf,pre;
map<ll,ll>mp;
vector<ll>final;
for(auto a:v) { mp[a]++; if(mp[a]==1) final.push_back(a);
}
ll m=final.size();
ll indexchilo=-1;
suf[final[m-1]]=indexchilo+mp[final[m-1]]+1;
indexchilo=mp[final[m-1]];

ll j=m-2;
for(j;j>=0;j--){
    ll purbe=suf[final[j+1]];
   // cerr<<"purbe "<<purbe<<' ';
    ll now=(final[j+1]-final[j])*indexchilo+mp[final[j]];
   // cerr<<"now "<<now<<' '<<indexchilo<<endl;
    indexchilo+=mp[final[j]];

    suf[final[j]]=now+purbe;
}
pre[final[0]]=0;
j=1;
indexchilo=mp[final[0]];
for(j;j<m;j++){
     ll purbe=pre[final[j-1]];
    // cerr<<"purbe "<<purbe<<' ';
     ll now=(final[j]-final[j-1])*indexchilo+mp[final[j-1]];
    // cerr<<"now "<<now<<' '<<indexchilo<<endl;
     indexchilo+=mp[final[j]];

    pre[final[j]]=now+purbe;
   // cerr<<"prefinal "<<final[j]<<' '<<pre[final[j]]<<' '<<suf[final[j]]<<endl;

}

for(int i=0;i<n;i++){
   // cerr<<pre[vv[i]]<<' '<<suf[vv[i]]<<endl;
    cout<<pre[vv[i]]+suf[vv[i]]<<' ';
}
endd;


  }
  }
  

