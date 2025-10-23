#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m=0,count=0;
        int mmm=n;
        while(mmm){
            m++;
            mmm=mmm/10;

        }
        int j=10;
        int mm=n;
        vector<int>v;
        while(m--){
            if(mm%j!=0){
                int l=mm%j;
                v.push_back(l);
                mm=mm-l;
                j=j*10;
            } else {
                j=j*10;
            }
        }
        cout<<v.size()<<endl;
        for(auto ll:v){
            cout<<ll<<" ";
        }
        cout<<endl;
    }
}