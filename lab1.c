#include<stdio.h>
int main(){
    int n;
    n=1329;
    int y,w,d;
    y=n/365;
    int delay=n%365;
    w=delay/7;
    d=delay%7;
printf("year=%d \n week=%d \n days=%d",y,w,d);
}