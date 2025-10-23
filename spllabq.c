#include<stdio.h>
int main(){
    long long  n;
    scanf("%lld",&n);
    long long  a,b,c,sum=0;
    scanf("%lld%lld%lld",&a,&b,&c);
    sum=a+b+c;
    printf("%lld",(n-sum));
}