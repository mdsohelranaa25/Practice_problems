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
#define MOD 998244353
#define f first
#define sc second
#define endl '\n'
const int N=998244353;

ll exp(ll bs,ll pw){
    ll res=1;
    bs%=MOD;
    while(pw>0){
        if(pw%2){
            pw/=2;
            res*=bs;
            res%=MOD;
            bs*=bs;
            bs%=MOD;
        }
        else{
            pw/=2;
            bs*=bs;
            bs%=MOD;
        }
    }
    return res%MOD;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt{
        ll n;
        cin>>n;
        vc(v,n);
        vc(vv,n);
        itr(i,n) {
            cin>>v[i];
        }
        itr(i,n){
            cin>>vv[i];
        }

        ll first[n+5], sec[n+5];
        ll mx1=-1, mx2=-1, ind1=-1, ind2=-1;

        for(int i=0;i<n;i++){
            if(v[i]>mx1){
                mx1=v[i];
                ind1=i;
            }
            first[i]=ind1;

            if(vv[i]>mx2){
                mx2=vv[i];
                ind2=i;
            }
            sec[i]=ind2;

            if(mx1 > mx2){
                cout << (exp(2, mx1) + exp(2, vv[i - first[i]])) % MOD << " ";
            }
            else if(mx2 > mx1){
                cout << (exp(2, v[i - sec[i]]) + exp(2, mx2)) % MOD << " ";
            }
            else{
                if(v[i - sec[i]] < vv[i - first[i]])
                    cout << (exp(2, mx1) + exp(2, vv[i - first[i]])) % MOD << " ";
                else
                    cout << (exp(2, v[i - sec[i]]) + exp(2, mx2)) % MOD << " ";
            }
        }

        endd;
    }
}
