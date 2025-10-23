#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,r;
    cin>>n>>r;
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        int ll=(m/2);
        r-=ll;
        count+=ll*2;
        sum+=m%2;

    }

    int rem=r*2-sum;
    if(sum>=rem) count+=rem;
    else count+=sum;
    cout<<count<<endl;
    }
}