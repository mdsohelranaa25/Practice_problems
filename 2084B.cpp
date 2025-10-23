/*
        //! In The Name Of Allah
            
            ~Sohel~
        
        
*/                                                                                                                                                  
#include<bits/stdc++.h>
using namespace std;
#define tt int t;cin>>t;while(t--)
#define itr(i,a) for(int i=0;i<a;i++)
#define ittr(i,bg,a) for(int i=bg;i<a;i++)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ll long long
#define vc(v, n) vector<ll> v(n)  
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define MOD 1000000007
#define f first
#define sc second

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt {
        ll n;
        cin >> n;
        vc(v,n);
        ll mn = LLONG_MAX;

        itr(i,n) {
            cin >> v[i];
            mn = min(mn, v[i]);
        }

        ll cnt = count(v.begin(), v.end(), mn);

        if(cnt == n) {
            yes;
        } 
        else if(cnt >= 2) {
            yes;
        } 
        else {
            vector<ll> b;
            itr(i,n){
                if(v[i] % mn == 0 && v[i] != mn) 
                    b.push_back(v[i]);
            }

            if(b.empty()) {
                no;
            } 
            else {
                ll gc = 0;
                itr(i,b.size()) {
                    ll k = b[i] / mn;
                    gc = __gcd(gc, k);
                }
                if(gc == 1) yes;
                else no;
            }
        }
    }
}