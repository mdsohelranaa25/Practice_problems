#include<bits/stdc++.h>
using namespace std;
#define in long long
int main(){
    int t;
    cin>>t;
    while(t--){
        in n,a,b,c;
        cin>>n>>a>>b>>c;
        in total=a+b+c;
        in ans=0;
        int aa=(n/total);
        ans+=aa*3;
        n-=aa*total;
        if(n>(a+b)) ans+=3;
        else if(n>a) ans+=2;
        else if(n>0) ans+=1;
        cout<<ans<<endl;


    }
}