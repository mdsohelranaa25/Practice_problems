#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int count=0; 
    int i=1;
    while(1){
        int m=n*i;
        if(m%10==k||m%10==0) {
            cout<<i;
            return 0;
        }
        else i++;
    }

}