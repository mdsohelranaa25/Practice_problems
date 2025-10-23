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

        vector<vector<ll>> g(n+5);
        vector<ll> indeg(n+5,0);

        itr(i,n-1){
            ll a,b,x,y;
            cin>>a>>b>>x>>y;
            if(x>=y) {
                indeg[a]++;
                g[b].push_back(a);
            }
            else{
                indeg[b]++;
                g[a].push_back(b);
            }
        }

        vc(perm,n+1);
        ll now=1;
        queue<int> q;
        for(int i=1;i<=n;i++){
            if(indeg[i]==0) q.push(i);
        }

        while(!q.empty()){
            int u=q.front();
            q.pop();
            perm[u]=now;
            now++;

            for(auto v:g[u]){
                indeg[v]--;
                if(indeg[v]==0){
                    q.push(v);
                }
            }
        }

        for(int i=1;i<=n;i++) cout<<perm[i]<<' ';
        endd;
    }
}
