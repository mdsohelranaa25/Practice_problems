#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
        int wheel;
        cin>>wheel;
        int row[wheel];
        for(int i=0;i<wheel;i++){
            cin>>row[i];
        }
      
            for(int i=0;i<wheel;i++){
                int n;
        cin>>n;
        string s;
        cin>>s;
        for(int ii=0;ii<n;ii++){
            if(s[ii]=='D'){
                if(row[i]==9) row[i]=0;
                else row[i]++;
            }
            else if(s[ii]=='U'){
                if(row[i]==0)row[i]=9;
                else row[i]--;
            }

        }
            }
            for(int i=0;i<wheel;i++){
                cout<<row[i]<<" ";
            }
            cout<<endl;
        }
     }
