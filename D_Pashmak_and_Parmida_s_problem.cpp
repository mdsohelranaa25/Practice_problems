    // #include<bits/stdc++.h>
    // #include<ext/pb_ds/assoc_container.hpp>
    // #include<ext/pb_ds/tree_policy.hpp>
    // using namespace __gnu_pbds;
    // using namespace std;
    // #define ll int
    // #define vc(v,n) vector<ll>v(n+1)
    // #define itr(i,n) for(int i=1;i<=n;i++)
    // #define  endd cout<<'\n'
     
     
    // //cout << *se.find_by_order(0) << endl; ///k th element
    //  // cout << se.order_of_key(2) << endl; ///number of elements less than k
    // // cout << mp.find_by_order(0)->second << endl; ///k th element
    //  // cout << mp.order_of_key(2) << endl; ///number of first elements less than k
    // template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
    // template <typename T, typename R> using o_map = tree<T, R, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
    // int main() {
    //     ios_base::sync_with_stdio(0); cin.tie(0);
    //  ll n;
    //  cin>>n;
    //  vc(v,n);
    //  itr(i,n) cin>>v[i];
    // unordered_map<ll,ll>mp,mpp;
    //  itr(i,n-1) mp[v[i]]++;
     
    //   o_set<pair<ll,ll>>st;
    //   st.insert({1,v[n]});
     
    //   mpp[v[n]]++;
    //   long long ans=0;
    //   for(int i=n-1;i>=1;i--){
    //     ll now=mp[v[i]];
    //     mpp[v[i]]++;
       
    //     ll pore=st.order_of_key({now,0});
    //      st.insert({mpp[v[i]],v[i]});
    //     ans+=pore;
    //     mp[v[i]]--;
     
    //   }
    //   cout<<ans<<endl;
     
     
    // }


    /*
  //! In The Name Of Allah




*/
/*
  //! In The Name Of Allah
*/
#include <bits/stdc++.h>
using namespace std;

#define tt  int t; cin >> t; while (t--)
#define itr(i, a) for (int i = 0; i < a; i++)
#define ittr(i, bg, a) for (int i = bg; i < a; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define endd cout << endl
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a, x) a.push_back(x)
#define MOD 1000000007
#define f first
#define sc second
#define endl '\n'

const int N = 1e6 + 1;

unordered_map<ll,ll>mp,cnt;
ll v[N];
ll tr[4*N];   // node replaced by int

ll marge(ll l, ll r){
    return l + r; // sum
}

void init(int ind, int b, int e){
    if(b == e){
        tr[ind] = cnt[b];
        return;
    }
    int mid = (b+e)/2;
    init(ind*2, b, mid);
    init(ind*2+1, mid+1, e);
    tr[ind] = marge(tr[ind*2], tr[ind*2+1]);
}

void upd(int ind, int b, int e, int i){
    if(b > i || e < i) return;
    if(b == i && e == i){
        tr[ind]--;        // decrease 1
        return;
    }
    int mid = (b+e)/2;
    upd(ind*2, b, mid, i);
    upd(ind*2+1, mid+1, e, i);
    tr[ind] = marge(tr[ind*2], tr[ind*2+1]);
}

ll ask(int ind, int b, int e, int i, int j){
    if(b > j || e < i) return 0;
    if(b >= i && e <= j) return tr[ind];
    int mid = (b+e)/2;
    ll left = ask(ind*2, b, mid, i, j);
    ll right = ask(ind*2+1, mid+1, e, i, j);
    return marge(left, right);
}

void solve()
{
    ll n;
    cin >> n;
    for(int i=1;i<=n;i++) cin >> v[i];

    vc(b, n+4);

   
    for(int i=n;i>=1;i--){
        mp[v[i]]++;
        b[i] = mp[v[i]];
        cnt[b[i]]++;
    }

    init(1,1,n);
    mp.clear();

    ll ans = 0;

    for(int i=1;i<=n;i++){
        mp[v[i]]++;
        ll now = mp[v[i]];
        upd(1,1,n, b[i]);
        ll tot = ask(1,1,n, 1, now-1);
        ans += tot;
    }

    cout << ans << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
