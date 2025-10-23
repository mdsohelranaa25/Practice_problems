#include<bits/stdc++.h>
using namespace std;
bool flag=false;

void F(int ind,int n,int arr[],vector<int>&ds,int sum,int s){
    if(ind==n){
        if(s==sum&&flag==false){
            flag=true;
            for(auto it:ds)
            cout<<it<< " ";
            cout<<endl;
            
        }
        return;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    F(ind+1,n,arr,ds,sum,s);
    s-=arr[ind];
    ds.pop_back();
    F(ind+1,n,arr,ds,sum,s);

}
int main(){
int sum=2;
int arr[3]={1,2,1};
int n=3;
vector<int>ds;
F(0,n,arr,ds,sum,0);

}