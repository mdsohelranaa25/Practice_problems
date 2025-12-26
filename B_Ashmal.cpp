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
ll len=n;
vector<string>v(n+1);
itr(i,n) cin>>v[i];
string s="";
s+=v[0];
//cerr<<"hello "<<endl;
for(int j=1;j<len;j++){
 //   cerr<<j<<' ';
    string age=s;
    string now=v[j];
     string tmp=now+age;
        string tmpp=age+now;
        if(tmp>tmpp) s=tmpp;
        else s=tmp;
    // ll i=0;
    // n=age.size(); ll m=now.size();
    // while(i<max(n,m)){
    //     if(age[i%n]!=now[i%m]) {
    //         if(age[i%n]<now[i%m]){
    //             s=age+now;
                

    //         }
    //         else s=now+age;
    //         break;
    //     }
    //     else i++;
    // }
    // if(i==max(n,m)){
    //     string tmp=now+age;
    //     string tmpp=age+now;
    //     if(tmp>tmpp) s=tmpp;
    //     else s=tmp;

    // }
}
cout<<s<<endl;
  

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
