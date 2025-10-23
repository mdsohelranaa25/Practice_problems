#include <bits/stdc++.h>
using namespace std;
#define tt int t; cin >> t; while (t--)
#define ll long long
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define pb(a, x) a.push_back(x)
#define endl '\n'
const int N = 1e6 + 5;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt {
        ll n;
        cin >> n;
        vc(vv, n);
       map<ll, vector<ll>, greater<ll>> ind;


        for (ll i = 0; i < n; ++i) {
            cin >> vv[i];
            ind[vv[i]].push_back(i);
        }
map<ll,ll>mp;
        ll cnt = 0;
        for (auto x: ind) {
            ll val=x.first;
            vector<ll>positions=x.second;

          //cout<<val<<' '<<cnt<<endl;
         
            bool flag=false;
            for (ll i = 0; i < positions.size(); ++i) {
                // if (i == 0 || positions[i] != positions[i - 1] + 1)
               
                ll it=positions[i];
                if(mp[it]==1) continue;
                while(it<n&&vv[it]==val){
                 // if(mp[it]==1) flag=true;
                  mp[it]=1;
                  it++;
                  
                }
                if(it==n||mp[it]!=1){
                  it=positions[i];
                  while(it>=0&&vv[it]==val){
                   // if(mp[it]==1) flag=true;
                    mp[it]=1;
                    it--;
                  }
                  if(mp[it]!=1) cnt++;
                }
                else {
                  it=positions[i];
                  while(it>=0&&vv[it]==val){
                    
                    mp[it]=1;
                    it--;
                  }
                }
            }
            
        }

        cout << cnt << endl;
    }
}
