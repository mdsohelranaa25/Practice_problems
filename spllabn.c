#include<stdio.h>
#include<stdbool.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    bool flag=true;
    while(a!=0||b!=0){
        int d,e;
        d=a%10;
        e=b%10;
        a/=10;
        b/=10;
        if(d+e>=10) {flag=false;
        break;
        }

    }
    if(flag) printf("No");
    else printf("Yes");
}