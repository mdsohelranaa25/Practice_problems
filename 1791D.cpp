#include<bits/stdc++.h>
using namespace std;
#define tt int t;cin>>t;while(t--)
#define itr(i,a) for(int i=0;i<a;i++)
#define ll long long
#define vc(v, n) vector<ll> v(n)  
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define MOD 1000000007
#define f first
#define sc second

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        map<char,ll>mp1,mp2;
        set<char> left, right;
        for (char c : s) {mp1[c]++;
            left.insert(c);
        }

        ll mx = left.size();
        for (ll i = 0; i < n; i++) {
            char c = s[i];
            mp1[s[i]]--;
            if(mp1[c]==0)
            left.erase(c);
            
            right.insert(c);
            ll cnt = left.size() + right.size();
            mx = max(mx, cnt);
        }

        cout << mx << endl;
    }
}
