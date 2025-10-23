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
#define ll double
#define endd cout << endl
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a, x) a.push_back(x)
#define MOD 1000000007
#define f first
#define sc second
#define endl '\n'

const double PI = 3.14159265358979323846;

void solve()
{
    int n;
    cin >> n;
    map<ll,int> mp;
    vector<ll> fin;
      const double eps = 1e-12;
    itr(i,n){
        ll x,y; cin >> x >> y;
       x=floor(x*1e12+0.5)/1e12;
       y=floor(y*1e12+0.5)/1e12;
        double ang = atan2(y, x);       
        double deg = eps;
       deg+= ang * 180.0 / PI; 
        if(deg < 0) deg += 360.0+eps;     
       deg = floor(deg * 1e12 + 0.5) / 1e12;

        mp[deg] = i+1;
        fin.push_back(deg);
        //cerr<<fin[i]<<' '<<endl;
      //cerr << i << ' ' << deg << endl;
    }

    srt(fin);
    double mini = 1e9;
    ll ans1, ans2;
   
    itr(i,n){
      //  cerr<<i<<' ';
        double now =eps;
        now+= fin[(i+1)%n] - fin[i];
       // cerr<<now<<' ';
        if(now < eps) now += 360.0;
       // cerr<<now<<endl;
 now = floor(now * 1e12 + 0.5) / 1e12;
      //  cerr << now << ' '<<fin[i]<<' '<<fin[(i+1)%n]<<' '<<fin[(i+1)%n]-fin[(i+1)%n]<<endl;
       if(now  <= mini){
            mini = now;
            ans1 = mp[fin[i]];
            ans2 = mp[fin[(i+1)%n]];
        }
      // cerr << now << ' ' << ans1 << ' ' << ans2 << endl;
    
}
    
    cout << ans1 << " " << ans2 << endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
