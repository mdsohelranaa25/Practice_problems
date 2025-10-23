#include<stdio.h>
int fun(int n){
    if(n==0) return 0;
    else return fun(n-1)+n;
}
int main(){
    int n;
    scanf("%d",&n);
    int nn=fun(n);
    printf("%d",nn);
}