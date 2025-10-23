#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll comb2(ll n) {
    return n * (n - 1) / 2;
}

ll comb3(ll n) {
    return n * (n - 1) * (n - 2) / 6;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        map<int, ll> freq;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
ll ans=0,sum=0,cnt=0;
        for(auto x:freq){
            cnt=x.second;
            if(cnt>=3)
            ans+=cnt*(cnt-1)*(cnt-2)/6;
            if(cnt>=2) ans+=cnt*(cnt-1)/2*sum;
            sum+=cnt;

        }
        cout<<ans<<endl;
}
}