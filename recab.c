#include<stdio.h>

long long rec(long long n,long long count){
if(n==1) return count;
if(n%2) {
   return rec(n*3+1,count+1);
    
}
else {
 return rec(n/2,count+1);
    
}
}
int main(){
    long long n;
    scanf("%lld",&n);
    printf("%lld",rec(n,1));
}