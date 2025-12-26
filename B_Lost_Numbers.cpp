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
/*
 4
, 8
, 15
, 16
, 23
, 42
*/

void solve()
{
set<ll>st;
st.insert({4,8,15,16,23,42});
map<ll,ll>mp,mpp;
mp[4]=1;
mp[8]=1;
mp[15]=1;
mp[16]=1;
mp[23]=1;
mp[42]=1;
vc(v,7);
cout<<"? "<<"1 2"<<endl;
cout.flush();
ll m;
cin>>m;
ll a,b;
for(auto x:st) if(m%x==0&&mp[m/x]>0){
    a=x;
    b=m/x;
    break;

}
mpp[a]=1;
mpp[b]=1;
mp[a]++;
mp[b]++;


cout.flush();
//
cout<<"? "<<"2 3"<<endl;
cout.flush();

cin>>m;

for(auto x:st) if(m%x==0&&mp[m/x]>0){
    a=x;
    b=m/x;
    break;

}
mpp[a]=2;
mpp[b]=2;
if(mp[a]==1) mpp[a]=3;
else mpp[b]=3;

cout.flush();
cout<<"? "<<"4 5"<<endl;
cout.flush();
 
cin>>m;

for(auto x:st) if(m%x==0&&mp[m/x]>0){
    a=x;
    b=m/x;
    break;

}
mpp[a]=4;
mpp[b]=4;

mp[a]++;
mp[b]++;
cout.flush();

//
cout<<"? "<<"5 6"<<endl;
cout.flush();
 
cin>>m;

for(auto x:st) if(m%x==0&&mp[m/x]>0){
    a=x;
    b=m/x;
    break;

}
mpp[a]=5;
mpp[b]=5;

if(mp[a]==1) mpp[a]=6;
else mpp[b]=6;

cout.flush();
for(auto x:st){
    v[mpp[x]]=x;
}

cout<<"! ";
for(int i=1;i<=6;i++) cout<<v[i]<<' ';


}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  //tt
  {
    solve();
  }
}
