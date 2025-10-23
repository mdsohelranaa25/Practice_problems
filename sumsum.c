#include<stdio.h>
int main(){
    int n,a,b;
    int ans=0;
    scanf("%d%d%d",&n,&a,&b);
    for(int i=1;i<=n;i++){
        int sum=0;
        int mm=i;
        while(mm){
        
        int rem=mm%10;
        sum=sum+rem;
        mm=mm/10;
        }
        if(sum>=a&&sum<=b){
            ans=ans+i;
        }
    }
    printf("%d",ans);
}