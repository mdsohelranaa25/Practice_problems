#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=1,b=n*3;
        int d=(n+1)/2;
        cout<<d<<endl;
        for(int i=0;i<d;i++){
            cout<<a<<" "<<b<<" ";
            a+=3;
            b-=3;
        }
        cout<<endl;
    }
}