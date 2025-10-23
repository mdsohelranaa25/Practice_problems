#include<stdio.h>

int main() {
    long long t;
    scanf("%lld", &t);
    int count=0;
    while(t!=1){
        if(t%2==0) {
            t/=2;
            printf("%d ",t);
            
        }
        else{ t=t*3+1;
        printf("%d ",t);
       
    }
    

}
}
