#include<stdio.h>
int main(){
    char ch;
    int n;
    scanf("%c",&ch);
    scanf("%d",&n);
    int m;
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        for(int i=0;i<m;i++){
            printf("%c",ch);
        }
        printf("\n");
    }
}