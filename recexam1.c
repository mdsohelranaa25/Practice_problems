#include<stdio.h>
int leap(int n){
    if(n%400==0||(n%100!=0&&n%4==0)) printf("Yes");
    else printf("No");
}
int main(){
    int n;
    scanf("%d",&n);
    leap(n);
}