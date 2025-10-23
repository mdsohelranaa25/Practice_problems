#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
       priority_queue<pair<int,int>>pq;
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
        pq.push({x,i});
        
       }
       vector<int>ans;
       while(!pq.empty()){
        int hel, ind;
tie(hel, ind) = pq.top();

        pq.pop();
        hel-=k;
        if(hel>0) pq.push({hel,ind});
        else ans.push_back(ind+1);

       }
       for(auto &it:ans) cout<<it<<" ";
       cout<<endl;
    }
}
