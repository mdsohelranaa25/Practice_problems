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
ll i=n;
ll ans=3*n;
while(i<=3*n+5){
    if(ans<3*n) break;
    ll a=n,b=n,c=n;
    ll ache=i;
     if(i>=1167) cerr<<ache<<' ';
    ache-=c/2;

    c=c%2;
    if(i>=1167) cerr<<ache<<' ';
    if(c) {
        ache--;
        b--;
    }
     if(i>=1167) cerr<<ache<<' ';
    ll ekhon=b/2;
    b=b%2;
    ache-=ekhon;
    a-=ekhon;
     if(i>=1167) cerr<<ache<<' ';
    if(b){
        ache--;
        a-=2;
    }
     if(i>=1167) cerr<<ache<<' ';
    ache-=a/3;

     if(i>=1167) cerr<<ache<<' ';
    if(a%3>0) ache--;
     if(i>=1167) cerr<<ache<<' ';
    if(ache>=0){
        ans=i;
        break;
    }
    if(i==1167)
    cerr<<endl;
    i++;


}
cout<<ans<<endl;

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
