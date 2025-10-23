#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    int arr[n][n];
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if(i==j) odd+=arr[i][j];
            if(i+j==n-1) even+=arr[i][j];
        }
    }
   int mm=odd-even;
   if(mm<0) mm*=-1;
   printf("%d",mm);

}