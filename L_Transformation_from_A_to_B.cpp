/*
    //! In The Name Of Allah
*/

#include <bits/stdc++.h>
using namespace std;

#define tt int t; cin >> t; while(t--)
#define itr(i,a) for(int i=0;i<a;i++)
#define ittr(i,bg,a) for(int i=bg;i<a;i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define endd cout << endl
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a,x) a.push_back(x)
#define MOD 1000000007
#define f first
#define sc second
#define endl '\n'

ll n, m;
map<ll, ll> mp;
vector<ll>path;
bool dfs(ll val) {
  //cerr<<val<<' ';
  path.push_back(val);
    if(val == m) return true;
    if(val > m) { path.pop_back();
      return false;
    }

    if(mp.count(val)) return mp[val] == 1;

    bool f = dfs(2*val) || dfs(val*10 + 1);
    mp[val] = f ? 1 : 2; 
    if(!f) path.pop_back();
    return f;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    if(dfs(n)) yes;
    else no;
    if(path.size()) { cout<<path.size()<<endl;
for(auto x:path) cout<<x<<' ';
    
}
}