#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int d=n%5;
    
    for(int i=0;i<d;i++){
        printf("1 ");
    }
    n-=d;
    d=n%10;
    if(d==5) printf("5 ");
    n-=d;
    d=n%50;
    d/=10;
    for(int i=0;i<d;i++){
        printf("10 ");
    }
    n-=d*10;
    d=n%100;
    if(d==50) printf("50 ");
    n-=d;
    d=n%500;
    d/=100;
    for(int i=0;i<d;i++){
        printf("100 ");
    }
    n-=d*100;
    d=n/500;
    for(int i=0;i<d;i++){
        printf("500 ");
    }



}