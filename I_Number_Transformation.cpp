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

const int N=1e5+5;
vector<int> spf(N,0), primes;
vector<vector<int>> factors(N);

void sp(){
    spf[1] = 1;
    for (int i = 2; i < N; i++) {
        if (!spf[i]) { 
            spf[i] = i; 
            primes.push_back(i); 
        }
        for (int p : primes) {
            long long v = 1LL * p * i;
            if (v >= N || p > spf[i]) break;
            spf[(int)v] = p;
        }
    }
}

void precalc(){
    for(int i=2;i<N;i++){
        int x=i;
        while(x>1){
            int p=spf[x];
            factors[i].push_back(p);
            while(x%p==0) x/=p;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sp();
    precalc();

    tt{
        ll a,b;
        cin>>a>>b;
        ll dif=b-a;
        
        for(auto x:factors[a]){

        }

    }
}
