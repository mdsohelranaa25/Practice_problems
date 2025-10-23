#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    int x=0;
    for(int i=0;i<n;i++)
    {
        
        if(s[i]!='x') x=0;
        else{
            x++;
            if(x>=3) count++;
        }
    }
    cout<<count;
}