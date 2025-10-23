#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1]={0};
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            arr[m]++;
        }
        bool flag=true;
        for (int i = 1; i <= n; ++i)
    {
        if (arr[i] % 2 == 1)
        {
            cout << "YES\n";
            flag=false;
            break;
        }
    }
    if(flag)cout << "NO\n";
}
    }
