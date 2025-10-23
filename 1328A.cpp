#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   
    int arr[n];
    for(int i=0;i<n;i++){
        int m,o;
       cin>>m>>o;
     if(m%o==0) {
        arr[i]=0;
    }
    else  if(m%o!=0){

       int mn=m/o+1;
     
       arr[i]=(mn*o)-m;
    
    }
    
    }
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
}