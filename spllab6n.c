#include<stdio.h>
float love(int a , int m);
int main ()
{
    float a=99;
    float m=1;
         printf(" Dear Suborna, I can't express how much I love you.  It's been like 5 years but you never tried to understand my feelings.  I've been trying to forget you but I can't. just Give me one chance.  If you give 1 percent effort, I will give 99 percent effort. Then our love will be percentage of ");
         printf("%f", love(a,m));
         printf(" I love you so much. I want to spend my whole life with you.  ");
    return 0;
}
float love(int a ,int m){
    float percentage= ((a+m));
return percentage;
}#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d",&n);
     int m;
     int total=0;
     for(int i=0;i<n;i++){
        scanf("%d",&m);
        if(m%2!=0) total++;
     }
    if(total%2!=0) printf("NO\n");\
    else {
       if( total>=2)printf("YES\n");
         
        else printf("NO\n");
    }

    }
}