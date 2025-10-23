#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
  vector<int>v;
  int count=0;
  for(int i=0;i<n;i++){
cin>>m;
v.push_back(m);

  }
  sort(v.begin(),v.end(),greater<int>());
int i=0,j=v.size()-1;
while(i<=j){
    if(v[i]==4)
    {
        count++;
        i++;
        
    }
    else if(v[i]+v[j]<=4){
        if((4-(v[i]+v[j]))>=(v[i+1]+v[j-1])){
            count++;
            i=i+2;
            j=j-2;

        }
        else if((4-(v[i]+v[j]))>=v[i+1]){
            count++;
            i=i+2;

        }
        else if((4-(v[i]+v[j]))>=v[j-1]){
            count++;
            j=j-2;

        }
        else 
        count++;
        i++;
        j--;
    }
    else {
        count++;
        i++;
    }

    }


cout<<count;

}