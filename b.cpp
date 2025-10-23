#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        pq.push(x);
    }
    long long sm=0;
    while(pq.size()>1){
    int a=pq.top();
    sm+=a;
    pq.pop();
    int b=pq.top();
    pq.pop();
    sm+=b;
    pq.push(a+b);
    }
    cout<<sm<<endl;
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
