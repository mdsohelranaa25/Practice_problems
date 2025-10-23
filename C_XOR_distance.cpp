/*
    //! In The Name Of Allah
*/

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
            for(int j=i*i;j<=N;j+=i)
                isprime[j]=false;
#define intt long long
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt{
        ll n,m,r;
        cin>>n>>m>>r;
        bitset<75>k=n;
        bitset<75>kk=m;
        ll dif=abs(n-m);
        bool f=0;
        ll cnt=0;
        ll a=n,b=m,c=r;
        bool ff=0;

        intt lind=-1;
        for(ll i=64;i>=0;i--){
            if(k[i]!=kk[i]){
                if((1LL<<i)>r) { 
                    f=1;
                    lind=i;
                    break;
                }
                else { 
                    lind=i;
                    r-=(1LL<<i);  
                    n^=(1LL<<i);  
                    m^=(1LL<<i); 
                    ff=1;
                    dif=min(dif,abs(n-m));
                    break;
                }
            }
        }
        if(ff||f){
            ll x=min(a,b);
            ll y=max(a,b);
            bitset<65>xx=x;
            bitset<65>yy=y;
            for(intt i=lind-1;i>=0;i--){
                if(yy[i]==1&&xx[i]==0&&(1LL<<i)<=c){ 
                    x^=(1LL<<i); 
                    y^=(1LL<<i); 
                    c-=(1LL<<i); 
                    dif=min(dif,abs(x-y));
                }
            }
        }
        if(n>=m){
            for(intt i=lind-1;i>=0;i--){
                if(kk[i]!=k[i]&&k[i]==1&&(1LL<<i)<=r){ 
                    n^=(1LL<<i);
                    m^=(1LL<<i); 
                    r-=(1LL<<i); 
                    dif=min(dif,abs(n-m));
                }
            }
        }
        else {
            for(intt i=lind-1;i>=0;i--){
                if(kk[i]!=k[i]&&kk[i]==1&&(1LL<<i)<=r){ 
                    n^=(1LL<<i); 
                    m^=(1LL<<i); 
                    r-=(1LL<<i); 
                    dif=min(dif,abs(n-m));
                }
            }
        }
        cout<<dif<<endl;
    }
}
