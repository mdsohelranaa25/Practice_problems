#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
 int count=0;
for(int i=n-1;i>=0;i--){

    if(s[i]!=0){
        count++;
        s[i]=s[i]-1;
    }
}

}