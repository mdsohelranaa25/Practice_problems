#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        
        int friq[11]={0};
       
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            friq[arr[i]]++;

        }
        int max=0;
        int ind;
        bool flag=true;
        for(int i=1;i<=10;i++){
            if(friq[i]>=max){
                if(friq[i]==max) flag=false;
                else {
                    max=friq[i];
                    ind=i;
                    flag=true;
                }
            }
        }
        if(flag==false) printf("CONFUSED\n");
        else printf("%d\n",ind);
    }
}