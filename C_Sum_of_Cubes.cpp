#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define min3(a,b,c) min(a,min(b,c))

bool bs(ll n) {
   // cerr<<"n "<<n<<endl;
  ll l = 1, r = 1e5+5;
  while(l<=r) {
    ll mid = (l+r)/2;
   // cerr<<mid*mid*mid<<endl
   if(mid>n/mid/mid) r=mid-1;
   else{
   ll cb=mid*mid*mid;
   //cerr<<cb<<endl;

    if(cb==n) {
      return true;
    } 
    else if(cb<n){
      l = mid + 1;
    }
    else r=mid-1;
  }
}
  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin>>t;
  while(t--) {
    ll n;
    cin>>n;
    if(n==1) {
      no; continue;
    }
    bool f = false;
    for(int i=1; i*i*i<=n; i++) {
      ll a = i*i*i;
      ll b = n-a;
      if(bs(b)) {
        f = true;
        break;
      }
    }
    if(f) yes;
    else no;
  }
  return 0;
}
