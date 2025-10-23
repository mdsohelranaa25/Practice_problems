#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0;
        int count=0;
        while(i<=n-3){

            if(s[i]=='m'){
                if(s[i+1]=='a'&&s[i+2]=='p') {
                    count++;
                    i+=3;
                }
                else i++;
            }
            else if(s[i]=='p'){
                if(s[i+1]=='i'&&s[i+2]=='e') {
                    count++;
                    i+=3;
                }
                else i++;
            }
            else i++;

        }
        cout<<count<<endl;
    }
}