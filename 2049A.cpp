#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
         bool flag=true;
        cin>>n;
        int arr[n];  
        int count=0;  
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0) count++;
        }    
        //cout<<"count="<<count<<endl;
        if(count==0) cout<<1<<endl;
        else if(count==n) cout<<0<<endl;
        else  if(count==1){
            if(arr[0]==0||arr[n-1]==0) cout<<1<<endl;
            else cout<<2<<endl;
        }
        
        else if(count>=2){
               
                 if(arr[n-1]==0||arr[0]==0){
                    int l=0,j=1;
                   int  llm=count;
                   while(llm>0){
                    if(arr[l]!=0&&arr[n-j]!=0) {
                        flag=false; break;
                    }
                    else if(arr[l]==0){
                        llm--;
                        l++;
                    }
                    else if(arr[n-j]==0){
                        llm--;
                        j++;
                    }
                   }
                    if(flag) cout<<1<<endl;
                else cout<<2<<endl;

                }
                else cout<<2<<endl;
                

                }
                 
    }


        }
            
        
    
