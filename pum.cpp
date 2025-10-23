#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    map<string, int> s;
    vector<pair<string, string>> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        s[v[i].first]++;
        s[v[i].second]++;
    }

    bool flag = true;
    
    for(int i = 0; i < n; i++) {
        if (s[v[i].first] > 1 && s[v[i].second] > 1) {
            flag = false;
            break;
        }
    }

    if(flag) yes;
    else no;
}
