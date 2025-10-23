#include<stdio.h>
#include<string.h>
int main(){
    char ch[1000001];
    scanf("%s",ch);
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        count+=(ch[i]-'0');
    }
    printf("%d",count);
}