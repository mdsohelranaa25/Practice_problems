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
#define MOD 1000000007
#define f first
#define sc second

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    tt {
        ll n;
        cin >> n;
        vector<string> s, ss;
        
        itr(i, n) {
            string st;
            cin >> st;
            s.push_back(st);
            reverse(st.begin(), st.end());
            ss.push_back(st);
        }

        sort(s.begin(), s.end());
        sort(ss.begin(), ss.end());

        ll sum = 0;
        for (ll j = 0; j < n;) {
            ll ans=0;
           
            string st = s[j];
            ll cnt=0;
            ll sng=0;
            while(j<n&&st[0]==s[j][0]){
                
                ll sm=0;
                string stt=s[j];
                while(j<n&&stt[1]==s[j][1]){
                    sm++;
                    j++;
                }

                if(sm>1) { ans+=cnt*sm; cnt++;
                    stt=s[j];
                }
                else if(sm==1){
                    sng++;
           
                }
     
            }
            ans+=(sng*(sng-1)/2);
            
            ans+=sng*cnt;
            sum+=ans;
            ans=0;

        }

          s=ss; 

          for (ll j = 0; j < n;) {
            ll ans=0;
            
            string st = s[j];
            ll cnt=0;
            ll sng=0;
            while(j<n&&st[0]==s[j][0]){
                
                ll sm=0;
                string stt=s[j];
                while(j<n&&stt[1]==s[j][1]){
                    sm++;
                    j++;
                }

                if(sm>1) { ans+=cnt*sm; cnt++;
                    stt=s[j];
                }
                else if(sm==1){
                    sng++;
                }
            
            }
            ans+=(sng*(sng-1)/2);
            ans+=sng*cnt;
            sum+=ans;
    
        }
        
           cout<<sum<<endl;

}
}