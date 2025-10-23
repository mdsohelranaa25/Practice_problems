#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    string s ;
    cin>>s;
    bool flag=true;
    int xs=0,ys=0;
    int x=0,y=0;
    for(int j=0;j<100;j++){
        int i=0;
    for(i=0;i<n;i++){
        if(s[i]=='N')ys++;
        else if(s[i]=='S') ys--;
        else if(s[i]=='W') xs--;
        else if(s[i]=='E') xs++;
    
    if(xs==a&&ys==b) {
        cout<<"YES"<<endl;
        flag=false;
        
    }
    if(flag==false) break;
    }
    if(flag==false) break;
    
}
if(flag)
 cout<<"NO"<<endl;
}
}