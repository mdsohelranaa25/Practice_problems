#include<stdio.h>
int main(){
    int m;
    for(int i=1000;i>=1;i--){
        if(i%5==0){
            printf("\n%d ",i);

        }
        else printf("%d ",i);
    }
}