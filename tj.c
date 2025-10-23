#include<stdio.h>
#include<stdlib.h>
int main(){
long long t,sum=0;
scanf("%lld",&t);
long long a[t];
for(long long i=0;i<t;i++){
    scanf("%lld",&a[i]);
    sum=sum+a[i];
}
if(sum<0) sum*=-1;
printf("%lld\n",sum);
return 0;
}