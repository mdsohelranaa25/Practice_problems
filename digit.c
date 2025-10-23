#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        while(n){
            int rem=n%10;
            printf("%d ",rem);
            n=n/10;
        }printf("\n");

    }
}