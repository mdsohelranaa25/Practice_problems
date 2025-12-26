/*
  //! In The Name Of Allah




*/
#include <bits/stdc++.h>
using namespace std;
#define tt  \
  int t;    \
  cin >> t; \
  while (t--)

#define itr(i, a) for (int i = 0; i < a; i++)
#define ittr(i, bg, a) for (int i = bg; i < a; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll int
#define endd cout << endl
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a, x) a.push_back(x)
#define MOD 1000000007
#define f first
#define sc second
#define endl '\n'
const int N = 1e5 + 1;

string s;
ll tr[4*N][28];
ll a[30]={0};
void init(ll ind,ll b,ll e){
    if(b==e) {
        tr[ind][s[b]-'a']++;
        return;
    }
    int mid=(b+e)/2;
    init(ind*2,b,mid);
    init(ind*2+1,mid+1,e);
    for(int k=0;k<26;k++){
        tr[ind][k]=tr[ind*2][k]+tr[ind*2+1][k];
    }
}
void update(ll ind,ll  b,ll e,ll i,ll val){
    if(b>i||e<i) return;
    if(b==i&&e==i) {
      tr[ind][s[i]-'a']--;
      tr[ind][val]++;
      s[i]=char(val+'a');
      return;
    }
    int mid=(b+e)/2;
    update(ind*2,b,mid,i,val);
    update(ind*2+1,mid+1,e,i,val);
    for(int k=0;k<26;k++){
        tr[ind][k]=tr[ind*2][k]+tr[ind*2+1][k];
    }
    

}
void ask(ll ind,ll b,ll e,ll i,ll j){
    if(i>e || b>j) return;

    if(i<=b && e<=j){
        for(int k=0;k<26;k++){
            if(tr[ind][k] > 0) a[k] = 1;
        }
        return;
    }
    int mid=(b+e)/2;
ask(ind*2,b,mid,i,j);
   ask(ind*2+1,mid+1,e,i,j);
    
}

void solve()
{


   cin>>s;
   int n;
   n=s.size();
  
   ll q;
   cin>>q;
   init(1,0,n-1);
    while(q--){
       ll ty;
       cin>>ty;

        if(ty==1){
            ll x;
            
            char change;
            cin>>x>>change;
            x--;
            update(1,0,n-1,x,ll(change-'a'));

        }
        else{
            ll x,y;
            cin>>x>>y;
            x--;
            y--;
              for(int k=0;k<30;k++) a[k] = 0;
            ask(1,0,n-1,x,y);
            int sum = 0;
            //cout<<s<<endl;
            for(int i=0;i<29;i++){
                sum += a[i];
            }
            cout<<sum<<endl;
            
        }
    }

}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
 // tt
  {
    solve();
  }
}
