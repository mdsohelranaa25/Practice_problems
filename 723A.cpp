#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    int n=0;
    int m;
  for(int i=0;i<3;i++){
    cin>>arr[i];
  }
    vector<int>v(arr,arr+3);
sort(v.begin(),v.end(),greater<int>());

int count=0;
count=count+(v[0]-v[1])+(v[1]-v[2]);
cout<<count;
    
}