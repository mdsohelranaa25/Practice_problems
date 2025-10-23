#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    while(1){
        m++;
        int n=m;
        int a=n%10;
        n=n/10;
        int b=n%10;
        n=n/10;
        int c=n%10;
       int d=n/10;
       if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
        cout<<m;
        return 0;
       }
    
    }
}