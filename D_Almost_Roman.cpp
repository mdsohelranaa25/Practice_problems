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
  string s;cin>>s;
  ll val=0;
  ll ierporask=0;
  for(int i=0;i<n;i++){
    if(s[i]=='V') val+=5;
    else if(s[i]=='X') val+=10;
    else if(s[i]=='I'){
        if(i==n-1) val++;
        else {
            if(s[i+1]=='I') val++;
            else if(s[i+1]!='?') val--;
            else ierporask++;
        }
    }
  }
  ll suremin=0;
  ll extmn=0;
  char ekhn='I';
  for(int i=n-1;i>=0;i--){
    if(s[i]=='?'){
        if(i<n-1&&s[i+1]=='V'||s[i+1]=='X') suremin++;
        else if(ekhn='I') ekhn='V';
        else {
            extmn++;
            ekhn='I';
        }
    }
  

  }
  ll ask=0;
  itr(i,n){
    if(s[i]=='?') ask++;
  }
  while(k--){
    ll a,b,c;
    cin>>a>>b>>c;
    if(a==0&&b==0){
        c=min(c,ask);
        ll now=val;
        val-=suremin;
        c-=suremin;
        val+=extmn;
        val+=ierporask;

    }
    else{
        ll minus=min(suremin,c);
        ll now=val;
        now-=minus;
        c-=minus;
        
        ask-=minus;
        val+=min(ask,c);
        ask-=min(ask,c);
        if(ask>0){
            val+=min(ask,b)*5;
           
            ll ekhngelo=min(ask,b);
        ask-=min(ask,b);
        

        }
       


    }
  }

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
