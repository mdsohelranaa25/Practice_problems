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
            for(int j=i*i;j<=N;j+=i){
                isprime[j]=false;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    tt{
        ll n;
        cin>>n;
       
        ll mx=0;
        set<ll>st;
        vector<vector<ll>>v(n);
        itr(j,n){
            st.insert(j);
            ll m;
            cin>>m;
            mx=max(mx,m);
            itr(i,m){
                ll aa;
                cin>>aa;
                v[j].push_back(aa);
            }
        }
         vector<ll>pre(mx+5, INT_MAX);
        set<ll>stt;
        vector<ll>ans(mx);
       ll i=0;
       while(i<mx){

            pre[i]=INT_MAX;
           // cerr<<endl;
           // cerr<<i<<' ';
           bool sesh=0;
            for(auto x:st){
                //cerr<<v[x].size()<<' '<<x<<endl;
              //  if(v[x].size()>i) cerr<<v[x][i]<<endl;
             
                if(v[x].size()>i){

                    pre[i]=min(pre[i],v[x][i]);
                }
              //  cerr<<pre[i]<<endl;
            }
           
            ans[i]=pre[i];
            stt.clear();
          
            for(auto x:st){
                if(v[x].size()>i && v[x][i]==pre[i]){
                     if(v[x].size()==i+1) sesh=1;
                    stt.insert(x);
                }
            }
            st=stt;
           
           // cerr<<"i "<<i<<' '<<sesh<<' '<<pre[i]<<endl;
        if(sesh){
            for(int aa=0;aa<n;aa++) {if(v[aa].size()>i+1) st.insert(aa);
               // cerr<<aa<<' '<<v[aa].size()<<"sj"<<endl;

            }
        }
       // cerr<<i<<' '<<st.size()<<' '<<"hg"<<endl;
         i++;
       

    }
        for(auto x:ans) cout<<x<<' ';
        endd;
    }
}
