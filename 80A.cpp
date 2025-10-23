#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[16]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    for(int i=0;i<15;i++){
        if(arr[i]==n){
            if(arr[i+1]!=m) cout<<"NO";
            else cout<<"YES";
        }

    }
}