#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
  int n,k;
  cin>>n>>k>>s;
  int l=0,m=0,mm=0,dif;
  int count=0;
  for(int i=0;i<n;i++){
    if(s[i-1]==0&&s[i]==1) 
        count++;
        if(count==k-1&&s[i+1]==0) l=i+1;
        else if(count==k){
            if(s[i-1]==0)m=i-1;
            if(s[i+1]==0) mm=i;
        }

        
     
  }
  dif=mm-m;
  int nn=m-l+1;
  cout<<l<<endl<<m<<endl<<mm<<endl<<dif<<endl<<nn<<endl;

  for(int i=l;i<l+dif;i++){
    swap(s[i],s[i+nn]);

  }
  cout<<s;
}