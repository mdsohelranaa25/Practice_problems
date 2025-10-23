#include<stdio.h>
int main(){
    int n;
     scanf("%d",&n);
    int arr[n];
   
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
   int ll=n;
    while(ll--){
        int index=0;
        while(index<n-1){
            if(arr[index]>arr[index+1]) {
                int temp=arr[index];
                arr[index]=arr[index+1];
                arr[index+1]=temp; 
            index++;
            } else 
            index++;

        }

    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}