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
const int N = 5e6 + 9;
vector<bool> isprime(N, false);
vector<ll> primes;
vector<ll>spf(N+5,0);
vector<ll>pre(N+5,0);
void spff(){

    for(ll i=2;i<=N;i++) spf[i]=i;
    for(ll i=2;i*i<=N;i++){
        if(spf[i]==i){
            for(int j=i;j<=N;j+=i) spf[j]=min(spf[j],i);
        }
    }
}
void prec(){
    pre[1]=0;
    for(int i=2;i<N;i++){
        ll now=0;
        ll cur=i;
        while(cur>1){
            ll dv=spf[cur];
            while(cur%dv==0){
                now++;
                cur/=dv;
            }
        }
        pre[i]=pre[i-1]+now;
    }

}

void solve()
{

  ll a,b;
  cin>>a>>b;
  cout<<pre[a]-pre[b]<<endl;

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
    spff();
  prec();
  tt
  {
    solve();
  }
}
