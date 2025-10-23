#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
    ll n,m;
    cin>>n>>m;
    string s,ss;
    cin>>s>>ss;
    vector<vector<ll>>pre1(n+1,vector<ll>(26,0));
    vector<vector<ll>>pre2(n+1,vector<ll>(26,0));
    for(int i=1;i<=n;i++){
        char c=s[i-1];
        pre1[i][c-'a']++;
        c=ss[i-1];
        pre2[i][c-'a']++;
        for(int j=0;j<26;j++){
            pre1[i][j]+=pre1[i-1][j];
            pre2[i][j]+=pre2[i-1][j];

        }
    }
    ll sum=0;
    while(m--){
        sum=0;
        ll l,r;
        cin>>l>>r;
        for(int i=0;i<26;i++){
            ll d1=pre1[r][i]-pre1[l-1][i];
            ll d2=pre2[r][i]-pre2[l-1][i];
            sum+=abs(d1-d2);
           // cout<<d1<<' '<<d2<<' '<<i<<endl;
        }
        cout<<sum/2<<endl;
    }
   

}
}