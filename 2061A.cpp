#include<bits/stdc++.h>
using namespace std;
int main(){19
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            if(m%2==0) even++;
            else odd++;
        }
        if(even==0) cout<<odd-1<<endl;
        else cout<<1+odd<<endl;
    }
}