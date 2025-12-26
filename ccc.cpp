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
#define MOD 10000007
#define f first
#define sc second
#define endl '\n'
const int N = 1e6 + 5;
vector<int> divisors[N];
void precompute_divisors() {
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i) {
            divisors[j].push_back(i);
        }
    }
}
vector<ll>save(N,0);
void sav(){
  save[1]=1;
  for(int i=2;i<N;i++){
   
    for(auto x:divisors[i]) save[i]+=divisors[x].size();
  }
}
vector<ll>fct(N+5,1);
void pre(){
    for(int i=2;i<N;i++){
        fct[i]=i*fct[i-1];
        fct[i]%=MOD;
    }
}


void solve(ll n)
{

n=fct[n];
cout<<save[n]<<endl;






}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  precompute_divisors();
  sav();
  pre();
while(1) {
    ll n;
    cin>>n;
    if(n>0) solve(n);
    else return 0;
}
}
