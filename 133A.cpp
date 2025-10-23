#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0;
    for(char ch:s){
        if(ch=='H'||ch=='Q'||ch=='9')
        c++;
    }
    if(c>=1)
    cout<<"YES";
    else cout<<"NO";
}