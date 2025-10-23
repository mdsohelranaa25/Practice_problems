#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    int arr[n][m];
    set<int>s;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            mp[arr[i][j]]=1;
            s.insert(arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a=arr[i][j];
            bool is_unique = true;
            
                            if (i > 0 && arr[i][j] == arr[i-1][j]) is_unique = false;
                            if (i < n-1 && arr[i][j] == arr[i+1][j]) is_unique = false;
                            if (j > 0 && arr[i][j] == arr[i][j-1]) is_unique = false;
                            if (j < m-1 && arr[i][j] == arr[i][j+1]) is_unique = false;
            
                            if (!is_unique) {
                                mp[arr[i][j]]=2;
                            }
                              
                            
        }
    }
    int tot=0;
    bool f=0;
    for(auto it:s){
        tot+=mp[it];
        if(mp[it]==2) f=1;

    }
    if(f) tot-=2;
    else tot-=1;
    cout<<tot<<endl;
    
}
    
}
