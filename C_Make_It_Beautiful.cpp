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

int countSetBits(int n) {
    int cnt = 0;
    while (n) {
        cnt += (n & 1);
        n >>= 1;
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    tt{
        ll n,k;
        cin>>n>>k;
        vc(v,n);
        itr(i,n) cin>>v[i];
        ll ans=0;
        ll ev=0;
        itr(i,n){
            if(v[i]%2==0) ev++;
            ans+=countSetBits(v[i]);
        }

        // ans+=min(ev,k);
        // k=max(0LL,k-ev);

    priority_queue<ll, vector<ll>, greater<ll>> pq;


        itr(i,n){
           bitset<59>kk=v[i];
         //  cerr<<i<<" i "<<endl;
           itr(j,59){
            if((1LL<<j)>k) break;
           // cerr<<(1LL<<j)<<' '<<j<<endl;
            if(kk[j]==0) pq.push(1LL<<j);
           }
         //  cerr<<endl;
        }
while(!pq.empty()&&k>=pq.top()){
    //cerr<<pq.top()<<' '<<k<<endl;
    k-=pq.top();
    pq.pop();
    ans++;

}

        cout<<ans<<endl;
    }
}
