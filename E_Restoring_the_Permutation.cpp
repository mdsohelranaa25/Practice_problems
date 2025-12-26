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
    vc(v,n+1);
    itr(i,n){
        cin>>v[i+1];
    }
    vector<bool>used(n+1,false),usedd(n+1,false);
   
    vector<ll>mn,mx;
    mn.push_back(v[1]);
    //mx.push_back(v[1]);
    ll now=1;
    used[v[1]]=true;
    for(int i=2;i<=n;i++){
        if(v[i]>v[i-1]){
            mn.push_back(v[i]);
            used[v[i]]=1;

        }
        else {
            ll l=now;
            while(l<=n&&used[l]) l++;
            now=l;
            mn.push_back(now);
            now++;

        }
        
    }
    for(auto x:mn) cout<<x<<' ';
    endd;
    now=v[1]-1;
    usedd[v[1]]=true;
    mx.resize(n+1);
    for(int i=1;i<=n;i++){
        if(v[i]>v[i-1]){
            usedd[v[i]]=true;
            mx[i]=v[i];
         //   cerr<<i<<' '<<mx[i]<<' '<<v[i]<<endl;
        }
    }
     now=v[n]-1;
    ll i=n;
    vector<ll>rekhechi;
    now=v[1]-1;
    
    for(int i=2;i<=n;i++){
        if(v[i]>v[i-1]){
            if(usedd[v[i]-1]==false) {
                rekhechi.push_back(now);
                now=v[i]-1;
            }
         
        }
           else{
                if(usedd[now]){
                   now=rekhechi.back();
                    rekhechi.pop_back();
                }
               // cerr<<i<<' '<<now<<endl;
                mx[i]=now;
                // cerr<<"mx "<<i<< ' '<<now<<endl;
                usedd[now]=1;
                now--;
                 if(usedd[now]&&rekhechi.size()>0){
                    now=rekhechi.back();
                    rekhechi.pop_back();
                }
            }
    }
    for(auto x:mx) if(x!=0)cout<<x<<' ';
    endd;



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
