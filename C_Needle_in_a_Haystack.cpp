
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

  string s,ss;
  cin>>s>>ss;
  ll n=s.size();
  ll m=ss.size();
  unordered_map<char,ll>mp,mpp;
  itr(i,m) mpp[ss[i]]++;
  bool f=0;
  itr(i,n){
    mp[s[i]]++;

  }
  itr(i,n){
    if(mp[s[i]]>mpp[s[i]]){f=1;
    break;}
  }
  if(f) {
    cout<<"Impossible"<<endl;
    return;
  }
  for(char c='a';c<='z';c++){
    mpp[c]-=mp[c];
  }

  char c='a';
  int i=0;
  for( i=0;i<n;i++){
   //cerr<<i<<' '<<c<<' '<<s[i]<<endl;
    if(s[i]<=c){
        cout<<s[i];
       
    }
    else{
      //  cerr<<i<< ' '<<c<<' '<<mpp[c]<<endl;
        for(int j=0;j<mpp[c];j++) cout<<c;
        c++;
        i--;
       // cout<<endl;
    }
  }
  while(c<='z') {
    for(int j=0;j<mpp[c];j++) cout<<c;
        c++;
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
