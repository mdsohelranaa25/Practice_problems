#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define srt(v) sort(v.begin(),v.end());
#define srtd(v) sort(v.begin(),v.end(), greater<>());
#define minn(v) min_element(v.begin(),v.end());
#define maxx(v) max_element(v.begin(),v.end());
#define gcd(a,b) __gcd(a,b)
#define pb push_back
#define fr(n) for(ll i=0; i<n; i++)
#define frr(a,b) for(ll i=a; i<=b; i++)
#define vc(n) vector<ll>v(n);
#define ff first
#define ss second

#define mod 1000000007
 
ll lcm(ll a, ll b) {
    return (a*b)/__gcd(a,b);
}
 
bool isprime(ll n) {
    if(n<=1) return false;
    for(int i=2; i*i<=n; i++) {
        if(n%i==0) return false;
    }
    return true;
}
 
void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    fr(n) cin>>v[i];
    ll ans = -1e18;
    ll sum=0;
    for(int i=0;i<n;i++) sum+=v[i];
    ans=sum;
    while(v.size()>1) {
        for(int i=1; i<n; i++) {
            v[i-1] = v[i] - v[i-1];
        }
        v.pop_back();
        // for(auto val : v) cout<<val<<" ";
        // cout<<"\n";
        ll s = 0;
        n--;
         for(int i=0;i<n;i++) s+=v[i];

        sum = max(sum,abs(s));
    }
    cout<<sum<<"\n";
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
 
    int t = 1;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}