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
ll q(ll a,ll b){
  if(a==b) return -1;
    cout<<"? "<<a<<' '<<b<<endl;
    cout.flush();
    ll x;
    cin>>x;
    cout.flush();
    return x;

}

void solve()
{
ll n;
ll ans=-1;
cin>>n;
ll sec=q(1,n);
ll thik=sec;
if(sec==1){
 ans=n;
  ll lo=2,hi=n;
  while(lo<=hi){
    ll mid=(lo+hi)/2;
    ll x=q(sec,mid);
    if(x==thik){
      ans=mid;
      hi=mid-1;
    }
    else lo=mid+1;
  }
  
}
else if(sec==n){
  ans=1;
  ll lo=1,hi=n;
   while(lo<=hi){
    ll mid=(lo+hi)/2;
    ll x=q(mid,sec);
    if(x==thik){
      ans=mid;
      lo=mid+1;
    }
    
    else hi=mid-1;
  }

}
else{
  ll lo=0,hi=n;
  ll x=q(1,sec);
  if(x!=thik) {
    lo=sec,hi=n;
    ans=n;
     while(lo<=hi){
    ll mid=(lo+hi)/2;
    ll x=q(sec,mid);
    if(x==thik){
      ans=mid;
      hi=mid-1;
    }
    else lo=mid+1;
  }



  }
  else{
    lo=1,hi=sec;
    ans=lo;
     while(lo<=hi){
    ll mid=(lo+hi)/2;
    ll x=q(mid,sec);
    if(x==thik){
      ans=mid;
      lo=mid+1;
    }
    
    else hi=mid-1;
  }
  }
  
}
// ll shuru=1;
// if(sec==1) shuru=n;
// else {
//   ll get=q(1,sec);
//   if(get==sec) shuru=1;
//   else shuru=n;
// }


// ll ans=shuru;

// ll lo=shuru,hi=sec;

// //cerr<<lo<<' '<<hi<<endl;
// while(lo<hi){
//     ll mid=(lo+hi)/2;
//     ll get=q(min(sec,mid),max(mid,sec));
//     if(get==thik) {if(sec<mid) hi=mid-1;
//       else lo=mid+1;
//         ans=mid;
//     }
//     else {
//       if(sec<mid) lo=mid+1;
//       else hi=mid-1;
//     }
//     //cerr<<mid<<' '<<ns<<' '<<get<<' '<<thik<<endl;

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
  //tt
  {
    solve();
  }
}
