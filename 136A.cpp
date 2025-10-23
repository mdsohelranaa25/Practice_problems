#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
vector<int>v;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int j=1;j<=n;j++){
    for(int i=0;i<n;i++){
        if(j==arr[i]){
            v.push_back(i+1);
            break;
        }
    }
}
for(auto c:v){
    cout<<c<<" ";
}

}