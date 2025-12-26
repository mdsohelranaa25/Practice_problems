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
 // cout<<"f";
    ll n;
    cin>>n;
    vc(v,n);
    itr(i,n) cin>>v[i];
    string s;
    cin>>s;
   // cout<<n<<' '<<s<<endl;
    ll mn=INT_MAX,mx=0;
    ll mind=-1,mmind=-1;
   
     for (int i = 0; i < n; i++) {
        if (v[i] < mn) {
            mn = v[i];
            mind = i;
        }
      if(v[i]>mx) {mmind=i;
      mx=v[i];}
      
      }
    if(s[0]=='1'||s[n-1]=='1'||s[mind]=='1'||s[mmind]=='1') cout<<-1<<endl;
    else{
      cout<<5<<endl;
      cout<<1<< ' ' <<mind+1<<endl;
      cout<<1<<' '<<mmind+1<<endl;
      cout<<mind+1<<' '<<n<<endl;
      cout<<mmind+1<<' '<<n<<endl;
      cout<<min(mind+1,mmind+1)<<' '<<max(mind+1,mmind+1)<<endl;
    }
  }
//     vector<ll>leftChoto(n+5,1e9),leftBoro(n+5,0),rightChoto(n+5,1e9),rightBoro(n+5,0);
    
//     for(int i=0;i<n;i++){
//       leftChoto[i+1]=min(v[i],leftChoto[i]);
//       leftBoro[i+1]=max(v[i],leftBoro[i]);

//     }
//     for(int i=n-1;i>=0;i--){
//       rightChoto[i+1]=min(v[i],rightChoto[i+2]);
//       rightBoro[i+1]=max(v[i],rightBoro[i+2]);

//     }

//     set<pair<ll,ll>>pr;
//     bool f=0;
//     if(s[0]=='1'||s[n-1]=='1') f=1;
//     if(f){
//       cout<<-1<<endl;
//       return;
//     }
//     map<ll,ll>mp;
//     for(int i=0;i<n;i++) mp[v[i]]=i+1;
//     int x=-1,y=-1;
//     itr(i,n)if(s[i]=='1'){ x=i;
//     break;}
//     for(int i=n-1;i>=0;i--) if(s[i]=='1'){
//       y=i;
//       break;
//     }
//     for(int cnt=1;cnt<=5;cnt++){
//       ll boro=0,choto=INT_MAX;
//       if(x==-1&&y==-1) break;
//       choto=leftChoto[x+1];
//       boro=rightBoro[y+2];
//       ll chotoo=rightChoto[y+2];
//       ll boroo=leftBoro[x+1];
//       bool one=0,tw=0;
//       x=-1;
//       y=-1;
//       ll xx=-1,yy=-1;
//       int age=-1;
//       string temp=s;
//       string ss=s;
//       ll cntt=0,cntt2=0;
//       //  cerr<<choto<<' '<<boro<<' '<<chotoo<<' '<<boroo<<endl;
//       if((choto==0||boro==0)&&(chotoo==0||boroo==0)) break;
//       else{
    
//       itr(i,n){
        
       
//         if(s[i]=='1'){
//           if(one==0){
//             if(choto<v[i]&&boro>v[i]){
//               s[i]=0;
//               cntt++;
//             }
           
//           if(tw==0){
//             if(chotoo<v[i]&&boroo>v[i]){
//               ss[i]=0;
//               cntt2++;

//             }
//             else tw=1;

//           }
//           if(s[i]=='1'){
//             if(x==-1) x=i;
//             y=i;
//           }
//           if(ss[i]=='1'){
//             if(xx==-1) xx=i;
//             yy=i;
//           }
          
//         }
//       }
      
      
      
//     }
//     ll fi=INT_MAX,se=0;
//     if(cntt>=cntt2){
//       fi=mp[choto];
//       se=mp[boro];
//     }
//     else {
//       fi=mp[chotoo];
//       se=mp[boroo];
//       x=xx;
//       y=yy;
//       s=ss;
//     }
//     pr.insert({min(fi,se),max(fi,se)});
//   }
// }
//   itr(i,n) if(s[i]=='1') f=1;
//   if(f) cout<<-1<<endl;
//   else {
//     cout<<pr.size()<<endl;
//     for(auto x:pr) cout<<x.first<<' '<<x.second<<endl;
//   }

  


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  tt
  {
    //cout<<"s";
    solve();
  }
}
