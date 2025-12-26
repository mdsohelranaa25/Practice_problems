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
bool change=true;
vector<ll>freq(10,0);
void add(ll x){
    change=true;
    while(x>0){
        freq[x%10]++;
        x/=10;
    }
}
void dlt(ll x){
     while(x>0){
        freq[x%10]--;
        x/=10;
    }
}
void fun(ll x){
    multiset<ll>st;
     while(x>0){
       st.insert(x%10);
        x/=10;
    }
    ll tot=0;
    for(auto ch:st){
        tot+=freq[ch];
    }
    cout<<tot<<endl;

}
map<ll,bool>mp;

void solve()
{

    ll n,m;
cin>>n>>m;
    vc(v,n);
    itr(i,n) cin>>v[i];
    for(auto x:v){
        add(x);
        mp[x]=true;
    }
    //cerr<<"f"<<endl;
    while(m--){
        
        char ch;
        cin>>ch;
        if(ch=='?'){
            ll x;
            cin>>x;
            if(mp[x]){
                fun(x);
            }
            else
            cout<<-1<<endl;
        }
        else if(ch=='+'){
            ll x;
            cin>>x;
            if(mp[x]){
                mp[x]=false;
                dlt(x);
                if(change){
                    change=false;
                srt(v);
                }
                v.erase(lower_bound(v.begin(),v.end(),x));
            }
            else{
                v.push_back(x);
                add(x);
                
                mp[x]=true;
            }
        }
        else {
            ll x;
            cin>>x;
            if(v.size()>=x){
                //x--;
                x=v.size()-x;
                if(change){
                    srt(v);
                    change=false;
                }
                ll now=v[x];
                v.erase(v.begin()+x);
                mp[now]=false;
                dlt(now);

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
  //tt
  {
    solve();
  }
}
