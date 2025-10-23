#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char ch[101] ;
       scanf("%s",ch);
       if (strncmp(ch, "http://", 7) == 0) {
            printf("Case %d: https://%s\n", i+1, ch + 7);
        } else {
            printf("Case %d: %s\n", i+1, ch);
        }


    }
} 