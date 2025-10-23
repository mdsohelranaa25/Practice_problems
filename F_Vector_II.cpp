#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endd cout<<endl;
#define itr(i,a) for(int i=0;i<a;i++)
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,q;
    cin >> n>>q;
    vector<vector<ll>>v(n);
    itr(i,q){
        ll a, b,c;
        cin >> a;
        if(a!=0) cin>>b;
        if(a==0) cin>>b>>c;
        if(a == 0){
            v[b].push_back(c);
        }
        else if(a == 1){
            itr(j,v[b].size()){ if(j!=v[b].size()-1)cout<<v[b][j]<<' ';
            else cout<<v[b][j];
            }
            endd;
        }
        else if(a == 2){
            if(!v[b].empty()) v[b].clear();
        }
    }
}
