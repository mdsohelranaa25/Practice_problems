#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;

        cin>>n>>k;
        string s;
        cin>>s;
        int cal=0,count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                count++;
                i+=k-1;
            }
        }
        cout<<count<<endl;
    }
}