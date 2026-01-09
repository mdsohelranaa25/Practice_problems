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
    string s;
    cin>>s;
    int paichi=0;
    itr(i,s.size()-3){
        if(s[i]=='2'&&s[i+1]=='0'&&s[i+2]=='2'){
            if(s[i+3]=='6') {
                paichi=1;
                break;
            }
            else if(s[i+3]=='5'){
                paichi=2;
            }
            
        }

    }
    if(paichi==1) cout<<0<<endl;
    else if(paichi==2) cout<<1<<endl;
    else cout<<0<<endl;

  

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
