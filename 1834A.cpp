#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        sum=abs(sum);
        sort(v.begin(),v.end());
        int minus=0;
        for(int i=0;i<n;i++){
            if(v[i]==-1) 
            minus++;
        }
        int plus=n-minus;
        if(plus>=minus){
            if(minus%2==0) cout<<0<<endl;
            else cout<<1<<endl;
        }
        else {
            int p=plus%2;
            int s;
            
            s=sum%2;

            if(p==0){
                if(s==0){
                     int sd;
                    sd=(sum/2)%2;
                    if(sd==0) cout<<sum/2<<endl;
                    else cout<<sum/2+1<<endl;
                }
                else {
                    int sd;
                     sd=(sum/2)%2;
                    if(sd==0) cout<<sum/2+1<<endl;
                    else cout<<(sum/2+2)<<endl;
                }

            }
            else {
                if(s==0){
                     int sd;
                   
                     sd=(sum/2)%2;
                    if(sd==1) cout<<sum/2<<endl;
                    else cout<<sum/2+1<<endl;
                }
                else{
                    int sd;
                    
                     sd=(sum/2)%2;
                     
                    if(sd==1) cout<<sum/2+1<<endl;
                    else cout<<sum/2+2<<endl;

                }
            }
          }
 
    }
}