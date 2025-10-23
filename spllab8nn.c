#include<stdio.h>
#include<string.h>
int main(){
    char ch[20];
    scanf("%s",ch);
    printf("%c",ch[0]-32);
    for(int i=1;i<strlen(ch);i++){
        if(ch[i]=='i'){ printf("!");}
        else if(ch[i]=='s') {printf("$");}
        else if(ch[i]=='o'){printf("()");}
        else printf("%c",ch[i]);
    }
    
    printf(".");
}