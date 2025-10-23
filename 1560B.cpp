#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(b<a){
            int temp=a;
            a=b;
            b=temp;
        }
        int l=b;
        int minus=a-1;
        b-=minus;
        int max=b*2-2;
        if(a+1==l) cout<<"-1"<<endl;
        else if(l>max||c>max) cout<<-1<<endl;
        else if(c==max/2) cout<<max<<endl;
        else {
            if(c>max/2){
                int maxi=max;
                int dif=c-max/2;
                max=1+dif-1;
                int ll=maxi/2-max;
                int mm=maxi-c;
                if(ll==mm) cout<<max<<endl;
                else cout<<-1<<endl;
            }
            else {
                int dif=max/2-c;
                int maxi=max;
                max-=dif;
              int ll=abs(maxi/2-max);
               int mm=c;
                if(ll==mm) cout<<max<<endl;
                else cout<<-1<<endl;
            }
        }
    }
}