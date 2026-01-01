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
#define MOD 998244353
#define f first
#define sc second
#define endl '\n'
const int N = 1e6 + 1;
vector<bool> isprime(N, false);
vector<ll> primes;

vector<ll>fact(N,1),modinv(N,1);
ll power(ll x,ll mod){
    if(mod<0) return 0;
    ll ans=1;
    while(mod){
        if(mod%2==0){
            x=(x*x)%MOD;
            mod/=2;
        }
        else{
            ans=(ans*x)%MOD;
            mod--;
        }
    }
    return ans;
}
void precomp(){
    fact[0]=1;
    for(int i=1;i<N;i++){
        fact[i]=(fact[i-1]*i)%MOD;
        modinv[i]=power(fact[i],MOD-2);

    }
}



void solve()
{

    ll n;
    cin>>n;
    vc(v,n+1);
    itr(i,n){
        cin>>v[i+1];

    }
    vector<ll>dp(n+5,0);
    ll curseg=1;
    dp[0]=0;
    vector<ll>preo(n+5,0);
    for(int i=1;i<=n;i++) {
        preo[i]+=preo[i-1];
        if(v[i]==1) preo[i]++;
    }
    vector<ll>pre(n+5,0);
    for(int i=n;i>0;i--){
        if(v[i]==3) pre[i]++;
        pre[i]+=pre[i+1];
    }
    ll cnt=0;
    ll cnt1=0;
    ll ans=0;
    ll i=1;
    while(i<=n){
    
        if(v[i]==1){
            if(cnt==0){
                cnt1++;
            }
            else{
               ll ekhon = (power(2, cnt) - 1 + MOD) % MOD;

                ekhon%=MOD;

                ll ekhane=ekhon*preo[i-1];
            
                ekhane%=MOD;
                ans+=(ekhane*pre[i])%MOD;
                ans%=MOD;
                ekhane=ekhon*dp[curseg-1];
                ekhane%=MOD;
                dp[curseg]=(ekhane+(((power(2, cnt) - 1 + MOD) % MOD)*preo[i-1])%MOD)%MOD;
                dp[curseg]+=dp[curseg-1];
                dp[curseg]%=MOD;
                ekhane*=pre[i];
                    cnt1=1;
                cnt=0;
                ekhane%=MOD;
                ans+=ekhane;
                ans%=MOD;
                curseg++;

            }

        }

        if(v[i]==2){

            cnt++;
            
        }
        if(v[i]==3){

                ll ekhon = (power(2, cnt) - 1 + MOD) % MOD;
                ekhon%=MOD;
                ll ekhane=ekhon*preo[i];
                //cerr<<ekhane<<' ';
            
                ekhane%=MOD;
                //ans+=(ekhane*pre[i])%MOD;
                ans+=ekhane;
                ans%=MOD;
                ekhane=ekhon*dp[curseg-1];
              //  cerr<<ekhane<<" s "<<endl; 
                ekhane%=MOD;
              
       
                ans+=ekhane;
                ans%=MOD;
        }
        i++;
       // cerr<<i-1<<' '<<ans<<endl;
    }
    cout<<ans<<endl;
    

  

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  precomp();
  // divis();
  tt
  {
    solve();
  }
}
