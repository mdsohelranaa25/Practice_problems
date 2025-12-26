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
  ll n=s.size();
  bool right=false,left=false;
  ll ast=0;
  bool f=0;
  ll leftt=0;
  ll rightt=0;
  itr(i,n){
    if(s[i]=='>') {right=true;
        rightt++;
    }
    if(s[i]=='<'){
        left=true;
        leftt++;
        if(right==true||ast>0) f=1;
    }
    if(s[i]=='*'){
        ast++;
        if(ast>1) f=1;
        else if(right==true) f=1;
    }
  }
   //rightt=n-leftt;
  if(f) cout<<-1<<endl;
  else  cout<<max(leftt,rightt)+ast<<endl;

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
