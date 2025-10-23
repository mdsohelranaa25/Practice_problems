#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    int count=0;
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            if(i*i+j==a&&i+j*j==b){
                count++;
            }
        }
    }
    cout<<count;
}