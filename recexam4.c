#include<stdio.h>
int main(){
    char ch[20];
    scanf("%s",ch);
    ch[0]=ch[0]-32;
    
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='s') printf("$");
        else if(ch[i]=='i') printf("!");
        else if(ch[i]=='o') printf("()");
        else printf("%c",ch[i]);
    }
    printf(".");
}