#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) {
            flag=false;
            break;
        }
        
    }
    if(flag) printf("Yes");
        else printf("No");

}