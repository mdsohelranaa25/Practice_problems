#include<stdio.h>
int  rec(int n,int count){


if(n==1) return count;
else {

    if(!(n%2)) return rec(n/2,count+1);
    else  return rec(n*3+1,count+1);
    
}

}
int main (){
int n;
int count=1;
scanf("%d",&n);
int len=rec(n,count);
printf("%d",len);
}