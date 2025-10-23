#include<stdio.h>
#include<string.h>
int main(){
    char ch[11],chh[11];
    scanf("%s",&ch);
    scanf("%s",&chh);
    int l1=strlen(ch);
    int l2=strlen(chh);
    printf("%d %d\n",l1,l2);
    printf("%s%s\n",ch,chh);
    char ccc=ch[0];
    ch[0]=chh[0];
    chh[0]=ccc;
    
 printf("%s %s",ch,chh);

}