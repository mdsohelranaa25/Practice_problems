#include<stdio.h>
#include<stdlib.h>
#define ll long long

int   compare(const void *a,const void *b){
    return(*(ll*)a-*(ll*)b);
}
int main(){
     ll n;
    scanf("%lld",&n);
    ll arr[n];
    for(ll i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    ll count=1;
    qsort(arr,n,sizeof(ll),compare);
    for(ll i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]) count++;
    }
    printf("%lld",count);

}