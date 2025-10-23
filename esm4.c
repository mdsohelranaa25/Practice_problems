#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d%d",&n,&x);
        int sum=0;
        int arr[n];
        int ar[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&ar[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]>=x){
                sum+=ar[i];
            }
        }
        printf("%d\n",sum);
    }
}
