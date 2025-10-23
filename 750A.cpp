#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int count=0;
    int c=240-b;
    for(int i=1;i<=a;i++){
        int d=5*i;
        if(d<=c){
            count++;
            c=c-d;
        }
    }
    cout<<count;
}