// #include<stdio.h>
// #define ll long long
// int rec(int n,int a,int b){
//     if(n==0) return a;

//     else return rec(n-1,b,a+b);
    
// }
// int main(){
//     int n;
//     scanf("%d",&n);
    
//     int res=rec(n-1,0,1);
//     printf("%d",res);
// }

#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int a[51],i;
  a[0]=0;
  a[1]=1;
  for(i=2;i<n;i++){
    a[i]=a[i-1]+a[i-2];
  }
    printf("%d\n",a[n-1]);

  return 0;
}