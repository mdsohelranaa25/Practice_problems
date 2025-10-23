#include<stdio.h>
int main(){
    int n;
    int target;
    
    scanf("%d",&n);
      scanf("%d",&target);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            k=1;
            break;
        }
    }
    if(k) printf("YES\n");
    else printf("NO\n");
    
}