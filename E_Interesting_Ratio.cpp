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

const int N=1e7+1;
bitset<N> isprime;
vector<ll>primes;

void sieve(){
    isprime[2]=1;
    pb(primes,2);
    for(int i=3;i<N;i+=2) isprime[i]=1;
    for(int i=3;i*i<N;i+=2){
        if(isprime[i]){
            for(int j=i*i;j<N;j+=2*i){
                isprime[j]=0;
            }
        }
    }
    for(int i=3;i<N;i+=2){
        if(isprime[i]) pb(primes,i);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    tt{
        ll n;
        cin>>n;
        ll cnt=0;
        for(int i=0; i<primes.size() && primes[i]<=n; i++){
            cnt += n / primes[i];
        }
        cout<<cnt<<endl;
    }
}
