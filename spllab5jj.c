#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
int arr[6];
for(int i=0;i<6;i++){
    scanf("%d",&arr[i]);
}
int al=0,bob=0;
if(arr[0]>arr[1]||arr[0]>arr[2]) {al+=arr[0];
if(arr[1]>=arr[0]||arr[1]>=arr[2]) al+=arr[1];
else al+=arr[2];
}
else al+=(arr[1]+arr[2]);
if(arr[3]>=arr[4]||arr[3]>=arr[5]) {bob+=arr[3];
if(arr[4]>=arr[3]||arr[4]>=arr[5]) bob+=arr[4];
else bob+=arr[5];
}
else bob+=(arr[4]+arr[5]);
//printf("%d \n %d\n",al,bob);
if(al>bob) printf("Alice\n");

else if(al<bob) printf("Bob\n");
else printf("Tie\n");


}
}