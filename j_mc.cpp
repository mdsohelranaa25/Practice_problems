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
#define ll double
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
ll tx;
cin>>tx;
ll ans=12500;
if(tx==0) cout<<ans<<endl;
else if(tx<=7500){
    ans+=tx/.2;
    cout<<fixed<<setprecision(8)<<ans<<endl;
}
else if(tx>7500){
    ans=50000;
    tx-=7500;
    if(tx<=20000) {
        ans+=tx/0.4;
        cout<<fixed<<setprecision(8)<<ans<<endl;
    }
    else{
        ans=100000;
        tx-=20000;
        if(tx<=15000){
            ans+=tx/0.6;
            cout<<fixed<<setprecision(8)<<ans<<endl;
        }
        else{
            ans=125000;
            tx-=15000;
            if(tx<=10000){
                ans+=tx/0.4;
                cout<<fixed<<setprecision(8)<<ans<<endl;
                
            }
            else{
                ans=150000;
                tx-=10000;
                ans+=tx/0.45;
cout<<fixed<<setprecision(8)<<ans<<endl;            }
        }
    }
}

  

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
 //divis();
  tt
  {
    solve();
  }
}
