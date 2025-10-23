#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    vector<char>ch;
    vector<char>v={s.begin(),s.end()};
    string cc="WUB";
    vector<char>vv={cc.begin(),cc.end()};
    int i=0;
    int j;
    while(i<v.size()){
        
            if(vv[0]==v[i]&&vv[1]==v[i+1]&&vv[2]==v[i+2]){
               
                if(!ch.empty()&&ch.back()!=' '){
                    ch.push_back(' ');
                }
                i=i+3;
              
                j=0;
            }
            else {
                ch.push_back(v[i]);
                i++;
                
            }


        }
    
if(!ch.empty()&&*ch.begin()==' '){
    ch.erase(ch.begin());
}
if(!ch.empty()&&ch.back()==' '){
    ch.pop_back();
}
    for(auto c:ch){
        cout<<c;
    }
}