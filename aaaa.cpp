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
#define yes cout << "yes" << endl
#define no cout << "no" << endl
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
ll n,m;
cin>>n>>m;
string s,ss;
cin>>s>>ss;
ll i=0,j=0;
bool f=0;
while(i<n&&j<m){
   // cerr<<i<<' '<<j<<endl;
    if(f) break;
    if(ss[j]=='1'){
        ll s1=0;
        while(j<m&&ss[j]=='1') {
            j++;
            s1++;
        }
        ll f1=0;
        while(i<n&&s[i]=='1'){
            i++;
            f1++;
        }
        if(f1<s1) f=1;

    }
     
    else{
        //cerr<<i<<' '<<j<<endl;

        ll s0=0;
        while(j<m&&ss[j]=='0'){
            j++;
            s0++;

        }
       
        ll f0=0;
        while(i<n&&f0<s0){
            
            if(s[i]=='0') f0++;
            i++;

        }
       // cerr<<i<<' '<<j<<endl;
        while(i<n&&s[i]=='0'){
            i++;
            f0++;
        }
        if(f0<s0){
            f=1;
            break;
        }
    }

}
//if(j<m) f=1;

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