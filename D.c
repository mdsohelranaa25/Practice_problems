#include<stdio.h>
#include<math.h>
int main(){

 long long a,b,c;
 scanf("%lld%lld",&a,&b);
 long long d=a/b;
 c=a%b;
 if(c>0) printf("%lld",d+1);
 else printf("%lld",d);
}