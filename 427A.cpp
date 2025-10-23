#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0,add=0;
    int crime=0;

    for(int i=0;i<n;i++){
        if(arr[i]==-1) {
            crime++;
            if(add>=crime){
                crime--;
                add--;
            }
            else { count++;
            crime--;
            }
        }
        else if(arr[i]>=1){
            add=add+arr[i];
        }
       
    }
 cout<<count;

}