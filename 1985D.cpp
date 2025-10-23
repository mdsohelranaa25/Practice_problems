#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char arr[n][m];
        int totn=0;
        int lown=0;
        int endn=0;
        int lowm=0;
        bool flag=false;
        for(int i=0;i<n;i++){
             for(int j=0;j<m;j++){
                cin>>arr[i][j];
                if(arr[i][j]=='#'){
                    if(flag==false){
                        flag=true;
                        lown=i+1;
                        lowm=j+1;
                        endn=i+1;
                    }
                    endn=i+1;

                }

             }
        }
        totn=endn-lown+1;
        int y=lowm;
        int x=lown+totn/2;
        cout<<x<<" "<<y<<endl;
    }
}