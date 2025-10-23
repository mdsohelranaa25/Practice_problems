#include<stdio.h>
int main(){

float n;
scanf("%f",&n);
int d=n*10;

int f=d%10;
int e=d/10;
if(f>=0&&f<=2){
    printf("%d-",e);

}

else if(f>=3&&f<=6)
printf("%d",e);

else printf("%d+",e);

return 0;



}