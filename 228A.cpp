#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
 vector<int>v(arr,arr+n);
 for(int j=0;j<v.size();j++){
    for(int i=j+1;i<v.size();){
        if(v[j]==v[i]){
            count++;
            v.erase(v.begin()+i);
        }
        else i++;
    }
 }
 cout<<count;
}