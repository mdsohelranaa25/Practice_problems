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

const int N = 1e6+1;

ll n, ww;
vector<pair<ll,ll>> pr;
ll mx = 0;
unordered_map<ll, ll> dp[105];

ll goo(ll i, ll w, ll val){
    if(i == n) return val;
    if(dp[i].count(w)) return dp[i][w];
    ll r1 = goo(i+1, w, val);
    ll r2 = 0;
    if(w + pr[i].f <= ww){
        r2 = goo(i+1, w + pr[i].f, val + pr[i].sc);
    }
    else r2 = goo(i+1, w, val);
    dp[i][w] = max(r1, r2);
    return dp[i][w];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> ww;

    itr(i, n) {
        ll x, y;
        cin >> x >> y;
        pr.push_back({x, y});
    }

    ll ans = goo(0, 0, 0);
    cout << ans << endl;
}
