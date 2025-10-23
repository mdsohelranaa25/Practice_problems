#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define itr(i,a) for(int i=0;i<a;i++)
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> v;
    itr(i, n){
        ll a, b;
        cin >> a;
        if(a!=2) cin>>b;
        if(a == 0){
            v.push_back(b);
        }
        else if(a == 1){
            if(b < v.size()) cout << v[b] << endl;
        }
        else if(a == 2){
            if(!v.empty()) v.pop_back();
        }
    }
}
