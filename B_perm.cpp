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
vector<bool> isprime(N, false);
vector<ll> primes;


void solve()
{
ll n;
cin>>n;
vc(v,n+1);
v[1]=1;
ll mx=n-2;
ll i=2;
ll last=2;
map<ll,ll>mp;
set<ll>st;
while(mx>0){
    ll now=i+mx;
    mp[i]++;
    v[now]=i;
    last=i;
    i++;
    mx-=2;
}
last=n;
mp[1]++;
for(int i=3;i<=n;i++){
    if(v[i]!=0) break;
    else {
        v[i]=last;
        mp[last]++;
        last--;

    }
}
ll nai=-1;
for(int i=1;i<=n;i++){
    if(mp[i]==0){
        nai=i;
        break;
    }
}
v[2]=nai;
for(int i=1;i<=n;i++) {cout<<v[i]<<' ';
    st.insert(abs(v[i]-i));
}
endd;
for(auto x:st) cerr<<x<<' ';
cerr<<endl;

  

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  tt
  {
    solve();
  }
}
