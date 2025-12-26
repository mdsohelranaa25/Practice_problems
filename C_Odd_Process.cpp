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
  ll k=n;
  vc(v,n);
  itr(i,n) cin>>v[i];
  vector<ll>ans(n+5,0);
  vector<ll>odd,ev;
    itr(i,n){
        if(v[i]%2==0) ev.push_back(v[i]);
        else odd.push_back(v[i]);
    }
    ans[0]=0;
    if(odd.size()==0){
        for(int i=1;i<=k;i++){
            ans[i]=0;
        }
    }
    else{
        rsrt(odd);
        rsrt(ev);
        ans[1]=odd[0];
        for(int i=0;i<ev.size();i++){
            ans[i+2]=ans[i+1]+ev[i];
        }
        ll chilo=ev.size()+1;
        for(int i=ev.size()+2;i<=k;i++){
            ll need=i-chilo;
            if(need%2){
                need++;
            }
            if(odd.size()-1>=need){
                ans[i]=ans[i-need];
            }
            else ans[i]=0;
            
        }
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<' ';
    }
    cout<<endl;

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
