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

  string s;
  cin>>s;
  map<ll,vector<ll>>mp;
  ll n=s.length();
  ll mx=0;
  ll left=0,right=0;
  
ll cur=0;
  itr(i,n){
cur=left-right;
//cerr<<i<<' '<<cur<<endl;
mx=max(mx,cur);
mp[cur].push_back(i);
if(s[i]=='(') left++;
else right++;
  }
  for(int i=0;i<=mx;i++){
    rsrt(mp[i]);
   // cerr<<"i "<<i<<' '<<mp[i].size()<<endl;
    for(auto x:mp[i]) {cout<<s[x];
        //cerr<<x<<' ';
    }
   // cerr<<endl;
  }

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  //tt
  {
    solve();
  }
}
