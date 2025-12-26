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

#define int long long
void solve()
{

  
ll n,m;
cin>>n>>m;
vector<vector<ll>>v(n+1,vector<ll>(m,0));
itr(i,n){
    itr(j,m) cin>>v[i][j];
}
vector<vector<ll>>col(m+1,vector<ll>(35,0)),row(n+1,vector<ll>(35,0));
itr(i,n){

    itr(j,m){
        bitset<35>k=v[i][j];
        for(int l=0;l<35;l++){
           // row[i+1][l]+=row[i][l];
            row[i+1][l]+=k[l];
        }

    }
}
for(int j=0;j<m;j++){
    for(int i=0;i<n;i++){
        bitset<35>k=v[i][j];
        //cerr<<v[i][j]<<' ';
        for(int l=0;l<35;l++){
            //cerr<<"l "<<l<<' '<<j<<' '<<k[l]<<' '<<col[j+1][l]<<' ';
            col[j+1][l]+=(k[l]);
          //  cerr<<col[j+1][l]<<endl;
            //cerr<<"c "<<j+1<<' '<<l<<' '<<col[j+1][l]<<endl;
        }
    }
}
ll mxv=-1,mxi=-1,mxy=-1;
ll totsum=0;
itr(i,n){
   
    itr(j,m){
        ll now=0;
        
        bitset<35>k=v[i][j];
        for(int l=0;l<35;l++){
            if(row[i+1][l]%2==1&&col[j+1][l]%2==1){
                now+=(1LL<<l);
            }


        }
        mxv=max(mxv,now);
    }
}


mxv*=2;
itr(i,n){
    
        ll now=0;
        for(int l=0;l<35;l++){
            if(row[i+1][l]%2==1) now+=(1LL<<l);
           // if(col[j+1][l]%2==1) now+=(1LL<<l);
        }
       // cerr<<i<<' '<<now<<endl;
        
        totsum+=now;

    
}
//cerr<<"Cl "<<endl;
itr(j,m){
    ll now=0;
        for(int l=0;l<35;l++){
            //if(row[i+1][l]%2==1) now+=(1LL<<l);
            if(col[j+1][l]%2==1) now+=(1LL<<l);
        }
      //  cerr<<j<<' '<<now<<endl;
        
        totsum+=now;


}
//cerr<<totsum<<endl;
totsum-=mxv;
cout<<totsum<<endl;

}
int32_t main()
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
