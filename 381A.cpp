#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int mm;
        cin>>mm;
        v.push_back(mm);
    }
    int a=0,b=0;
   int i=0,j=n-1;
   while(i<=j){
    if(v[i]>v[j]){
        a+=v[i];
        i++;
    }
    else {
        a+=v[j];
        j--;
    }
    if(i<=j){
    if(v[i]>v[j]){
        b+=v[i];
        i++;
    }
     else {
        b+=v[j];
        j--;
     }
    
   }
   }
    cout<<a<<" "<<b;
}