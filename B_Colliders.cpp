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
vector<ll>spf(N+5,0);
void spff(){

    for(ll i=2;i<=N;i++) spf[i]=i;
    for(ll i=2;i*i<=N;i++){
        if(spf[i]==i){
            for(int j=i;j<=N;j+=i) spf[j]=min(spf[j],i);
        }
    }
}
void solve()
{
ll n,m;
cin>>n>>m;
unordered_map<ll,ll>mp,num;
 unordered_map<ll,ll> owner;
// Success  Conflict with  Already on
while(m--){
   //cerr<<m<<endl;
char ch;
ll dg;
cin>>ch>>dg;
//cerr<<ch<<' '<<dg<<endl;
if(ch=='+'){
   //cerr<<num[dg]<<' '<<dg<<endl;
    if(num[dg]) cout<<"Already on"<<endl;
    else {
        set<ll> st;
                ll tmp = dg;
                while(tmp > 1){
                    ll p = spf[tmp];
                    st.insert(p);
                    while(tmp % p == 0) tmp /= p;
                }

                ll who = 0;
                for(auto p : st){
                    if(owner[p]){
                        who = owner[p];
                        break;
                    }
                }

                if(who){
                    cout<<"Conflict with "<<who<<endl;
                }
                else{
                    cout<<"Success"<<endl;
                    num[dg] = 1;
                    for(auto p : st) owner[p] = dg;
                }
            }
        }
        else{
            if(!num[dg]){
                cout<<"Already off"<<endl;
            }
            else{
                cout<<"Success"<<endl;
                num[dg] = 0;
                ll tmp = dg;
                while(tmp > 1){
                    ll p = spf[tmp];
                    owner[p] = 0;
                    while(tmp % p == 0) tmp /= p;
                }
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
  spff();
  //tt
  {
    solve();
  }
}


