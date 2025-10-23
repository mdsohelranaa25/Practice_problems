#include<stdio.h>
int rec(int ind,int w,int wt[],int val[],int n){
    if(ind==n||w==0) return 0;
   
        if(wt[ind]>w) return rec(ind+1,w,wt,val,n);
        int include=val[ind]+rec(ind+1,w-wt[ind],wt,val,n);
        int excl=rec(ind+1,w,wt,val,n);
        return include>excl?include:excl;
    
}
int main(){
    int n,w;
    scanf("%d%d",&n,&w);
    int wt[n],val[n];
    for(int i=0;i<n;i++){
       scanf("%d %d",&wt[i],&val[i]);
    }
    int max=rec(0,w,wt,val,n);
printf("%d",max);
}