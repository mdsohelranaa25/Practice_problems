#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char ch[n+1];
    scanf("%s",ch);
    int t=0,a=0;
    for(int i=0;i<n;i++){
        if(ch[i]=='A') a++;
        else t++;
    }
    if(a>t) printf("A");
    else if(a<t) printf("T");
    else {
        if(ch[n-1]=='A') printf("T");
        else printf("A");
    }
}