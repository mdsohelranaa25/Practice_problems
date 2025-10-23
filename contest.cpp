#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            v.push_back(m);
        }
        sort(v.begin(),v.end(),greater<int>());

int count=0;
int need=0;

        for(int i=0;i<n;){
            count=count+v[i];
            if(count>=k){
                break;
            }
            else {
                need=k-count;
                if(need>=v[i+1])
                i++;
                else 
                
                break;
               
            }
        } cout<<need<<endl; 



    }
}

