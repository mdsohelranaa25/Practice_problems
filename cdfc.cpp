#include<bits/stdc++.h>
using namespace std;
void f(string &s,string &s1,int i,int v);
int i;
int main()
{
    string s,s1,s2,s3;
    int value=0;
    cin>>s>>s1;
    int v;
    v=s.length();
     if(s.length()==s1.length()){
    

    for(int i=0;i<s.length();i++){
        s[i]=toupper(s[i]);
    }
for(int i=0;i<s1.length();i++){
        s1[i]=toupper(s1[i]);
    }
   
    f(s,s1,0,v);

     

     }
}
void f(string &s,string &s1,int i,int v){

if(s[i]>s1[i]){
cout<<"1";
return ;
}
else  if(s[i]<s1[i]){
    cout<<"-1";
    
    return ;
}
else if(i==v){
    cout<<"equal";
}
else f(s,s1,i+1,v);

}