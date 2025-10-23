#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       
        int mul=0,rem=0;
        mul=n/5;
        rem=n%5;
        for(int i=0;i<mul;i++){
            cout<<'a';
            
        }
        if(rem>0){
                cout<<'a';
                rem--;
            }
             for(int i=0;i<mul;i++){
            cout<<'e';
            
        }
        if(rem>0){
                cout<<'e';
                rem--;
            }
         for(int i=0;i<mul;i++){
            cout<<'i';
           

    } if(rem>0){
                cout<<'i';
                rem--;
            }
     for(int i=0;i<mul;i++){
            cout<<'o';
            
}if(rem>0){
                cout<<'o';
                rem--;
            }
 for(int i=0;i<mul;i++){
            cout<<'u';
            
 }if(rem>0){
                cout<<'u';
                rem--;
            }
            cout<<endl;

        }
    }


