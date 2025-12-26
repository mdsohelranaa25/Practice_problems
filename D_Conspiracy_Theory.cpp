    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    #define all(x) (x).begin(), (x).end()
    #define rall(x) (x).rbegin(), (x).rend()
    #define out(x) for(auto& e:x)cout<<e<<' ';cout<<endl;
    #define in(x) for(auto& e:x)cin>>e;
    #define yes cout<<"YES\n"
    #define no cout<<"NO\n"
    template<typename T>
    using min_heap = priority_queue<T, vector<T>, greater<T>>;
    const int N=2000005;
    vector<int> spf(N + 1);
    vector<vector<int>> primeDivs(N + 1);
    #define ll long long
    vector<ll> primes;
     
     
    void buildPrimeDivisors() {
        for (int i = 0; i <= N; i++) spf[i] = 0;
        for (int p = 2; p <= N; p++) {
            if (spf[p] == 0) {
                spf[p] = p;
               // primes.push_back(p);
                for (int j = p; j <= N; j += p) {
                    if (spf[j] == 0) spf[j] = p;
                    primeDivs[j].push_back(p);
                }
            }
        }
    }
     
     
    int main(){
     
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
       buildPrimeDivisors();
     
       ll n;
       cin>>n;
      // cout<<"g "<<endl;
       vector<int>v(n);
       vector<ll>vv(n);
       for(int i=0;i<n;i++) {cin>>v[i];
        vv[i]=v[i];
       }
       unordered_map<ll,ll>mp;
       for(int i=0;i<n;i++) mp[v[i]]=i+1;
       
       set<ll>st;
       for(auto x:v) st.insert(x);
       v.clear();
       for(auto x:st ) v.push_back(x);
       n=v.size();
       vector<ll>final(n+5);
    vector<ll>dp(2e6+5,0);
     
       ll cnt=0;
     ll ans=0;
     vector<vector<ll>>save(2e6+5);
    // sort(v.rbegin(),v.rend());
     //cout<<"g "<<endl;
     for(int i=0;i<n;i++){
       // cerr<<i<<' '<<v[i]<<endl<<endl;
        ll nowmx=0;
        for(auto x:primeDivs[v[i]]) {
          //  cerr<<x<<' '<<dp[x]<<' ';
           
            nowmx=max(nowmx,dp[x]);
           
            
          //  cerr<<dp[x]<<' '<<ans<<endl;
        }
        ll cur=nowmx+1;
        ans=max(ans,cur);
        save[cur].push_back(v[i]);
          for(auto x:primeDivs[v[i]]) {
         
            dp[x]=cur;
             //  cerr<<x<<' '<<dp[x]<<endl;
          }
     
       
     }
     
     cout<<ans<<endl;
     final[ans]=save[ans][0];
    // cerr<<final[ans]<<' '<<save[ans][0]<<endl;
    for(int i=ans-1;i>=1;i--){
        ll age=final[i+1];
       // cerr<<i<< ' '<<age<<endl;
        for(auto x:save[i]){
          //  cerr<<x<<' ';
            if(__gcd(x,age)>1){
                final[i]=x;
                break;
            }
     
        }
       // cerr<<endl;
    }
    for(int i=1;i<=ans;i++) cout<<mp[final[i]]<<' ';
     
     
      
    }