#include<bits/stdc++.h>
using namespace std;
int main(){
    string c;
    cin>>c;
    vector<char>s={c.begin(),c.end()};
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=char(s[i]+32);

        }
        
    }
    for(int i=0;i<s.size(); ){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'){
            s.erase(s.begin()+i);
           
        }
        else i++;
}
for(auto c:s){
    cout<<"."<<c;
}
}