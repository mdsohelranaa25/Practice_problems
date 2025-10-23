

#include<bits/stdc++.h>
using namespace std;
#define tt int t;cin>>t;while(t--)
#define itr(i,a) for(int i=0;i<a;i++)
#define ittr(i,bg,a) for(int i=bg;i<a;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long
#define endd cout<<endl
#define vc(v, n) vector<ll> v(n)  
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a,x) a.push_back(x)
#define MOD 1000000007
#define f first
#define sc second
#define endl '\n'
const int N=1e6+1;
vector<bool>isprime(N,false);
vector<ll>primes;
ll cnt_div[N]={0};
vector<ll>divisor[N];
void divis(){
    for(int i=1;i<=N;i++){
        for(int j=i;j<=N;j+=i){
            cnt_div[j]++;
            divisor[j].push_back(i);
        }
    }
}
void sieve(){
    isprime[1]=false;
    isprime[2]=true;
    pb(primes,2);
    for(int i=3;i*i<=N;i+=2) isprime[i]=true;
    for(int i=3;i<=N;i+=2){
        if(isprime[i]){
            pb(primes,i);
            for(int j=i*i;j<=N;j+=i){
                isprime[j]=false;
            }
        }
    }
}
vector<ll>v;
vector<long double>perpc;
ll ans=0;
ll rec(ll rem,ll j){
    if(rem==0) return 0;
    ll last=j;
    ll current=0;
    ll count=0;
    ll here=1LL<<j;
    ll can_take=rem/here;
    count+=can_take*v[j];
    rem-=can_take*here;
    current=v[j];
 
    return count+min(current,rec(rem,j-1));
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin>>n>>m;
    itr(i,n) {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=1;i<n;i++){
        v[i]=min(v[i-1]*2,v[i]);

    }
    ll last=n-1;

    ll first=0;
    long double mn=LLONG_MAX;
    ll litter=0;
  
    
    ans=rec(m,last);
    cout<<ans<<endl;
}
