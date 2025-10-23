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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    tt{
   ll n;
   cin>>n;
ll cur=1;
vector<ll>ans;
while(cur*10+1<=n){
    ll temp=n;
    cur*=10;
    if(temp%(cur+1)==0) ans.push_back(temp/(cur+1));


}
cout<<ans.size()<<endl;
srt(ans);
if(ans.size()){
for(auto x:ans) cout<<x<<' ';
endd;
}

    }
}
