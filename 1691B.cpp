
   /*


 	   *********     .**.     |       |  |---------|  |
	 /              /    \    |       |  |            |
        *              /      \   |       |  |            |
         *            |        |  |       |  |	          |
	   *  *       |        |  |-------|  |------|	  |    		       *
                *     |        |  |       |  |            |
	         *     \      /   |	  |  |            |
		 *      \    /    |       |  |            |
	        /        '**'     |       |  |---------|  |___________|
     **********


				*/
      #include <bits/stdc++.h>
      using namespace std;
      #define tt int t; cin >> t; while (t--)
      #define yes cout << "YES" << endl
      #define no cout << "NO" << endl
      #define ll long long
      #define endd cout << endl
      #define vc(v, n) vector<ll> v(n)
      #define srt(v) sort(v.begin(), v.end())
      #define f first
      #define sc second
      
      int main() {
          ios::sync_with_stdio(false);
          cin.tie(nullptr);
      
          tt {
              ll n;
              cin >> n;
              vc(vv, n);
              set<ll> st;
              unordered_map<ll, vector<ll>> v;
      
              for (int i = 0; i < n; i++) {
                  ll x;
                  cin >> x;
                  vv[i] = x;
                  st.insert(x);
                  v[x].push_back(i);
              }
      
              bool f = 1;
              for (auto &it : st) {
                  if (v[it].size() == 1) {
                      cout << -1 << endl;
                      f = 0;
                      break;
                  }
              }
      
              if (f) {
                  for (int i = 0; i < n; i++) {
                      ll x = vv[i];
                      if (v[x].size() > 1) {
                          cout << v[x][1] + 1 << " ";
                          v[x].erase(v[x].begin() + 1);
                      } else {
                          cout << v[x][0] + 1 << " ";
                      }
                  }
                  cout << endl;
              }
          }
      }
      