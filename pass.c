#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int max=0;
    for(int i=0;i<n;i++){
        int m;
        scanf("%d",&m);
        if(m>=max)
        max=m;
    }
    printf("%d",max);
}