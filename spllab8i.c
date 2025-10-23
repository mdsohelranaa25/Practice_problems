#include<stdio.h>
#include<string.h>
int main(){
    char ch[1001];
    scanf("%s",ch);
    int count=0;
    int i=0;
    int len=strlen(ch);
    while(i<len/2){
        if(ch[i]!=ch[len-i-1]){
            count=1;
            printf("No");
            return 0;
        }
        i++;
    }
    printf("Yes");
}