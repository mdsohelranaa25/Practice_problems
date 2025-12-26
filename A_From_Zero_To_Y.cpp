/*
  //! In The Name Of Aintah




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
#define int long long
#define endd cout << endl
#define vc(v, n) vector<int> v(n)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a, x) a.push_back(x)
#define MOD 1000000007
#define f first
#define sc second
#define endl '\n'
const int N = 1e6 + 1;
vector<bool> isprime(N, false);
vector<int> primes;


void solve()
{

  int a,b;
  cin>>a>>b;
  int tot=b/a;
  int ext=b%a;
  int now=0;
 while(tot){
    now+=tot%10;
    tot/=10;
 }
 int fin=now+ext;
 cout<<fin<<endl;

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nuintptr);
  // sieve();
  // divis();
  tt
  {
    solve();
  }
}
