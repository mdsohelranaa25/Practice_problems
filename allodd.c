#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        int sum=0;
        scanf("%d %d",&n,&m);
        if(n<m){
            int temp=n;
            n=m;
            m=temp;
            for(int i=m+1;i<n;i++){
                if(i%2!=0){
                    sum=sum+i;
                }
            }
            printf("%d\n",sum);
        }
        else {
            for(int i=m+1;i<n;i++){
                if(i%2!=0){
                    sum=sum+i;
                }
            }
            printf("%d\n",sum);
        }
        }
    }
