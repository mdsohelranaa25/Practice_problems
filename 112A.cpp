#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else
        { if(count<6){

        
            count =0;
        }
    }
    }
    if(count>=6){
        cout<<"YES";

    }
    else cout<<"NO";

}