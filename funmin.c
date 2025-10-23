#include<stdio.h>
double avg(int n,double arr[])
{
double av=0;
for(int i=0;i<n;i++){
    av+=arr[i];
}
return av/n;
}

int main(){
    int n;
    scanf("%d",&n);
    double arr[n];
    for(int i=0;i<n;i++){
        scanf("%lf",&arr[i]);
    }
    double av=avg(n,arr);
printf("%.6lf",av);
}
