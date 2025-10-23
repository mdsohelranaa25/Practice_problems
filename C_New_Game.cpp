/*
    //! In The Name Of Allah
*/
#include<bits/stdc++.h>
using namespace std;

#define tt int t; cin >> t; while(t--)
#define itr(i,a) for(int i=0; i<a; i++)
#define ittr(i,bg,a) for(int i=bg; i<a; i++)
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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    tt {
        ll n, k;
        cin >> n >> k;
        vc(v, n);
        itr(i, n) cin >> v[i];
        srt(v);
      vector<ll>gap;
      for(int i=1;i<n;i++){
        if(v[i]-v[i-1]>1){
            gap.push_back(v[i-1]+1);
        }
      }
        ll ans = 0;

        ll mx = v[n-1];
        int i = 0;
        ll lind = -1;
    ll gapind=0;
        while (i < n) {
            bool f=0;
           // cerr<<i<<' '<<ans<<endl;
            ll cur = v[i];
            ll hi = v[i] + k - 1;
            if(gapind<gap.size()&&hi>gap[gapind]){
                hi=gap[gapind];
                f=1;
               
                gapind++;
            }
                // ll find = upper_bound(unq.begin(), unq.end(), cur - 1) - unq.begin();
                // ll seind = upper_bound(unq.begin(), unq.end(), hi) - unq.begin();
                // ll d = seind - find;
                // if (d == k) {
                //     lind = -1;
                // } else {
                //     ll pre = cur;
                //     ll hoi = cur+k-1;
                //     ll update = -1;
                //     ll fixed_findd = upper_bound(unq.begin(), unq.end(), pre - 1) - unq.begin();

                //     while (pre <= hoi) {
                //         ll mid = (pre + hoi) / 2;
                //         ll seindd = upper_bound(unq.begin(), unq.end(), mid) - unq.begin();
                //         ll dd = seindd - fixed_findd;
                //         ll wildif = mid - cur + 1;

                //         if (dd == wildif) {
                //             pre = mid + 1;
                //             update = mid;
                //         } else {
                //             hoi = mid - 1;
                //         }
                //     }
                //     lind = update;
                //     if (lind != -1 && lind < hi) {
                //         hi = lind;
                //     }
                // }
            

            ll nind = upper_bound(v.begin(), v.end(), hi) - v.begin();
            ll dif = nind - i;
            ans = max(ans, dif);
            // if(lind!=-1) {
            //     cur=lind+1;
            //     i=upper_bound(v.begin(), v.end(), cur) - v.begin();
            // }
            if(f){
                cur=hi;
                 i=upper_bound(v.begin(), v.end(), cur) - v.begin();
            }
           else i = upper_bound(v.begin(), v.end(), cur) - v.begin();
        }
        cout << ans << endl;
    }

    return 0;
}
