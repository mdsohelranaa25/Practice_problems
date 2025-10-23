// /*
//     //! In The Name Of Allah
// */

// #include<bits/stdc++.h>
// using namespace std;
// #define tt int t;cin>>t;while(t--)
// #define itr(i,a) for(int i=0;i<a;i++)
// #define ittr(i,bg,a) for(int i=bg;i<a;i++)
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
// #define ll long long
// #define endd cout<<endl
// #define vc(v, n) vector<ll> v(n)
// #define srt(v) sort(v.begin(), v.end())
// #define rsrt(v) sort(v.rbegin(), v.rend())
// #define pb(a,x) a.push_back(x)
// #define MOD 1000000007
// #define f first
// #define sc second
// #define endl '\n'

// const int N=1e6+1;
// vector<bool>isprime(N,false);
// vector<ll>primes;
// ll cnt_div[N]={0};
// vector<ll>divisor[N];

// void divis(){
//     for(int i=1;i<=N;i++){
//         for(int j=i;j<=N;j+=i){
//             cnt_div[j]++;
//             divisor[j].push_back(i);
//         }
//     }
// }

// void sieve(){
//     isprime[1]=false;
//     isprime[2]=true;
//     pb(primes,2);
//     for(int i=3;i*i<=N;i+=2) isprime[i]=true;
//     for(int i=3;i<=N;i+=2){
//         if(isprime[i]){
//             pb(primes,i);
//             for(int j=i*i;j<=N;j+=i){
//                 isprime[j]=false;
//             }
//         }
//     }
// }

// set<ll>st;
// ll ps;

// void rec(vector<pair<ll,char>>&pr,ll i,ll n,ll m,ll x){
//     if(i==m) {
//         ps = x;
//     }
//     else if(i < m && pr[i].sc == '0'){
//         ll r = pr[i].f;
//         if(r > (n - x)){
//             r -= (n - x);
//             x = r;
//         }
//         else x += r;
//         rec(pr, i+1, n, m, x);
//     }
//     else if(i < m && pr[i].sc == '1'){
//         ll r = pr[i].f;
//         if(r > (x - 1)){
//             r -= (x - 1);
//             x = n - (r - 1);
//         }
//         else {
//             x -= r;
//         }
//         rec(pr, i+1, n, m, x);
//     }
// }

// void recc(vector<pair<ll,char>>&pr,ll i,ll n,ll m,ll x){
//     if(i == m) {
//         st.insert(x);
//         return;
//     }

//     ll r = pr[i].f;
//     ll xx;

   
//     if(r > (n - x)){
//         r -= (n - x);
//         xx = r;
//     }
//     else xx = x + r;
//     recc(pr, i + 1, n, m, xx); 

//     r = pr[i].f;
    
//     if(r > (x - 1)){
//         r -= (x - 1);
//         xx = n - (r - 1);
//     }
//     else {
//         xx = x - r;
//     }
//     recc(pr, i + 1, n, m, xx); 
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     tt {
//         st.clear();
//         vector<pair<ll,char>>pr, prr;
//         ll n, m; 
//         cin >> n >> m >> ps;

//         itr(i, m){
//             ll x;
//             char ch;
//             cin >> x >> ch;
//             if(ch == '?'){
//                 prr.push_back(make_pair(x, ch));
//             }
//             else pr.push_back(make_pair(x, ch));
//         }

//         ll l = pr.size();
//         ll l2 = prr.size();

//         rec(pr, 0, n, l, ps);
//         recc(prr, 0, n, l2, ps);

//         cout << st.size() << endl;
//         for(auto x : st){
//             cout << x << ' ';
//         }
//         endd;
//     }
// }
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

set<ll>st;
map<pair<ll,ll>, bool>vis;
ll ps;

ll move_forward(ll x, ll r, ll n) {
    if (r > (n - x)) {
        r -= (n - x);
        return r;
    }
    return x + r;
}

ll move_backward(ll x, ll r, ll n) {
    if (r > (x - 1)) {
        r -= (x - 1);
        return n - (r - 1);
    }
    return x - r;
}

void dfs(vector<pair<ll,char>>&pr, ll i, ll n, ll m, ll x) {
    if (i == m) {
        st.insert(x);
        return;
    }

    if (vis[{i,x}]) return;
    vis[{i,x}] = true;

    ll r = pr[i].f;
    ll forward_pos = move_forward(x, r, n);
    dfs(pr, i+1, n, m, forward_pos);

    ll backward_pos = move_backward(x, r, n);
    dfs(pr, i+1, n, m, backward_pos);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt{
        st.clear();
        vis.clear();

        vector<pair<ll,char>>pr,prr;
        ll n,m; cin>>n>>m>>ps;

        itr(i,m){
            ll x; char ch;
            cin>>x>>ch;

            if(ch=='?') prr.push_back({x,ch});
            else pr.push_back({x,ch});
        }

        for(auto x:pr){
            if(x.sc=='0') ps = move_forward(ps, x.f, n);
            else if(x.sc=='1') ps = move_backward(ps, x.f, n);
        }

        dfs(prr, 0, n, prr.size(), ps);

        cout<<st.size()<<endl;
        for(auto x:st) cout<<x<<" ";
        cout<<endl;
    }
}
