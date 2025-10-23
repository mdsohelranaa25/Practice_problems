/*
    //! In The Name Of Allah
          
        ~~Sohel~~
*/

#include <bits/stdc++.h>
using namespace std;

#define tt int t; cin >> t; while (t--)
#define itr(i, a) for (int i = 0; i < a; i++)
#define ittr(i, bg, a) for (int i = bg; i < a; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define endd cout << endl
#define vc(v, n) vector<ll> v(n)  
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define MOD 1000000007
#define f first
#define sc second

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt {
        ll n;
        cin >> n;
        vc(v, n);
        itr(i, n) cin >> v[i];

        srt(v);

        auto m = upper_bound(v.begin(), v.end(), (v[n - 1] + 1) / 2);
        if (m != v.begin()) m--; 

        ll val = (m != v.end()) ? *m : 1;  
        ll hi = v[n - 1];
        ll gc = -1;

        while (m != v.begin()) { 
            val = *m;

            while ((hi + 1) / 2 >= val) {
                if (hi % val == 0) {
                    gc = val;
                    break;
                } else {
                    hi++;  
                }
            }

            if (m != v.begin()) m--; 
            else break;
        }
        
        cout << gc << endl;
    }
}
