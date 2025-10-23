
/*
    //! In The Name Of Allah
*/
#include <bits/stdc++.h>
using namespace std;
#define tt int t;cin>>t;while(t--)
#define itr(i,a) for(int i=0;i<a;i++)
#define ittr(i,bg,a) for(int i=bg;i<a;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long
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
ll ts=0;
    tt{
        ts++;
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vc(v,n);
        itr(i,n) cin>>v[i];

        vector<ll>wet;
        ll i=0,j=n-1;

        while(i<n && s[i]=='R') i++;
        while(j>=0 && s[j]=='R') j--;

       
        if(i > j){
            cout<<0<<endl;
            continue;
        }

        ll now=v[i];
        i++;

        while(i<=j){
            if(s[i]==s[i-1]){
                now=max(now,v[i]);
            } else {
                wet.push_back(now);
                now=v[i];
            }
            i++;
        }
        wet.push_back(now);

        ll lo=0, hi = *max_element(wet.begin(), wet.end());
        ll finalans=1e18;
for(auto x:wet){
    cerr<<x<<' ';

}
cerr<<endl;
        while(lo<=hi){
            ll mid=(lo+hi)/2;
            ll ans=mid;
            ll cnt=0;
            bool f=0;

            for(int i=0;i<wet.size();i+=2){
                if(i>0 && f==1 && wet[i-1]<=ans) continue;
                else if(i>0&&wet[i-1]>ans) f=0;
                if(wet[i]>ans){
                    // if(f==0){
                    //     cnt++;
                    //     f=1;
                    // }
                    // else if(i>0 && wet[i-1]>ans){
                    //     cnt++;
                    //     f=1;
                    // }
                    f=1;
                    cnt++;
                }
            }

            if(cnt<=k){
                finalans=ans;
                hi=mid-1;
            } else {
                lo=mid+1;
            }
        }

        cout<<finalans<<endl;
    }
}

