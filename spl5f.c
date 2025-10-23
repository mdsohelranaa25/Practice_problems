#include<stdio.h>
#include <stdbool.h>


int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        bool flag=true;
        for(int i=0;i<n-1;i++){
            if(abs(arr[i]-arr[i+1])!=5&&abs(arr[i]-arr[i+1])!=7) {
                flag=false;
                break;
            }
            
            
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
}