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
#define vc(v, n) vector<ll> v(n,0)
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

  ll n,k;
  cin>>n>>k;
  vc(v,n);
  itr(i,n) cin>>v[i];
  vc(vv,n);
  itr(i,n) cin>>vv[i];

  vc(pre,n+5);
  vc(suf,n+5);
  vc(leftmn,n+5);
  vc(rightmn,n+5);

  pre[0] = 0;
  leftmn[0] = 0;

  for(int i=0;i<n;i++){
      pre[i+1] = pre[i] + v[i];
      leftmn[i+1] = min(leftmn[i], pre[i]);
  }

  suf[n+1] = 0;
  rightmn[n+1] = 0;

  for(int i=n-1;i>=0;i--){
      suf[i+1] = suf[i+2] + v[i];
      rightmn[i+1] = min(rightmn[i+2], suf[i+2]);
  }

  if(k%2==0){
      ll ans = LLONG_MIN;
      for(int i=1;i<=n;i++){
          ll eporjonto = pre[i] - leftmn[i];
          ll odike = suf[i] - rightmn[i];
          eporjonto = max(eporjonto, odike);
          ans = max(ans, eporjonto);
      }
      cout<<ans<<endl;
      return;
  }
  else{
      ll ans = LLONG_MIN;
      for(int i=1;i<=n;i++){
          ll now = v[i-1] - vv[i-1];
          now = max(now, v[i-1] + vv[i-1]);

          ll age = 0;
          if(i > 1) age = pre[i-1] - leftmn[i-1];

          ll pore = 0;
          if(i < n) pore = suf[i+1] - rightmn[i+1];

          ll ekhonn=now;
          if(age>0) ekhonn+=age;
          if(pore>0) ekhonn+=pore;
        //  ekhonn=max(ekhonn,now);
          ans = max(ans, ekhonn);
      }
      cout<<ans<<endl;
      return;
  }

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
