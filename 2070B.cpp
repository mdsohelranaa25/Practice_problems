#include <bits/stdc++.h>
using namespace std;
#define tt int t; cin >> t; while (t--)
#define ll long long
#define endd cout << endl

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt {
        ll n, x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;

        ll cnt = 0;
        ll ans = 0;
        ll sc = k;

       
            for (ll i = 0; i < s.length(); i++) {
                if (cnt == k) break;
                if (s[i] == 'R') {
                    cnt++;
                    x++;
                }
                else  {
                    cnt++;
                    x -= 1;
                }
                if (x == 0) { 
                    ans = 1; 
                    break;
                }
            }
           
        
            k-=cnt;
        if (ans == 0) {
            cout << 0 << endl;  
        } 
        else {
        
            ll y=0;
            ll scd=k;
            ll nedf=0;
            ll needd=-1;
           for(ll i=0;i<n;i++){
            if(y==k) break;
            if(s[i]=='R'){
                nedf++;
            }
            else {
                nedf--;
            }
            y++;
            if(nedf==0){ needd=1;
                break;
            }
           
           }
           if(needd==-1) cout<<ans<<endl;
           else cout<<ans+scd/y<<endl;
        
       
        }
    }
}
