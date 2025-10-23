#include<bits/stdc++.h>
using namespace std;
#define tt int t;cin>>t;while(t--)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long
#define end cout<<endl

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    tt{
        int n, m;
        cin >> n >> m;
        
        vector<pair<int, int>> v;
        vector<vector<int>> arr(n, vector<int>(m));

        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = 0; j < m; j++){
                cin >> arr[i][j];
                sum += arr[i][j];
            }
            v.push_back({sum, i});
        }

        sort(v.rbegin(), v.rend());

        ll ss = 0, total = 0;

        for(auto p : v){
            int a = p.second;
            for(int i = 0; i < m; i++){
                ss += arr[a][i]; 
                total += ss;
            }
        }

        cout << total << endl;
    }
}