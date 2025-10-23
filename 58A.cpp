#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1;
    s2="hello";
vector<char>v={s1.begin(),s1.end()};
vector<char>v1={s2.begin(),s2.end()};
int i,j;
i=0;
j=0;
while(i<v.size()&&j<v1.size()){

    if(v1[j]!=v[i]){
        v.erase(v.begin()+i);
        
    }
    else {
        i++;
        j++;
    }
}
for(int m=0;m<v1.size();m++){
    if(v1[m]!=v[m]){
    cout<<"NO";
    
    return 0;
    }
}
cout<<"YES";

}