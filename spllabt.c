#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        int d;
        scanf("%d",&d);
        sum+=d;
         float avg=(float)sum/i;
         printf("%f\n",avg);
    }
}