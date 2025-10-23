#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        set<char>ch={s.begin(),s.end()};
        if(ch.size()==1) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            for(int i=0;i<s.length()-1;i++){
                if(s[i]!=s[i+1]){
                    char c=s[i];
            s[i]=s[i+1];
            s[i+1]=c;
              for(auto h:s){
                cout<<h;
            }
            cout<<endl;
            break;
                }
            }
            
          
            
        }
        
    }
}