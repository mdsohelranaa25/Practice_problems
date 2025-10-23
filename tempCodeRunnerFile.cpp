#include<bits/stdc++.h>
using namespace std;
#define tt int t;cin>>t;while(t--)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long
#define endd cout<<endl
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define f first
#define sc second
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    tt{
        ll n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        if (n <= m) {
            ll i = 0, j = 0;
            bool found = 0;
            while (j < m) {
                if (s[j] == x[0]) {
                    found = 1;
                    break;
                }
                j++;
            }
            ll cc=j;

            if (!found) {
                cout << -1 << endl;
                continue;
            }

            i = 0; 
            ll start = j; 
            bool mismatch = 0;

            while (j < m) {
                if (x[i % n] != s[j]) {
                    mismatch = 1;
                    break;
                }
                i++;
                j++;
            }

            if (mismatch) {
                cout << -1 << endl;
                continue;
            }

            ll times ;
            if(cc==0) times=0;
            else times=1;
            ll length = n;
            while (length < m) {
                length *= 2;
                times++;
            }
            cout << times << endl;
        }
        else {
            bool prefix_match = 1, suffix_match = 1;
            ll i = 0, j = m - 1, k = n - 1;

            for (i = 0; i < n && j >= 0; i++, j--) {
                if (s[j] != x[i]) {
                    prefix_match = 0;
                    break;
                }
            }

            for (k = n - 1; k >= 0 && j >= 0; k--, j--) {
                if (s[j] != x[k]) {
                    suffix_match = 0;
                    break;
                }
            }
            if(prefix_match) cout<<0<<endl;
            else if (suffix_match) cout << 1 << endl;
            else cout << -1 << endl;
        }
    }
}
