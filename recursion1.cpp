#include<bits/stdc++.h>
using namespace std;

void swaap(int l,int m,int a[]){
if(l>=m/2)
{
    return;
}
swap(a[l],a[m-l-1]);
swaap(l+1,m,a);


}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
swaap(0,n,a);
for(int i=0;i<n;i++){
    cout<<a[i];
}


}