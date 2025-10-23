#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    char ch[101];
    scanf("%s",ch);
    int len=strlen(ch);
    if(len<=10) printf("%s\n",ch);
    else {
        int l=len-2;
        printf("%c%d%c\n",ch[0],l,ch[len-1]);
    }
}
}