#include<stdio.h>
long long n,a[25];
long long sum=0;
long long ans=1e9+10;
void rec(long long i, long long one,long long two){
    if(i==n){
        long long dif=one-two;
        if(dif<0) dif*=(-1);
        if(ans>dif) ans=dif;
        return;
    }
    rec(i+1,one+a[i],two);
    rec(i+1,one,two+a[i]);
}
int main(){
    scanf("%lld",&n);
    for(long long i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    rec(0,0,0);
    printf("%lld",ans);
    return 0;
}