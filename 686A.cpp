#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    long long sum=b;
    int back=0;
    for(int i=0;i<a;i++){
        string s;
        cin>>s;
        if(s[0]=='+'){
            int d;
            cin>>d;
            sum+=d;
        }
        else {
             int d;
             cin>>d;
             if(d<=sum) sum-=d;
             else if(d>sum) back++;

        }
    }
    cout<<sum<<" "<<back;
}