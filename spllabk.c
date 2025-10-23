#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
       
        int arr[n];
         int a[n];
         for(int i=1;i<=n;i++){
            a[i]=0;
         }
        int max=0;

        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            a[arr[i]]++;
            if(a[arr[i]]>max)max=a[arr[i]];

        }
        printf("%d\n",n-max);
    }
}