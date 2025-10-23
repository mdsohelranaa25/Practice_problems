#include<stdio.h>
int arr[105];
int sum(int ss,int n,int i){
    if(i==n) return ss;
    else return sum(ss+arr[i],n,i+1);


}
int main(){
    int t;
    scanf("%d",&t);
    int m=0;
    while(t--){
        m++;
        int n;
        scanf("%d",&n);
        
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int s=sum(0,n,0);
        printf("Case %d: %d\n",m,s);
    }
}