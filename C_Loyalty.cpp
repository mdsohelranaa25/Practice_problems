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
  ll x;
  cin>>x;
  ll i=0,j=n-1;
  vc(v,n);
  itr(i,n) cin>>v[i];
  srt(v);
  ll tot=0;
  ll sum=0,l=0;
  vector<ll>final;
  while(i<=j){
    ll now=sum+v[j];
        if(now/x>l){
        sum=now;
        final.push_back(v[j]);
        tot+=v[j];
        j--;
        l=now/x;

    }
    else {
        now=sum+v[i];
    if(now/x>l){
        sum=now;
        tot+=v[i];
        final.push_back(v[i]);
        i++;
        
        l=now/x;

    }
        
    else {sum+=v[i];
        final.push_back(v[i]);
        i++;
    }



    }
  }
  cout<<tot<<endl;
  for(auto x:final) cout<<x<<' ';
  endd;
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
