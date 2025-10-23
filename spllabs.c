#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=b;i<=c;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
}