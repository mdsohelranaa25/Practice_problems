#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=2) printf("2 ");
    
int count=0;
    for(int i=3;i<=n;i++){
        for(int j=2;j<i;j++){
           if(i%j==0) count++;
        }
        if(count==0) {
            printf("%d ",i);
          
        }
        else   count=0;
        
}
}