#include<stdio.h>
int main(){
    int arr[3]={1,3,4};
    int *ptr=&arr[1];
    *ptr++;
    printf("%d %d",ptr[-1],ptr[0]);
}