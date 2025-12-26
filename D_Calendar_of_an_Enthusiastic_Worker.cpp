/*
  //! In The Name Of Allah
*/
#include <bits/stdc++.h>
using namespace std;
#define itr(i, a) for (int i = 0; i < a; i++)
#define ll long long
#define srt(v) sort(v.begin(), v.end())

ll count_sun(ll x){
    if(x < 0) return 0;
    return x / 7;
}

ll count_sat(ll x){
    if(x < 6) return 0;
    return 1 + (x - 6) / 7;
}

void solve(ll n,ll m)
{
    vector<ll>v;
    map<ll,ll>mp;

    itr(i,n){
        ll x;
        cin>>x;
        if(mp[x]==0) v.push_back(x);
        mp[x]++;
    }

    v.push_back(m+1);
    v.push_back(0);
    n = v.size();
    srt(v);

    ll ans=0;

    for(int i=1;i<n;i++){

        if(v[i]==v[i-1]+1) continue;
        if(v[i] > m+1) break;

        ll age = v[i-1];
        ll eikhane = v[i] - 1;

        if(eikhane <= age) continue;

        ll total = eikhane - age;

        ll bad =
            (count_sun(eikhane) - count_sun(age)) +
            (count_sat(eikhane) - count_sat(age));

        ans += max(0LL, total - bad);
    }

    cout << ans << endl;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while(1){
    ll n, m;
    cin>>n>>m;
    if(!cin) break;
    if(n==0 && m==0) break;
    solve(n,m);
  }
}
