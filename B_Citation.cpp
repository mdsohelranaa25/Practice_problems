#include<bits/stdc++.h>
using namespace std;

#define tt int t;cin>>t;while(t--)
#define itr(i,a) for(int i=0;i<a;i++)
#define ittr(i,bg,a) for(int i=bg;i<a;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long
#define endd cout<<endl
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a,x) a.push_back(x)
#define MOD 1000000007
#define f first
#define sc second
#define endl '\n'

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vc(v, n);
    set<ll> st;
    itr(i, n) {
        cin >> v[i];
        st.insert(v[i]);
    }

    unordered_map<ll, ll> mp; 

    itr(i, n) mp[v[i]]++;

    ll mx = 0;
    ll pre = 0;

    for (auto x : st) {
        ll cur = n - pre;
        if (cur >= x) mx = max(mx, x);
        else break;
        pre += mp[x];
    }

    cout << mx << endl;
}
