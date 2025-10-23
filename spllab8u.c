#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char ch[n+1];
    scanf("%s",&ch);
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            printf("%c",ch[i]);
        }
    }
}