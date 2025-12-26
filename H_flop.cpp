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

    
  ll n,k;
  cin>>n>>k;
  vector<ll>save(k+5,-1);
  if(n==k) {
    for(int i=0;i<n-1;i++) {
        cout<<-1<<' ';

    }
    cout<<1;
    cout<<endl;
    return;
  }
 // cerr<<n<<endl;
  for(int c=1;c<=n;c++){
    ll m=c;
// cerr<<m<<' ';

    if(m%k==0) {cout<<m/k<<' ';
        continue;}
    ll ans=0;
     if(m>k){
     ans=m/k+save[m%k];
     cout<<ans<<' ';
     continue;
     
    }
        m%=k;
        if((k-m)%2==k%2) ans+=2;
       
        else if((k-m)%2==m%2) {
            cout<<-1<<' ';
            continue;
        }
        else ans+=3;
        save[m]=ans;

        cout<<ans<<' ';

        
    
  }
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
