#include<stdio.h>
int main(){
    int a,b,x,y,messi,ron;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    messi=a*2+b;
    ron=x*2+y;
    if(messi==ron)printf("Equal");
    else if(messi>ron)printf("Messi");
    else printf("Ronaldo");
}