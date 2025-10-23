#include<bits/stdc++.h>
using namespace std ;
#define in long long
int main(){
    in t;
    cin>>t;
    while(t--){
        in n,l,r;
        cin>>n>>l>>r;
       vector<in>v(n);
       priority_queue<in>pq,pp;
       for(in i=0;i<n;i++){
        cin>>v[i];
        if(i>=l-1&&i<r) {pq.push(v[i]); pp.push(v[i]);

       }
       }
       for(in i=0;i<l-1;i++){
        if(v[i]<pq.top()) {
            pq.pop();
            pq.push(v[i]);
        }
       }
       for(in i=r;i<n;i++){
        if(v[i]<pp.top()) {
            pp.pop();
            pp.push(v[i]);
        }
       }
       in tot=0,tott=0;
     while(!pq.empty()){
        tot+=pq.top();
        pq.pop();
     }
     while(!pp.empty()){
        tott+=pp.top();
        pp.pop();
     }
     tot=min(tot,tott);
     cout<<tot<<endl;
    }
}
