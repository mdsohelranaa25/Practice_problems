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
void sieve()
{
  isprime[1] = false;
  isprime[2] = true;
  pb(primes, 2);
  for (int i = 3; i * i <= N; i += 2)
    isprime[i] = true;
  for (int i = 3; i <= N; i += 2)
  {
    if (isprime[i])
    {
      pb(primes, i);
      for (int j = i * i; j <= N; j += i)
      {
        isprime[j] = false;
      }
    }
  }
}

void solve()
{
ll n;
cin>>n;
vc(v,n);
itr(i,n) cin>>v[i];
ll last=0;
bool f=0;
itr(i,n){
    if(v[i]<last){
        f=1;
        break;
    }
    else {
        bool ff=0;
        ll last_digit=v[i]%10;
        ll now=v[i]/10;
        ll curent_last=now;
        ll digit;
        ll agerta=last_digit;
        if(last_digit<last) ff=1;
        while(now){
             digit=now%10;
            now/=10;
            if(digit>agerta||digit<last){
            ff=1;
            }
            else {
                agerta=digit;
            }
        }
        if(ff) last=v[i];
        else last=last_digit;
    }
}
if(f) no;
else yes;
  

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
