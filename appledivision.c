#include<stdio.h>
#define ll long long
  ll n;
  ll arr[25];
  ll ans=1e9+10;
ll rec(int i,ll one,ll two){
    if(i==n) {
        ll dif=one -two;
        if(dif<0) dif*=-1;
        if(dif<ans) ans=dif;
        return ans;

    }
    rec(i+1,one+arr[i],two);
    rec(1+i,one,two+arr[i]);

}
int main(){
  
    scanf("%lld",&n);
    
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    printf("%lld",rec(0,0,0));
}