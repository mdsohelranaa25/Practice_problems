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
#define ll int
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
ll ts=0;

void solve()
{
ll n;
ts++;
cin>>n;
ll k;
cin>>k;

vector<pair<ll,ll>>pr;
map<ll,ll>mp,mpp;
itr(i,k){
    ll a,b;
    cin>>a>>b;
    if(mp[a]==0) mp[a]=b;
    else mp[a]=max(mp[a],b);
    if(mpp[b]==0) mpp[b]=a;
    else mpp[b]=min(mpp[b],a);
}




    ll mid=n/2;
    cout<<"? 1 "<<mid<<endl;
    cout.flush();
    ll gt;
    cin>>gt;
   
ll ans=0;

if(gt==0){
    for(int i=mid+1;i<=n;i++){
        if(mpp[i]>0){
            cout<<"? "<<mpp[i]<<' '<<i<<endl;
            cout.flush();
            cin>>gt;
            ans=max(ans,gt);
            cout.flush();
        }
        
    }
}
else{
        for(int i=1;i<=mid;i++){
        if(mp[i]>0){
            cout<<"? "<<i<<' '<<mp[i]<<endl;
            cout.flush();
            cin>>gt;
            ans=max(ans,gt);
            cout.flush();
        }
        
    }

}


// cerr<<zero<<endl;
// ll mx=0;
// ll mxi=-1;
// n=k;
// bool f=0;
// ll rightmx=-1;
// for(int i=0;i<k;i++){
//     if(f) break;
//    // cerr<<i<<' ';
    
//     while(i+1<k&&(pr[i+1].f==pr[i].f)) i++;
//     if(zero==n/2&&i<k){
//         if(pr[i].f>zero) {f=1;
//             break;
//         }
//     }
//     else if(zero==(n/2+1)&&i<k){
//         if(pr[i].sc<zero) continue;

//     }
    
//      if(f==0&&i<k){

//        // cerr<<i<<' '<<"f"<<endl;
//         ll a=pr[i].f;
//         ll b=pr[i].sc;
//        // rightmx=b;
//         cout<<"? "<<a<<' '<<b<<endl;
        
//         cout.flush();
//         ll gt;
//         cin>>gt;
//         cout.flush();
//         if(gt>mx) {
//          //   cerr<<mx<<' '<<gt<<endl;
//             mx=gt;
//             //mxi=mp[{a,b}];
//             //cerr<<mxi<<endl;
//         }
//     }
// }



cout<<"! "<<ans<<endl;
cout.flush();


  

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
