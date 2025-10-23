#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int sum=0;
        for(int i=0;i<2*n;i++){
            int m;
            scanf("%d",&m);
            sum+=m;
        }
        int mm;
        if(sum>=n){

        int mmm=sum-n;
        mm=n-mmm;
        }
        else mm=sum;
        printf("%d %d\n",sum%2,mm);
    }
}