/*
    //! In The Name Of Allah
*/

#include <bits/stdc++.h>
using namespace std;
#define tt int t; cin >> t; while (t--)
#define itr(i, a) for (int i = 1; i <=a; i++)
#define ittr(i, bg, a) for (int i = bg; i < a; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define endd cout << endl
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a, x) a.push_back(x)
#define MOD 1000000007
#define f first
#define sc second
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // sieve();
    // divis();
    tt {
        ll n;
        cin >> n;
        vc(v, n + 1);
        for (int i = 1; i <= n; i++) cin >> v[i];

      bool f=0;
      ll m=v[2]-v[1];
      itr(i,n-1){
        if(v[i+1]-v[i]!=m){
            f=1;
            break;
        }
      }
     // cerr<<f<<" 1"<<endl;
      if(f) no;
    //  else {
    //        // if (v[1] > v[2]) swap(v[1], v[2]);
    //         ll numerator = n * v[1] - v[n];
    //         if (numerator % (n*n-1) != 0) {
    //             no;
    //         } else {
    //             ll y = numerator / (n*n-1);
    //             ll x = v[1] - n * y;
    //             if (x >= 0 && y >= 0) yes;
    //             else no;
    //         }
    //     }
    else {
        if(m<0){
            m=abs(m);
            reverse(v.begin()+1,v.end());
        }
      
            if(v[1]<m||(v[1]-m)%(n+1)) no;
            else yes;
        }
    
   
                
            }
            }
        
    


    
