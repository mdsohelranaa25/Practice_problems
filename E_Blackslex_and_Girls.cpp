/*
  //! In The Name Of Allah




*/
#include <bits/stdc++.h>
using namespace std;
#define tt  \
  int t;    \
  cin >> t; \
  while (t--)
#define itr(i, a) for (int i = 0; i < a; i++)
#define ittr(i, bg, a) for (int i = bg; i < a; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define endd cout << endl
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a, x) a.push_back(x)
#define MOD 1000000007
#define f first
#define sc second
#define endl '\n'
const int N = 1e6 + 1;
vector<bool> isprime(N, false);
vector<ll> primes;


void solve()
{

  ll n,x,y;
  cin>>n>>x>>y;
  string s;cin>>s;
  vc(v,n);
  itr(i,n) cin>>v[i];
  ll extf=0,exts=0;
  ll fr=0,ss=0;
  ll baddite1=0,baddite2=0;
  ll frr=0,scc=0;
  ll sum=0;
  itr(i,n){
    sum+=v[i];
    if(s[i]=='0'){
        fr+=(v[i]/2)+1;
        exts+=v[i]-1;
        frr++;
        
    }
    else{
        ss+=(v[i]/2)+1;
        extf+=v[i]-1;
        scc++;
        baddite2+=(v[i]-1)/2;
    }
  }
  if(sum>(x+y)) {
    no;
    return;
  }
  if(fr>x) {
    no;
    return;
  }

  if(ss>y){
    no;
    return;
  }
 // cerr<<frr<<' '<<scc<<endl;
  ss=0,fr=0;
  if(frr>x){
    no;return;
  }
  if(scc>y){
    no;
    return;
  }
   //cerr<<frr<<' '<<scc<<' '<<fr<<' '<<ss<<endl;
  if(frr<x&&frr>0){
    ss+=x-frr;
   //  cerr<<ss<<' '<<x-frr<<endl;
    frr=x;
   
  }
  if(scc<y&&scc>0){

    fr+=y-scc;
    scc=y;
    //cerr<<fr<<endl;

  }
  //cerr<<frr<<' '<<scc<<' '<<fr<<' '<<ss<<endl;
  frr+=fr;
  scc+=ss;
  
  if(frr<x||scc<y) no;
  else yes;
  

//   if(fr>x){
//     ll ext=fr-x;
//     if(ext>baddite1){
//         no;
//         return;
//     }
//     fr-=ext;
//     ss+=ext;

    
//   }
//   if(ss>y){
//     ll ex=ss-y;
//     if(ex>baddite2){
//         no;
//         return;
//     }
//     fr+=ex;
//     ss-=ex;
//   }
 
//   //cerr<<fr<<' '<<ss<<endl;
//   if(fr>x){
//     no;
//     return;
//   }
//   if(ss>y){
//     no;
//     return;
//   }
//   if(fr<x){
//     fr+=extf;
//     extf=0;
   
//   }
//   ss+=exts;
//   exts=0;
//   if(fr>=x&&ss>=y) {
//     yes;
//     return;
//   }
//   else{
//     if(fr<x){
//         if(frr){
//             exts+=(x-fr);
//             fr=x;
//         }
//         if(ss<y){
//             if(scc){
//                 extf+=(y-ss);
//                 ss=y;
//             }
//             else if(exts){
//                 y+=exts;
    //         }
    //     }
    //     if(fr<x){
    //         fr+=extf;
    //     }
    //     if(fr<x||ss<y) no;
    //     else yes;
    // }
    // else if(ss<x){
    //     if(scc){
    //         extf+=(y-ss);
    //         ss=y;
    //     }
    //    if(fr<x){
    //     if(frr){
    //         exts+=x-fr;
    //         fr=x;
    //     }
    //     else {
    //         fr+=extf;
    //     }
    //    }
    //    if(ss<y){
    //     ss+=exts;
    //    }
    //    if(fr<x||ss<y) no;
    //    else yes;
    // }
 // }
  


}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  tt
  {
    solve();
  }
}
