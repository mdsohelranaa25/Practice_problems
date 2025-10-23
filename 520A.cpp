#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int count=0;
if(n<26){
    cout<<"NO";
    return 0;
}
else {
string c;
cin>>c;
vector<char>v={c.begin(),c.end()};
for(int i=0;i<v.size();i++){
    if(v[i]>='A'&&v[i]<='Z');{
        v[i]=char(v[i]+32);
    }
}

vector<char>v1;
for (char ch = 'a'; ch <= 'z'; ch++) {
        v1.push_back(ch);
    }

for(int i=0;i<v1.size();){
    for(int j=0;j<n;j++){
        if(v1[i]==v[j]){
  v1.erase(v1.begin()+i);
  
}
else i++;
}
}
if(v1.size()==0)
cout<<"YES";
else 
cout<<"NO";
}
}
